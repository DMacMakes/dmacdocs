---
title: "Week 12: Snakes And Collections"
linkTitle: "W.12: Snakes"
weight: "120"
description: >
  How would a segmented snake work? How can I store all those segments?
---

## Homework:
Fruit eating, score displaying, general progress.




## Reminder: Submitting your files correctly

<a class="btn btn-lg btn-primary mr-3 mb-4" href="https://dmdocs.netlify.app/torrens/ise102/assessments/#deliverable" target="_blank">Cleaning up and zipping your project<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>

<!-- 
## Downloads

Download these to follow along: executable examples of batty/snake in action, and solutions you'll use as exercise bases.

<a class="btn btn-lg btn-primary mr-3 mb-4" href="week12_executables.zip" target="_blank">week12_executables.zip<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>

<a class="btn btn-lg btn-primary mr-3 mb-4" href="week12_snake_trail_exercise1.zip" target="_blank">week12_snake_trail_exercise1.zip<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>

## VECTOR EXERCISE OUTDATED, REPLACE WITH IMPROVED VERSION
(Complete version is done, need to remove key lines and replace with //..)  

<a class="btn btn-lg btn-primary mr-3 mb-4" href="week12_vector_exercise.zip" target="_blank">week12_vector_exercise.zip<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>
-->
## A Segmented Snake

A feature you've been asking for: the segmented snake.

{{< imgproc screen_snake_history_insert Resize "600x" >}}
Try the segmented, growing snake in `4_snake_insert_erase.exe` 
{{< /imgproc >}}

### How would a snake work?

There are a few approaches we could take
1. Our current Creature object (snake or batty) becomes the snake head. A bunch more objects, maybe a custom Segment objects each follow along whenever the head is moved.
2. We draw a snake coloured pixel in the last 'n' places the snake visited.

1 makes sense if you get objects, but can be confusing to implement. 2 isn't immediately obvious, but it's easier once you get it.

### 2. Draw Pixels Where We Visited

A trail should be easy. It's just a pixel drawn in any square the creature goes into.. wait, didn't we do that? 

{{< alert title="Did We Already Make A Trail?" color= "primary" >}}
Yes! Sort of! You moved to a bunch of squares and drew a pixel each time. Like walking down the street leaving a trail of m&ms.

The only reason it's not there is.. you fill the background every frame, erasing your old bat/snake coloured pixels.
{{< /alert >}}

### Exercise 1: Drawing Slithers' Trail

Filling the screen with wall and grass has been hiding slithers' trail. Stop it happening by commenting out a couple of lines.

{{< imgcard slithers_notrail_trail >}}
No trail, trail. No trail, trail.
{{< /imgcard >}}

{{< alert title="Definition: \"Comment out\"" color= "primary" >}}
To stop lines of code executing by turning them into comments. You can:
1. Add `//` to the beginning of code on a line 
2. Add `/*` to the start of a line and `*/` several lines later.
{{< /alert >}}

### What's Wrong?

That was a great way to get a trail, but what's wrong? What's the solution?

1. ???  (Messiness)
2. ???  (What's wrong with the trail?)

Solving either problem means wiping our trail out. How can we draw it again, instead of just drawing one pixel?

## Reminder: Big Programmers Now

{{< imgcard big_baby_bird>}}
Fly little fella! Dad's wrecked his back getting worms.
{{< /imgcard >}}

This is just a guide: finishing all this and putting it together is up to you and your new coding skills!

## Drawing History

**A trail is just history marked out.** A trail in a forest is just where a lot of feet have trodden the grass down. The memory of that travel is in the state of the plants and ground.

* The trail we saw slithers make, that was just the _screen buffer_ (the state of each textpixel on screen, stored) remembering the places slithers had been drawn.
* When we don't draw something new (the background) it's safe there. But we need to draw the background, and that overwrites the slithers positions till we draw her again.

What if we just drew her again at all her old positions as well as her current position?

* All we need then is some other _storage_. Somewhere to keep our bat's history of x,y positions that doesn't have to be erased.
* Then we drawPixel for each of them.

### Exercise 2: Starting With 1

We have slithers. Make a new Creature, just like `slithers`, called oldSlithers, that follows her one pixel behind. It's one frame of slithers' past. 

1. Every frame, before we move slithers, store (assign) her x and y positions to `oldSlithers`'s x and y.  
2. Then move slithers.
3. When you drawPixel `slithers`, draw `oldSlithers` (who has the old x and y positions of `slithers`) next.

{{< imgcard snapshots_onionskin>}}
Leaving snapshots behind
{{< /imgcard >}}

oldSlithers is just one snapshot of slithers past, being taken over and over again.
What if, instead, we had a bunch of snapshots, and instead of updating them we just take new ones. When slithers is about to move, take a snapshot and leave it there.

<!-- 
> slithers0, slithers1, slithers2, slithers3..

What about all those damn variables though? Do you have to make like 100, 1000 variables to store them? How do you even make new variables at run time? Hell, we don't even need all the names. Just slithers0, 1, 2, 3.

## Storing History In Collections

 You need a collection of Creatures you can access with a single name (maybe oldBattys?) and a number or `index`.

{{< alert title="Indexed Collections" color= "primary" >}}
 A gallery contains lots of precious and small items. When you visit with your family then, you're not surprised that they don't want people taking in bags: they ask you to leave yours with security in the `bag check`. It's full of all different sizes and shapes of bags, and when they take yours they assign it a number, 104, so they can find it again.
 
 When you've had your walk around the gallery you return and fish out the piece of paper reading "Bag Check" with your bag's assigned number. Without needing any sort of description, they find and return your bag.
 {{< /alert >}}


## Collections: The vector
A vector object can hold any number of a chosen data type(int, float, string, Bag, Creature, Fruit). Then you can read or write individual values in the collection using an index.
-->

Declaring a collection of stuff:
```cpp
  // We declare a vector type, then the type it contains, and give it a name.
  vector<int> scores;
  vector<string> studentNames;
  vector<float> heights;  // in metres
  
  // versus a single one of those things
  int score;
  string studentName;
  float preciseDistance;
```
You can initialise a vector's first _n_ entries using set notation, which you learned about in high school maths (and maths 1 here at uni)
```cpp
  vector<int> scores = { 25, 2, 108, 60 };
  vector<string> studentNames = { "Miles Morales", "Chen Guo", "Gwanda Stacey" };
```

New entries can be added with `push_back()`: 
```cpp
  studentNames.push_back("Another name");`
```

{{< alert title="Accessing Entries With Array Notation" color= "primary" >}}
To access the first score in the scores collection, use `scores[0]`. For the second use `scores[1]`.

Critically, `scores[0]` behaves just like a single variable name, like `scores0` would. You can assign to it, use it in expressions.
```cpp
scores[0] = 22;
scores[0] = garysScore;
int secondScore = scores[1];
int scoreBuffed = scores[2] + 20;
```

{{< /alert >}}
Note: array access notation

<!--

## OLD CODE BELOW, REPLACE WITH THE IMPROVED VERSION
The code:

{{< imgcard code_vector_exercise Link "code_vector_exercise.png">}}
{{< /imgcard >}}

-->

### slithersHistory

So, if slithers is real, and behind her is a trail of snapshots of her past, many old slithers, we could call that `slithersHistory`.

{{< imgcard battyHistory_in_flight>}}
{{< /imgcard >}}

Every time **she is about to move**, we create a **new snapshot**, an `oldSlithers` at her current position, **insert it** into `slithersHistory` at the **beginning**, and then move her.

That **new snapshot makes her body one piece longer**, which is **not okay** because she only grows when she eats, not every time she moves. 

To prevent growing, we **snip off** the old, **unwanted snapshot** at the end of `slithersHistory`

## Making a snake:
* Say you have a `Creature` called `snakeHead`.
* And you make a `vector` called `snakeHistory`, to hold old snakeHead snapshots. It's of type `vector<Creature>`
Create the first 3 snapshots, `Creature`s with the same x and y as snakeHead, and push them onto the snake, like so:
In a loop:
  * make a `Creature` called `oldHead`
  * give it `snakeHead`s `x` and `y` coordinates.
  * add it to `snakeHistory` with vector::push_back()

### Drawing A Snake
1. Loop through `snakeHistory`. For each `Creature` in there, draw a pixel at it's x and y location
2. Body drawn, draw a pixel at `snakeHead`'s `x` and `y` location.

### Moving a snake:
1. When you're about to move the head, make a snapshot, a `Creature` called `oldHead`
2. Store `snakeHead.x` and `snakeHead.y` in `oldHead.x` and `oldHead.y` (like we did with `oldSlithers`)
3. `insert` `oldHead` into the `begin()` of the `snakeHistory`.
4. `erase` the oldest `Creature` at the end of the the `vector` to keep the same length.

{{< imgcard diagram_snake_move_insert_erase Link "diagram_snake_move_insert_erase.png">}}
Step by step.
{{< /imgcard >}}

### Growing A Snake:
1. When you eat a fruit, add to the snake's length variable.
2. You want to put it at the end, so start with the `x` and `y` coordinates of the oldest `Creature` at the end of `snakeHistory`
3. Add it onto the back of `snakeHistory`.
  
### Vector functions we can use:

Google them, they're your tools now.
    * vector::insert(), vector::erase().
    * vector::front(), vector::back()
    * vector::begin(), vector::end()

## Vector help:
* Geeks for geeks: https://www.geeksforgeeks.org/vector-in-cpp-stl/
* Edureka: https://www.edureka.co/blog/vectors-in-cpp/
* Technical reference: http://www.cplusplus.com/reference/vector/vector/

## Tips for good marks in Assessment 3

### CLARITY

{{< alert title="The Golden Rule" color= "primary" >}}
A player should never have to guess what happened.

If they hit a rotten fruit, you have to make clear it was rotten fruit, and what penalty was paid.
  - Changing the border to display "ROTTEN APPLE: -3 SCORE" for 2 seconds is one possible way.
  - You could tutorialise it a bit by pausing the game for 2 seconds the first time it happens, so they def read the message.
  - Have your fruit types and effects in the gui in the first place!
If the they hit a poison fruit or deadly wall, tell them why the game ended.
  - Game over popover: "You ate a poison fuit, they kill!" Use your own words though.
  
{{< /alert >}}

## A3 Required:Doing more than the minimum

The brief says the Snake game is a base. It rewards building new things, added settings and features. When your tinker with it, when you flex a little.. we know you really understand it.

* Go through rubric
* Extra features! Things you can run into that change the game, difficulty settings, extra lives, best score recorded to disk.
* Do more than the minimum! 
* Don’t just do exactly as i do visually. You could:
  * Change the window dimensions (`setupWindow(50,25)`)
  * Have a double-thick wall
  * What can you display in unicode? Can you make the background or snake more interesting?
* Use the gui to provide any info you want
  * different fruit types what they give you
  * Hints
  * Your previous best score
  * tell them how disappointing they are.
* Action replay of the last 10 seconds?
* Multiple game modes
* Top 3 scores saved to disk and reopened each time app opens