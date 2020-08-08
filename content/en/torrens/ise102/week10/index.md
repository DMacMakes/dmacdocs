---
title: "Week 10a: Frames, input, objects"
linkTitle: "W.10a: Frames/Objects"
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

