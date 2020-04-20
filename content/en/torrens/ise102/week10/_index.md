---
title: "Week 10: Objects and Moving"
linkTitle: "W10: Move Objects"
weight: "100"
description: >
  Objects and how to change their properties. Using an object as a moving game character.
---

## Week9 Homework

I left you guys a challenge: [Listen for input](../week9/#go-deeper-listen-for-input). Let's look through a possible solution.

## Using Objects
 
 Objects are a **types of data** in C++ that have more features than your basic types (`int`, `float`, `char`). Objects we've used so far include `string`, `cin` and `cout`.
   

### Objects can
  
  * Behave like a normal variable. Look at `string` for example:
    ```cpp
    string fullName = "Princess Bubblegum";     // no different to declaring and initialising int
    ```
  * Also **behave like folders** that contain more variables and functions inside
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

1. Create an _ise102_console_ project and **type the _Princess Bubblegum_** code into `main()`.
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
batty.colour = FG_BLACK;
batty.x = 25; 
batty.y = 10;
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


## Moving

### Up Down Left Right

{{< imgcard xy_leftright_updown Link "xy_leftright_updown.jpg">}}
{{< /imgcard >}}

So, we can move left and right by changing our x location.

### Exercise 2: Control Movement

Here's an overview (functions and main) of a new structure we can use for our game. As you'll see next week, it'll help us use multiple screens.

{{< imgcard code_flappy_functions Link "code_flappy_functions.png">}}
{{< /imgcard >}}

We'll use it now to move around. **Grab the base file** and **fill in** the missing bits from the code below.

[Week10_moving_batty_finish.zip](Week10_moving_batty_finish.zip)

{{< imgcard code_flappy_1 Link "code_flappy_1.png">}}
{{< /imgcard >}}

#### Add Up and Down

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

#### Exercise: setFPS

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

    DIAGRAM

### Our old friend modulus.

If batty only moves every 2nd, 4th, or whatever frame, she'll move slower but we'll still catch ll the keypresses.

Modulus is great at doing things when certain divisions are reached: even, odd, every 20th, etc.

#### Exercise

Put an `if` around the code in `playBattyGame` that applies batty's `xDir` and `yDir` to her position. Try moving her every 10 frames, every 2 frames.. find a value that feels good.

## Homework

When batty reaches the right border of the screen, she needs to teleport to the left border. Another way to word it: when she collides with the the right border she wraps around to the left side of the play area.

1. Take a grid and, assuming she's moving right on row 10, draw the place she will be when she needs to teleport (hint: it's an illegal position, on a border)
2. Draw the place she needs to appear (a legal one)
3. Write down those x coordinates.
4. Now, on **the line below** the one in which we apply yDir to her y:
   * Check if her x location is on the disappear point.
   * If true, change her x to the location she needs to appear.
5. Apply the same process to going left, going up and going down.
