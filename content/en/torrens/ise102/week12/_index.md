---
title: "Week 12: Snakes And Collections"
linkTitle: "W.12: Snakes"
weight: "120"
description: >
  How would a segmented snake work? How can I store all those segments?
---

## Homework:
Fruit eating, score displaying, general progress.

## How To Do Well In A3

The brief says the Snake game is a base. It rewards building new things, added settings and features. When your tinker with it, when you flex a little.. we know you really understand it.

* Go through rubric
* Extra features! Things you can run into that change the game, difficulty settings, extra lives, best score recorded to disk.
* Do more than the minimum! 
* Don’t just do exactly as i do visually. You could:
  * Change the window dimensions (`setupWindow(50,25)`)
  * Have a double-thick wall
  * What can you display in unicode? Are there emojis?
  * Have a panel below the game showing 
    * score
    * different fruit types what they give you
    * Hazards like poison blocks or speed-up blocks?
    * Your previous best score

## Downloads

Download these to follow along: executable examples of batty/snake in action, and solutions you'll use as exercise bases.

<a class="btn btn-lg btn-primary mr-3 mb-4" href="week12_executables.zip" target="_blank">week12_executables.zip<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>

<a class="btn btn-lg btn-primary mr-3 mb-4" href="week12_snake_trail_exercise1.zip" target="_blank">week12_snake_trail_exercise1.zip<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>

<a class="btn btn-lg btn-primary mr-3 mb-4" href="week12_vector_exercise" target="_blank">week12_vector_exercise.zip<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>

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

### Exercise 1: Drawing Batty's Trail

Filling the screen with wall and grass has been hiding batty's trail. Stop it happening by commenting out a couple of lines.

{{< imgcard batty_notrail_trail >}}
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

* The trail we saw batty make, that was just the _screen buffer_ (the state of each textpixel on screen, stored) remembering the places batty had been drawn.
* When we don't draw something new (the background) it's safe there. But we need to draw the background, and that overwrites the batty positions till we draw her again.

What if we just drew her again at all her old positions as well as her current position?

* All we need then is some other _storage_. Somewhere to keep our bat's history of x,y positions that doesn't have to be erased.
* Then we drawPixel for each of them.

### Exercise 2: Starting With 1

We have batty. Make a new Creature, just like `batty`, called oldBatty, that follows her one pixel behind. It's one frame of batty's past. 

1. Every frame, before we move batty, store (assign) her x and y positions to `oldBatty`'s x and y.  
2. Then move batty.
3. When you drawPixel `batty`, draw `oldBatty` (who has the old x and y positions of `batty`) next.

That's one segment. With enough oldBatty's (oldBatty0, oldBatty1, oldBatty2..) you'd have a tail as long as her whole history.

## Storing History In Collections

How do you declare all those variables though? `oldBatty199`, `oldBatty200` and the rest? It's not practical. Plus, they clearly don't need names, just numbers. You need a collection of Creatures you can access with a single name (maybe oldBattys, battyHistory, segments) and a number or `index`.

{{< alert title="Indexed Collections" color= "primary" >}}
 A gallery contains lots of precious and small items. When you visit with your family then, you're not surprised that they don't want people taking in bags: they ask you to leave yours with security in the `bag check`. It's full of all different sizes and shapes of bags, and when they take yours they assign it a number, 104, so they can find it again.
 
 When you've had your walk around the gallery you return and fish out the piece of paper reading "Bag Check" with your bag's assigned number. Without needing any sort of description, they find and return your bag.
 {{< /alert >}}


## Collections: The vector
A vector object can hold any number of a chosen data type(int, float, string, Bag, Creature, Fruit)

CODE: c++ code with a vector called bagCheck, another called battyHistory.

Creating
Adding
Accessing
Note: array access notation

{{< imgcard screen_vector_exercise Link "screen_vector_exercise.png">}}
Using collections
{{< /imgcard >}}

The code:

{{< imgcard code_vector_exercise Link "code_vector_exercise.png">}}
{{< /imgcard >}}

### Making a snake:
Make a vector called battyHistory
Create some ghosts of batty.
In a loop:
  * make a creature called ghost
  * give her batty's x and y coordinates.
  * add her to battyHistory with vector::push_back()

### Moving a snake:
2. Insert a fresh oldbatty into the start (0) of the trail every time batty moves. Then:
    * erase the last item in the vector to keep the same length.
    
### Vector functions we use:
    * vector::insert(), vector::erase().
    * vector::front(), vector::back()
    * vector::begin(), vector::end()

## Vector help:
* Geeks for geeks: https://www.geeksforgeeks.org/vector-in-cpp-stl/
* Edureka: https://www.edureka.co/blog/vectors-in-cpp/
* Technical reference: http://www.cplusplus.com/reference/vector/vector/


## Catchups

Contact me on Discord to catch up and discuss code problems.

## CLARITY

{{< alert title="The Golden Rule" color= "primary" >}}
A player should never have to guess what happened.

If they hit a rotten fruit, you have to make clear it was rotten fruit, and what penalty was paid.
* Changing the top or bottom border to display "ROTTEN APPLE: -3 SCORE" for 2 seconds is one possible way.
  * You could tutorialise it a bit by pausing the game for 2 seconds the first time it happens, so they def read the message.
{{< /alert >}}
