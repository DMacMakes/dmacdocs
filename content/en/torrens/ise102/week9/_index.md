---
title: "9: \"Graphics\" In The Console"
linkTitle: "W.9 \"Graphics\""
weight: 90
description: >
  Going beyond text-entry mode, to drawing graphics with text.
resources:
  - src: "*word_in_image_names*"
    params:
      byline: "Credit: this guy"
---

## Slots Is Done

* Thanks for submissions
* Check Blackboard. Some people submitted the wrong files and I've messaged you about resubmitting. Each day costs marks so act now.
* I haven't looked at the code yet, just that the file structure looked right.

## Beyond Text Entry Mode

We've been making games in an environment like a chat, or a left-justified text document. 

### Input and Storage

* We can listen for input from a keyboard
* People can type in characters, digits, sentences
* Once they hit enter, we can store that data

### Drawing 

* We have symbols!
* We can space stuff out.. from the top or left.
![slots 1](output_slots_skeleton_1.png)

* We have colours!
![termcolor menu](output_termcolor_menu.jpg)

### Limitations

Two big elements stand out as missing from our console/terminal games.

#### 1. Drawing Anwywhere

We're really limited in **where we can place things** on screen. 

**Text symbols are** actually **not bad** for drawing graphics
- you can represent a lot with colour and symbols. 
- Buuut **we have to stack them** up from the left of the screen, line by line
- We can't change things we've drawn, except to clear the screen try again.

Things you can do if you can **draw anywhere**:

{{< imgcard pro_football_fairchild_channel_f >}}
Games on early consoles like the Fairchild Channel F are close to text mode but would be painful to make and play with our current method.
{{< /imgcard >}}

{{< imgcard ansi_voodoo_island >}}
Low colour and a larger character set can be made to do a lot
{{< /imgcard >}}

{{< imgcard "far-manager_windows_5" >}}
How programs looked in text terminal days
{{< /imgcard >}}

{{< imgcard textmode_2000 >}}
Textmode 2000
{{< /imgcard >}}

{{< imgcard zzt >}}
ZZT
{{< /imgcard >}}

## Solution: TextPixels

I'll give you a Visual Studio solution today with a library that draws text characters anywhere on screen. 

* It is effectively like changing big pixels in a low resolution bitmap (eg 30x30)
* It can move to and draw at any x,y coordinate in any sequence
    * no left to right, no tabs `\t` or spaces or newlines `\n` needed.
* Each "pixel" in our "bitmap" is actually a text character drawn to a row/column  spot

{{< imgcard snake_huge_pixels >}}
We can make something like this more easily.
{{< /imgcard >}}

### Download The Example

[Console_Drawing_Week_9.zip](Console_Drawing_Week_9.zip)

We'll treat the characters on screen as giant pixels. Using the TextPixels library, 
they'll be made square.

**Load and run** the code. Run it.

 * drawing a pixel
 * drawing a string
 * Numbers to a string
 * filling a row with a character
 * Show fps

## Exercise

Read the code and comments carefully. Hover over function names for an explanation of what they do.

1. Change the symbol that is drawn across a row to something else.
2. Make it go down a column instead.
3. Change the foreground and background colour of the symbol.
4. Change the border colour.

### How did we do?

Good? Do more!

5. Draw a 10 pixel square at the bottom right of the window, but don't draw over the border.
6. Draw 3 pixels at random places
7. Draw a Tetris L piece somewhere the screen. Falling at whatever orientation you like. 
{{< imgcard tetris_L >}}
The Tetris L piece.
{{< /imgcard >}}
8. Using a loop, fill the screen with horizontal lines in blue and grey lines (hint: modulus)


## Listen for input 
How to listen for input on a given frame

Download [Week9_TapColours.zip](Week9_TapColours.zip)

## Exercise:

1. Background Flip:

```
Listen for R  or Y
If it's R:
  fill screen with red
If it's Y: fill with yellow  
  Y fill yellow
```

2. Border Flip:

```
Listen for B or W
Change the border to blue or white accordingly.
```




<!--
## New Game Loop

We've been waiting for input and reacting. Most modern games don't work that way.

### FPS

30, 60, 144 frames per second? How long is your output on screen before it's redrawn again? There are **1000 milliseconds in a second**. 1000 / fps gives us the **time on screen**.

| FPS                        | Time (ms) per frame               |
|--------                    |-----------------------------------|
| **30** (console)           | 1000/30  = **33.3ms**             | 
| **60** (most monitors)     | 1000/60  = **16.6ms**             | 
| **144** (gaming monitor)   | 1000/144 = **6.9ms**              | 

### Our Old Game Loop

Here's the game loop we know so far, in pseudocode:

```
while (player hasn't quit)
  Display a prompt (output), asking player for input
  Wait for input.......
  process input.
  Display results of processing
end while

show quit message
```

### Animated Game Loop

We can't just leave output on the screen for as long as the player takes to react. Things have to move! At 60fps!

A new game loop:

```
while (player hasn't quit)
  check for input
  update state of all things in game
  draw graphics to screen
end while
```

### Pixels

A grid. 

Starts top left, ends bottom right. Need a graphic.

5 cells by 5 cells:

0 1 2 3 4  
1 1 2 3 4  
2 2 2 3 4  
3 3 3 3 4  
4 4 4 4 4  

Notice something very important: it starts at 0! Drawing last cell of screen is 4,4.
-->