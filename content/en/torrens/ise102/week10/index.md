---
title: "Week 10: Objects and Moving"
linkTitle: "W10: Move Objects"
weight: "100"
description: >
  Objects and how to change their properties. Using an object as a moving game character.
---


1. Looping through frames
2. How textpixels does it
3. Listening for input - the game loop

## Frame based games

IMAGE: Gif of frames flip book

{{< imgcard flipbook_2frames >}}
2 frame flipbook
{{< /imgcard >}}

Games we play have frames, like an animated movie. This happens maybe 60 times per second.This repeats for the lifetime of the game, so we're going to need.. **a loop*

{{< youtube "gu43LAnOprk?t=45" >}}
**Start at 45 seconds**

Here's the loop unrolled a little:

* A character moves a teeny tiny bit, the camera moves a bit, maybe a nearby sheep begins falling from a block
* _Draw to the screen: the world, as the camera sees it, including the character and sheep_
* Character moves another bit, the camera as well, sheep continues falling from a block
* _Draw to the screen: the slightly changed situation_
**2/60ths of a second have now passed**
etc.

### Drawing frames

Last week we learned to draw to the screen. What wasn't obvious, because our drawings didn't move, was that **we were doing it 60 times per second.**

{{< alert title="textpixels draws our frames" color= "primary" >}}

`textpixels` handles the drawing for us by:

1. Letting us draw to a canvas or _buffer_ using functions like ```fillRect```, ```drawPixel``` and ```drawString```.
2. Taking that canvas when we're done making rectangles etc and drawing it to the console. It's faster that way and prevents flickering
3. Going to sleep for a bit, to keep the frame rate locked at 60 (it can go a lot faster) 
4. Looping back to 1

{{< /alert >}}

In the week 9 project you did all your drawing (step 1 above) in a ```draw``` function. I hid the looping bit from you by leaving it in ```main```.

### Getting the player involved

Unless you're making a falling sheep simulator, you probably need to check if the player is pressing buttons or directions on a gamepad, or keys on a keyboard.

{{< alert title="A new game loop" color= "secondary" >}}

```
while (player hasn't quit)
  check for input
  update state of all things in game
  draw graphics to screen
end while
```
{{< /alert >}}

### Looking at last week's look

I hid it in main last week to keep things simple.
(Week 9 code)

### Our new approach!

Each screen that you put in a game will have different needs. They want to set up their own variables before going into a loop.

{{< imgcard code_playGame_loop Link "code_playGame_loop.png">}}
Here's our playGame functin with its own loop.
{{< /imgcard >}}

## Exercise 1: Listening for input

{{< alert title="A brief from a mysterious client" color= "primary" >}}
We asked our programmer to make a hot new mobile game that fills the screen with red when the _R_ key is pressed, and yellow when _Y_ is pressed. If we don't have it up and running within 7 days we'll definitely go out of business.

Our best programmer was on the task, but she hasn't come back from her holiday to _Giant Genetically Altered Animal World_. The  working files are here, and she said she had some working test code in there. Can you finish it?

Download [Week10_TapColours_incomplete.zip](Week10_TapColours_incomplete.zip)

**_You have 10 minutes_**
{{< /alert >}}

### How did we go?

How I'd approach it.

## Using Objects
 
 Objects are a **types of data** in C++ that have more features than your basic types (`int`, `float`, `char`). Objects we've used so far include `string`, `cin` and `cout`.
   
### Objects can
  
Behave like a normal variable. Look at `string` for example:

```cpp
string fullName = "Princess Bubblegum";   // like initialising an int or bool
```

Also **behave like folders** that contain more variables and functions inside
  * We can access them by putting a dot `.` right after the variable name

{{< imgcard string_object_functions Link "string_object_functions.png">}}
The `string` object has plenty of useful functions.
{{< /imgcard >}}

The **output:**
```
        Your full name, Princess Bubblegum is 18 characters long.
        Is 'Princess' your first name? I like it.
```

{{< alert title="Dot Notation" color= "primary" >}}
You access variables and functions within an object by typing its  <b>variable name followed by a dot</b>. Intellisense will offer you a **list** of functions/variables for that data type. 

Here, it's `string`, and I've found a `length()` function:

<img src="string_intellisense.jpg">
{{< /alert >}}

## Exercise 2: String object functions

1. Create an _ise102\_console_ project and **type the _Princess Bubblegum_** code into `main()`.
2. Now take the role of the interviewer. You still think "Princess Bubblegum" is a regular name.
   * Create a variable `lastName`. Use `substr` (substring) to **store the Princess's last name** in `lastName`.  
   * After your discussion of her first name, go to a new line and **complement her** on her last name. Mention it in the sentence.

{{< imgcard string_object_functions Link "string_object_functions.png">}}
This goes into main.
{{< /imgcard >}}

One **example:**

```
        Your full name, Princess Bubblegum is 18 characters long.
        Is 'Princess' your first name? I like it.
        I can't think of a lovelier last name than `Bubblegum`.
```

### Dive Deeper: String Functions

* `string::substr()` (substring) [documentation](http://www.cplusplus.com/reference/string/string/substr/) 
* `string::length()` [documentation](http://www.cplusplus.com/reference/string/string/length/)
* `string` object [documentation](http://www.cplusplus.com/reference/string/string/)


--------------------------

## PART 2 - Tuesday

## Other objects
  
  Ojects also: 
  * Exist in the C++ libraries: `string`, `cout` 
  * Are things we can create to suit our own programs.
  * Can be made to represent anything you need

## Organise Things:

Humans live in a world of things: objects that have a size and colour, objects that do stuff or not much, living things, non living things.

Naturally, programming becomes a lot easier if, instead of loads of variables all over the place, we can lump them together into things called objects.

Think how messy it would be if we have 20 different Creatures in our game and each had to have a colour, x and y position, and x and y direction!
Just for the first character, we have: `colourFroggy`, `xPosFroggy`, `yPosFroggy`, `xDirFroggy`, `yDirFroggy`. Dealing with all those could drive you fruity.

### Abstract it!

Objects create handy _abstractions_: the let us lump things together where they make sense for us.

Here's a better way to handle our Creatures. It's just as long declaring them (without a loop) but they're a lot easier to work with afterwards!

```cpp
Creature batty;     // Both are Creatures
Creature froggy;     // So have same named variables available.

// Set up creature1 data
batty.colour = FG_BLACK;
batty.xPos = 5; 
batty.yPos = 10;
batty.xDir = batty.yDir = 0;

// Set up player 2 data
froggy.colour = FG_GREEN;
froggy.xPos = 25; 
froggy.yPos = 10;
froggy.xDir = froggy.yDir = 0;
```

<!--
### Objects Match Our Thinking

Humans live in a world of objects with properties that do things.
We're sitting on **chairs**.
* At a minimum they have a `seatHeight`
* Maybe it `hasWheels` (t/f), maybe it doesn't.
* If your chair `hasGasLift` (t/f), then you can `adjustHeightGas(UP, 2)`, or `adjustHeightGas(DOWN, 1)`

**In C++**, that would look like:
{{< imgcard code_chair_object Link "code_chair_object" >}}
Declaring a variable of type `Chair` and using its variables with <em>dot notation</em>.
{{< /imgcard >}}

The **output**:
```
Danny's chair seat is 48cms above ground.
Danny's seat height was adjusted to 42cm above ground.
```
-->

## Moving

### Up Down Left Right

{{< imgcard xy_leftright_updown Link "xy_leftright_updown.jpg">}}
{{< /imgcard >}}

So, we can move left and right by changing our x location.

## Controlling Movement

We'll use it now to move around. **Grab the base file** and **fill in** the missing bits from the code below.

[Snake_A3_incomplete.zip](Snake_A3_incomplete.zip)

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
{{< /alert >}}Revisiting The Game Loop

### Exercise 2b: Add Up and Down

Step through the TODOS in the program to get 
1: Add constants for LEFT and RIGHT that can be used when setting value of xDir.
2: Add constants for UP and DOWN.
3: Look at the left right code; now implement up and down movement.

## Controlling speed

**The game is too slow**. We need to move faster, so we need a way to define our speed. We know the speed (10 pixels per second) but it's **hard to get a feel for what that means**.

### Setting a target
Let's pick a more meaningful metric: **how long does it take to go across the level**?

{{< alert title="Revision: The long Maccas Drive" color= "primary" >}}
Your friend wants to go to his favourite maccas, but it's **100km** away. It's also through suburbia, so it's **50kph** the whole way. It sounds awesome, but you need to eat within three hours. Will you get there in time?

Why did you know the answer? Because you know this formula:

$$time = {distance \over speed}$$

To check, lets plug the $distance$ (100km) and the $speed$ (50kph)

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


{{< alert title="Plugging it in" color= "secondary" >}}
Lets plug it distance = 35 and speed = 10 (both using "pixels")

$$time = {35 \over 10} = 3.5sec$$

**3.5 seconds** just to cross the level once. Gross.
{{< /alert >}}



### How to speed up

Say we want to half our time to cross the level. Let's use a bit of algebra.

Here's our formula with t (timeToCrossLevel), l (LEVEL_WIDTH)

if ```timeToCrossLevel``` (t) is 

To halve our time (t/2) we'll need to double speed to 20 pixels per second.

What can we change to increase pixels per second?

pixelsPerSecond = pixelsPerFrame * frames * 2

I want to get there in half the time, 1.5 seconds! To get there in half the time, we need to double our speed. 

pixels per second is 1/10
I want to know how many pixels per second 
To formalise it tho, we need to shift our equation around.

t = w / p
pt = w
p = w/t

pps = 30 / 1.5
pps = 20.

We move 1 pixel per frame/loop so we need 20 frames per second.

so our desired pixels per second, to cross the screen is 20.



Our speed 

### Easy Fix, Change The Framerate! 

The game 

### Exercise 2c: setFPS

textpixels has a handy function to do it. Put it **inside main, before the game loop**
```cpp
  textpixel::setFPS(60);
```
Figure out the fps needed to cross the window (30 pixels) in 2 seconds. Apply it in the code. Looks good!

### Looks Good Feels Bad: Responsiveness

_textpixel_ locks the framerate by **sleeping** until you need it to draw another frame. The problem is: it's **so fast** at its job, it only takes about **0.001 of a second to draw a frame**. Since it sleeps the rest of the time, your game **misses keyboard inputs** because it's **barely ever running**.

{{< alert title="How Often Is TextPixels Awake?" color= "danger" >}}
It takes 1/1000th (0.001) of a second to do a frame's work. It sleeps the rest.

**15 fps * 0.001 = 0.015** seconds of work per second: **it's awake 1.5%** of the time.

So _textpixels_ is sleeping 98.5% of every second, in gaps of about 65ms.
{{< /alert >}}

If our game isn't running most of the time, and sleeps in 65ms blocks, **it's easy for textpixels to miss keypresses**.

<!-- *ADD DIAGRAM -->

### Our Old Friend Modulus `&`

If batty only moves every 2nd, 4th, or whatever frame, she'll move slower but we'll still catch all the keypresses.

Modulus is great at doing things when certain divisions are reached: even, odd, every 20th, etc.

{{< alert title="You Can't Not Know Integer Division" color= "danger" >}}
If you don't understand _Integer Division_ and _remainders_, it's officially on you now. Go study it, **get it locked down**. It's taught in primary school so it was a long time ago, but it's very easy to re-learn. Look it up on wikipedia, call up your high school maths teacher, whatever, but DO IT NOW.
{{< /alert >}}

### Exercise 2d: Move Every X Frames

Put an `if` around the code in `playBattyGame` that applies batty's `xDir` and `yDir` to her position. Try moving her every 10 frames, every 2 frames.. find a value that feels good.

## Homework

1. Move up and down
2. Change movement speed by changing fps a little
3. Change it way up to 100, but only draw the screen every 8 frames (use modulus)

Deliver to Matt by Sunday night
Danny will cover in class Monday.
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

