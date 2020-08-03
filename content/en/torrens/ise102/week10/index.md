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

Games we play have frames, like an animated movie. This happens maybe 60 times per second.This repeats for the lifetime of the game, so we're going to need.. **a loop*

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

In our first exercise you'll 

### Getting the player involved

Unless you're making a falling sheep simulator, you probably need to check if the player is pressing buttons or directions on a gamepad, or keys on a keyboard.


A new game loop:

```
while (player hasn't quit)
  check for input
  update state of all things in game
  draw graphics to screen
end while
```

### A look at the loop from last week

I hid it in main last week to keep things simple.

### Move it into draw.

Each screen that you put in a game will have different needs. Some, like the exit screen, doesn't need to keep updating. 

## Exercise: Listening for input

We asked our programmer to make a program that fills the screen with red when the _R_ key is pressed, and yellow when _Y_ is pressed. If we don't have it up and running within 7 days we'll definitely go out of business.

Our best programmer was on the task, but she hasn't yet returned from her Genetically Engineered Dinosaur Rescue Park holiday. The  working files are here, and she noted how to finish it in her comments. Can you finish it?

It's above our heads: all we know is the function `keyIsDown('R')` returns `true` if the _R_ key is being held down. 

Help us!

Download [Week10_TapColours.zip](Week10_TapColours.zip)


### In Sorta Pseudocode

```
Listen for R  or Y
If it's R:
  fill screen with red
If it's Y: 
  fill with yellow  
```

**_10 minutes_**

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

## Exercise 1

1. Create an _ise102\_console_ project and **type the _Princess Bubblegum_** code into `main()`.
2. Now take the role of the interviewer. You still think "Princess Bubblegum" is a regular name.
   * Create a variable `lastName`. Use `substr` (substring) to **store the Princess's last name** in `lastName`.  
   * After your discussion of her first name, go to a new line and **complement her** on her last name. Mention it in the sentence.

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
    
## Objects Also..
  
  * Exist in the C++ libraries: `string`, `cout` 
  * Are things we can create to suit our own programs.
  * Can be made to represent anything you need
  * Are an abstraction: we put the complexity of variables and functions inside our object, and just use it as if it was a real thing. 
      ```cpp
      myLaserGun.charge = 100000;
      myLaserGun.pew();
      myLaserGun.pew();
      ```
## Organise Things:

* Storing a character in your program as a couple separate variables might be fine, but: 
  * what if you have two, or five? 15, 20, 25 variables? name1, height1, xPosition1, yPosition1, name2, height2.
* Have objects **lump things together**.

```cpp
Creature batty;     // Both are Creatures
Creature horsey;     // So have same named variables available.

// Set up player1 data
batty.colour = FG_BLACK;
batty.x = 5; 
batty.y = 10;

// Set up player 2 data
horsey.colour = FG_GREY;
horsey.x = 25; 
horsey.y = 10;
```

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

## Assessment 3: Snake

Discuss brief, plan.


## Homework

When batty reaches the right border of the screen, she needs to teleport to the left border. Another way to word it: when she collides with the the right border she wraps around to the left side of the play area.

1. Take a grid and, assuming she's moving right on row 10, draw the place she will be when she needs to teleport (hint: it's an illegal position, on a border)
2. Draw the place she needs to appear (a legal one)
3. Write down those x coordinates.
4. Now, on **the line below** the one in which we apply yDir to her y:
   * Check if her x location is on the disappear point.
   * If true, change her x to the location she needs to appear.
5. Apply the same process to going left, going up and going down.

<!--

## Moving

### Up Down Left Right

{{< imgcard xy_leftright_updown Link "xy_leftright_updown.jpg">}}
{{< /imgcard >}}

So, we can move left and right by changing our x location.

### Exercise 2a: Control Movement

Here's an overview (functions and main) of a new structure we can use for our game. As you'll see next week, it'll help us use multiple screens.

{{< imgcard code_flappy_functions Link "code_flappy_functions.png">}}
{{< /imgcard >}}

We'll use it now to move around. **Grab the base file** and **fill in** the missing bits from the code below.

[Week10_moving_batty_finish.zip](Week10_moving_batty_finish.zip)

{{< imgcard code_flappy_1 Link "code_flappy_1.png">}}
{{< /imgcard >}}

## Revisiting The Game Loop

Remember our old friends **input, storage, processing,output**? You just saw them in the loop in `playFlappyBat()`;

The frame-based **loop during gamePlay**, at its simplest, is this:
```
do:
  get input
  simulate everything(processing)
  ouput to screen
while game hasn't ended
```

A more detailed explanation, in _C++_ comments:

```cpp
do
{
  /// CHECK INPUTS - mouse, keyboard, gamepad inputs. 
  /// button is down, dpad direction is left, etc. Process and store them.
  
  /// PROCESSING/SIMULATION - model the events in the game. Move or shoot or use item
  /// based on the inputs. Have enemies do their next thing as well. Check who gets shot,
  /// lands on a platform, etc etc.
  
  /// OUTPUT
  /// Now that the world has changed, draw it all to screen. Magic effects, new 
  /// health level, new map location etc.
  /// Also non visual output: play sounds, vibrate control pad etc.
} while(!gameOver)  /// Do it all again next frame.
```

### Exercise 2b: Add Up and Down

1: Add constants for LEFT and RIGHT that can be used when setting value of xDir.
2: Add constants for UP and DOWN.
3: Look at the left right code; now implement up and down movement.

## Too fast!

Right now our loop runs 60 times per second. If we move one pixel every loop thats 60 pixels a second, and our window is only 30!

maths: 
60 loops * move 1 pixel in x = we moved right 60 pixels 1 second.  
30 pixels in window / 60 moved per second = 0.5 seconds!

How do we change the speed? 

### Don't move so far each frame

But we're moving 1 pixel, we'd have to move **move less than 1 pixel** per loop but.. fractions! That gets complicated: you have to use floats, and round to the nearest pixel etc.
    
### Easy Fix, Change The Framerate! 

If the problem is that the game is running too fast, just run it slower!

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

*ADD DIAGRAM*

### Our Old Friend Modulus `&`

If batty only moves every 2nd, 4th, or whatever frame, she'll move slower but we'll still catch all the keypresses.

Modulus is great at doing things when certain divisions are reached: even, odd, every 20th, etc.

{{< alert title="You Can't Not Know Integer Division" color= "danger" >}}
If you don't understand _Integer Division_ and _remainders_, it's officially on you now. Go study it, **get it locked down**. It's taught in primary school so it was a long time ago, but it's very easy to re-learn. Look it up on wikipedia, call up your high school maths teacher, whatever, but DO IT NOW.
{{< /alert >}}

### Exercise 2d: Move Every X Frames

Put an `if` around the code in `playBattyGame` that applies batty's `xDir` and `yDir` to her position. Try moving her every 10 frames, every 2 frames.. find a value that feels good.

-->
