---
title: "Week 11: Custom objects, Collisions"
linkTitle: "W.11: Customs"
weight: "110"
description: >
  How do we check if things collide? How can we use bunches of related objects easily? How do we add more screens to our game?
---

## Learning this week

1. Targeting speeds, using high frame rate and lazy drawing: Last week's _**medium**_ and **_advanced_** homework
2. Creating a fruit object
4. Add Score: Make a variable,show on gui.
5. Colliding! Fruit.
6. Adding to score on fruit hit.
7. Game over?

## Homework due next week  

**Homework:**  
_easy:_ Collide with wall, end game. Add in a poison fruit.  
_hard:_ Add in teleporting, remove deadly walls. Game over: Offer option to play again.  
_advanced:_ Add second playmode, deadly walls. Pass as argument to playSnake.  

## A2 Slots marking

Marking is basically complete and most results should go up tonight (in the hours after class).

## Assessment 3

## Last week's homework

<a class="btn btn-lg btn-primary mr-3 mb-4" href="../week10b/#homework" target="_blank">Week10 Homework<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>

## Creating your own objects

Creating an object is as easy as   
1. Creating a _**myobject.h**_ file, known as a **header file** file (or less formal **dot h** file)  
2. Defining a **`class`**, which is basically a recipe/description of the object you want.   

An easy way is to copy a similar class and edit it. **Open your snake project** in Visual Studio and **look at the _snake.h_ file**.

* What does it tell us about a snake object? What properties would it have?

{{< imgproc code_snake_class_explained Resize "1024x" Link "code_snake_class_explained.png" >}}
Hacking time! We can get away with understanding 80% of what's going on here 👍
{{< /imgproc >}}

{{< imgcard code_snake_class_simpler >}}
FAKE but useful: Here's what it would look like if I took out the enums and textpixels references.
{{< /imgcard >}}

### What is a fruit?

{{< imgcard fruit_pixel_marker >}}
Credit: <a href="https://www.youtube.com/watch?v=xCX7NyfY_Gg">Hello Pixel Art</a>
{{< /imgcard >}}

What properties does a fruit have? 
1. Fruity properties: kind, colour.
2. Gamey properties: location

Anything else?


### Exercise 1a: Create a fruit class

1. From solution explorer (in Visual Studio), right click your project and open/reveal it in explorer.
2. Find the snake.h file. Click it, then copy it (right click menu or ctrl+c) and paste it (ctrl-v).
3. Rename the new copy **`Fruit.h`**.
4. In the Visual Studio Solution Explorer, right click _Header Files -> Add -> Existing item.._ and choose the Fruit.h file.
5. In Solution Explorer, Double-click Fruit.h to open it.
6. Change this class to a Fruit class with the following properties:
   - colour (short)
   - location (use Point2d)
   - value (1 pt, use int)
---

### Exercise1b: Create a fruit

1. Go back to `main.cpp` and, above the loop in `playSnake`, define some fruit! 
2. Give it a starting location where it won't be in a wall or snakey.
3. Draw it every loop, just like you draw snakey.

## Adding a score

1. Add a variable for the score
2. Draw it to the gui
3. Gui as sep function?

## Colliding with fruit

When have you collided with something? 

What happens when two cars attempt to share the same location?
What about two people? Two huskies?

{{< imgcard collision_moonmoon>}}
Moon Moon demonstrates.
{{< /imgcard >}}

So how do we check if fruit shares a location with our Snake?

### Fruit collide!

* How to check location equality?
* How to only collide once?

### Exercise 1c: Scoring fruit

1. When you hit the fruit, **add 1** to the score.
2. Create a second kind of fruit, add it somewhere else on level at start.
3. Check for hits on the second fruit.


## What we learned and homework due
Homework: Can you check if the snake hits the wall?
Reposition fruit on hit
Give the second fruit type a different score.
<a class="btn btn-lg btn-primary mr-3 mb-4" href="#learning-this-week" target="_blank">Back up to Learning this week<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>

**Tomorrow 3:30pm (Tuesday):**

<a class="btn btn-lg btn-primary mr-3 mb-4" href="../week11b" target="_blank">Week 11B<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>
