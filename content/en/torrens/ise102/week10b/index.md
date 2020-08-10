---
title: "Week 10b: Speed and Responsiveness"
linkTitle: "W.10b: Speed"
weight: "101"
description: >
  Objects and how to change their properties. Using an object as a moving game character.
---

## Moving

### Up Down Left Right

{{< imgcard xy_leftright_updown Link "xy_leftright_updown.jpg">}}
{{< /imgcard >}}

So, we can move left and right by changing our x location.

## Controlling Movement

We'll use it now to move around. **Grab the base file** and help me **fill in** the missing bits from the code below.

<a class="btn btn-lg btn-primary mr-3 mb-4" href="Snake_A3_incomplete.zip" target="_blank">Download Snake_A3_incomplete.zip<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>

{{< imgcard code_playSnake_incomplete Link "code_playSnake_incomplete.png">}}
The playGame function, like playSlots, just handles the gameplay screen.
{{< /imgcard >}}

{{< alert title="Frame based game loop" color= "primary" >}}
The frame-based **loop during gamePlay**, at its simplest, is this:
```
do:
  get input
  simulate everything(processing)
  ouput to screen
while player hasn't quit/lost
```
{{< /alert >}}

### Demo and work along
I'll explain the codebase above, and together we'll add player controlled movement.

### Exercise 2b: Complete the code

Step through the //TODO: comments in the code and:   
1: Modify and correct the constants for UP and DOWN in `textpixels_enum.h`
2: Add up and down controls and get them working (the left/right control code has everything you need)

## Homework

I'd like to see everyone complete at least the easy and medium homework. Advanced is there 

* _**EASY**_   
   Get snake moving up and down (x,y). Try changing frame rate to higher values, starting with say 12, 15.  
* _**MEDIUM**_  
   Set the framerate so snakey crosses the level in approx 1.8 seconds.  
* _**ADVANCED**_  
  Set the framerate to 200, but only move and draw the snake every 15th frame.   

1. **Zip the solution**  like you would for an assessment submission, taking care to **delete cache folders** like Debug and x86 
2. **Email** to Matt Carr by **midday Monday, August 10**.
  
**Danny will review** Danny in class Monday evening (this doesn't mean deliver the homework late).  

## Speeding up Snakey

**The game is too slow**. We need to move faster, so we need a way to **define our speed**. 

I mentioned the speed is **10 pixels per second** but if we increased that to 16 pixels per second, **would it be clear** what that means?

### A better target

Let's pick a more relatable metric. We'll ask:

> **how long does it take to go across the level?**

Picking a number, we say we want to get across the whole thing in **just 1.5 seconds**.

{{< alert title="Calculating travel time: The long Maccas Drive" color= "primary" >}}
Your friend wants to go to his favourite maccas, but it's **100km** away. It's also through suburbia, so it's **50kph** the whole way. Cool, but you need to eat **within three hours**. _Will you get there in time?_

You probably did that in your head almost without thinking. The formula you used was:

$$time = {distance \over speed}$$

To check our answer, lets plug the $distance$ (100km) and the $speed$ (50kph)

$$time = {100 \over 50} = 2hrs$$

Only 2 hours to Newcastle Maccas, let's go.
{{< /alert >}}

### Applied to our game

The **distance** across our level is **35 pixels**, because that's what I set as the **`LEVEL_WIDTH`**

![](code_snake_level_width.png)

**Snakey's speed** is `10` pixels per second, because we're moving as much as 1 pixel per frame/loop

![](code_snake_move.png)

and because **I set the frames per second** (`fps`) to 10 in main, where I also used `LEVEL_WIDTH`:

![](code_snake_fps10.png)

#### Plugging the values in:
Lets plug it distance = 35 and speed = 10 (both using "pixels")

$$time = {35 \over 10} = 3.5sec$$

> **3.5 seconds** just to cross the level once is slooow. 
> **What speed** would we need to do it in **1.5 seconds**?

#### Speed = distance over time

By moving the formula around we can get speed. Plug in **1.5 seconds** for $time$ and **35 pixels** for $distance$:

$$speed = {distance \over time} = {35 \over 1.5} = 23.\dot{3}pps$$

> We know we need about **23 pixels per second** but how do we get there??

### Increasing pixels per second

We could **moving more** than one pixel **each move**, but not only does it look buggy (skipping whole text pixels) but it's not very accurate:

| MOVE DIST | MOVES | SPEED |
|----- |----- |------ |
| 1 pixel  | 10 | 10 pps |
| 2 pixels | 10 | 20 pps |
| 3 pixels | 10 | 30 pps |

What if we move **more often**?

| MOVE DIST | MOVES | SPEED |
|----- |----- |------ |
| 1 pixel  | 11 | 11 pps |
| 1 pixels | 12 | 12 pps |
| 1 pixels | 12 | 12 pps |
| ... | ... | ... |
| 1 pixels | 23 | 23 pps |

### Move more often with `setFps(int fps);`

1. Scroll to the `main` function 
2. Change the value we're passing to `the textpixels::setFps` to **our target: 23**. 
3. Try it out, see what it's like to cross the screen in about 1.5 seconds.

![Set fps in main](code_snake_fps10.png)

## Looks Good Feels Bad: Responsiveness

It looks better.. but if you try to turn fast you'll notice it sometimes misses it.

{{< alert title="Textpixels is asleep!" color= "danger" >}}

How does _textpixels_ lock the framerate to 23? By **sleeping** (telling the operating system to go and run other programs) until you need it to draw another frame. 

The problem is it only takes about **1/1000th of a second to draw a frame**.  It **totally misses keyboard inputs** because it's asleep about 98.5% of the time.

{{< /alert >}}

We need to **drastically increase the time our game is awake**, and one easy way to do it is:
> Increase the framerate to maybe.. 200fps?

### Lazy moving

An insane frame rate gives us insane speeds: 200 fps produces a **speed of 200pps**:

$$time = {distance \over speed} = {35 \over 200} = 0.175sec$$

Crossing the screen in 0.175 seconds is a problem for humans. We blink, for a start.

> We can keep our app awake and checking for inputs 200 times a second, but be **lazier about moving and drawing the snake.. maybe once every 15 frames**

### Method 1: counting.

1. Declare a variable to store the frames since last move. Do it _before the loop_.
2. Count up by 1 each frame.
3. Move when it reaches 15.
4. Set it back to zero.
5. Goto _2._

### Method 2: our old friend modulus **`%`**

With modulus we can measure intervals easily. If you counted up from 0, dividing each number by 3 the remainders are 0,1,2,0,1,2.. to infinity.

{{< imgproc code_modulus3_loop_1 Resize "700x" Link "code_modulus3_loop_1.png" >}}
Printing the remainder of i divided by 3 (integer math) for every value of i.
{{< /imgproc >}}

So if we only print something every time the remainder is 0, it runs every.. ?th loop. You tell me.

{{< imgproc code_modulus3_loop_2 Resize "700x" Link "code_modulus3_loop_2.png" >}}
If 3 divides evenly into i, then the remainder is 0. So i % 3 is 0. Alternately, why not run only when the remainder is 2, or 1?
{{< /imgproc >}}

Modulus is great at doing things at various loop intervals: drawing even numbered columns a different colour in your tables, triggering a catapult every 20 seconds, etc.

{{< alert title="You gotta know integer division" color= "primary" >}}
If you don't understand **Integer Division** and **remainders**, it's officially on _you_ now. Go study it, **get it locked down**. It's taught in primary school so it was definitely a long time ago (less for you), but it's very easy to re-learn. 

Look it up on wikipedia, call your maths teacher, whatever, but DO IT NOW. 
{{< /alert >}}

> Programmers don't say I don't know, they say **I don't know _yet_.** 👍

<!---

## Homework

When batty reaches the right border of the screen, she needs to teleport to the left border. Another way to word it: when she collides with the the right border she wraps around to the left side of the play area.

1. Take a grid and, assuming she's moving right on row 10, draw the place she will be when she needs to teleport (hint: it's an illegal position, on a border)
2. Draw the place she needs to appear (a legal one)
3. Write down those x coordinates.
4. Now, on **the line below** the one in which we apply yDir to her y:
   * Check if her x location is on the disappear point.
   * If true, change her x to the location she needs to appear.
5. Apply the same process to going left, going up and going down.

--->

