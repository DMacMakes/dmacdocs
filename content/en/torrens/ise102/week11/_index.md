---
title: "Week 11: Colliding and More Screens"
linkTitle: "W.11: Colliding"
weight: "110"
description: >
  How do we check if things hit eachother, and how do we react? How can we add more screens to our games? Oh, also more objects.
---

## Homework:

Teleporting. This was a type of hit detection, or collision detection.



## More Screens

To **add features** we'll need more screens. _Game Over_, _Menu_, _Set Difficulty_ etc. I've provided the code, you can copy what you need.

Run it, try to **break it** and **extend it before you begin to integrate it** with your own code. Once it's mixed up with something else you'll be stuck with any assumptions you didn't test, and it takes advanced debugging to correct.

 <a class="btn btn-lg btn-primary mr-3 mb-4" href="Week11_Screens.zip" target="_blank">Download Week11_Screens.zip<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>

{{< alert title="Learn Code Before Adding" color= "danger" >}}
**Integrate code before you've genuinely understood it and you _will_ come undone.** 

Usually near the end.
{{< /alert >}}

 
 {{< imgcard screens_screens >}}
 {{< /imgcard >}}
 
 ### Menu
 
 ### Game Over
 
 ### The Code Summary

{{< imgcard code_screens_summary Link "code_screens_summary.png">}}
{{< /imgcard >}}

### The Code 

{{< imgcard code_screens Link "code_screens.png">}}
{{< /imgcard >}}

## More Collisions

If we can check for border hits, it should be super easy to check if we've hit other stuff.

### Adding Other Things

Fruit are things our Snake/Bat can eat by running into them. They don't have much properties: maybe a location (x, y), a colour and what kind fruit they are.

```cpp
Fruit anApple;
apple.x = apple.y = 15;
apple.colour = FG_GREEN;
apple.kind = "apple";
```
We don't have a Fruit data type though..

### Exercise 1: Define Fruit

You know that Creature is defined somehow in `creature.h`. Some of you might have even looked.

1. Open your solution's folder in explorer.
2. Copy and Paste `creature.h`.
3. Rename the copy `fruit.h`
4. Open it up and see if you can change it from a `Creature` to a `Fruit`.
  - Give it the right class name.
  - Add the `kind` variable to it.
  - Get rid of xDir and yDir, since Fruit doesn't move around.
5. Add an `Apple` to `playBattyGame()`. Remember to draw it (look at how batty is drawn).

{{< imgcard code_creature_h >}}
Creature.h
{{< /imgcard >}}

### Colliding With Fruit

### Exercise: Adding To The Score

The score is just a variable we can keep in battyGamePlay/snakeGamePlay. 

To show it on the screen, you can use drawString as long as you convert your score to a string. Use `drawString` and use `to_string(myInt)` to convert your int to a string.

```cpp
  /// Draw a normal (not wide) string to x,y
  drawString(xLocation, yLocation, stringIWantToWrite);
  
  /// To set both foreground and background colours of your text:
  drawString(xLocation, yLocation, stringIWantToWrite, layerColour(FG_WHITE, BG_DARK_RED) );
  
  /// Use to_string() to convert an int to a string. drawString won't take numbers directly 
  drawString(xLocation, yLocation, to_string(myInteger) );
  
  /// Join strings and numbers
  /// Use to_string() to convert an int to a string. drawString won't take numbers directly 
  int age = 20;
  drawString(xLocation, yLocation, "Age: " + to_string(age) );
```

Remember, you also have `drawWString` if you want to use Unicode, and `to_wstring` to convert `int` to `wstring``.
  

### Add More?

You can create all sorts of game elements now.
1. Decide their properties
2. Make a definition (class) for their object
3. Give them a location and draw them
4. Check if batty runs into them
5. Code what happens next

You can add deadly obstacles like FlameBlocks or MetalSpikes that end the game. Fruit that changes your speed more than usual. Rotten fruit that costs you points.

{{< alert title="The Golden Rule" color= "primary" >}}
A player should never have to guess what happened.

If they hit a rotten fruit, you have to make clear it was rotten fruit, and what penalty was paid.
* Changing the top or bottom border to display "ROTTEN APPLE: -3 SCORE" for 2 seconds is one possible way.
  * You could tutorialise it a bit by pausing the game for 2 seconds the first time it happens, so they def read the message.
{{< /alert >}}

 ## Vectors Hold Your Collections
 
 Want to make 10 of something, or 100? Without dealing with 100 variable names?
 
 The _vector_ is an object that can hold those for you. 
 
 {{< alert title="Indexed Collections" color= "primary" >}}
 A gallery contains lots of precious and small items. When you visit with your family then, you're not surprised that they don't want people taking in bags: they ask you to leave yours with security in the `bag check`. It's full of all different sizes and shapes of bags, and when they take yours they assign it a number so they can find it again.
 
 When you've had your walk around the gallery you return and fish out the piece of paper with your bag's assigned number. Without needing any sort of description, they find and return your bag.
 {{< /alert >}}
 
 You create a single vector object, and can submit as many objects to it as you like for safe keeping. To access any object, just provide an _index_. Like with most indices in c++, it starts at 0.

## Collision Code Is Long

`playBattyGame()` is getting bloated with collision code: even the teleport code is a lot. Can we **move it into a function?**.

x and y are two values, so we can't assign a return value. It'd be great to pass batty to to a function and have it change the positions. Functions work on a value copy of our object though, not the original. We need a solution.. 

### Have Functions Return Collision Results

When Batty collides with Fruit, we can return the Fruit or null, a single return value (object). When Batty hits a wall it's more complicated because we need new values for x and y, and we don't have an object that holds them.

Here are three techniques, in order of complexity:
1. Just check one dimension: up and down OR left and right.
2. Return an object containing x and y values.
3. Return a vector with two ints, the x and y direction.
4. Pass batty _by reference_ and have the function edit her directly. Point2D, wh

### 1. One Dimension

Consider a function that takes batty's x position and x direction (or batty herself) then returns the new x position. It would work just as well for y, since screenWidth and screenHeight are th same.

```cpp  
Psuedocode:
 if batty is moving horizontally
   batty's x should equal the output of teleportIfOOB( batty's x, batty's x direction)
 else 
   do the same thing but with her y and y direction
 endif 
 
 function teleportIfOOB( int position, int direction)
   int newPosition = position 
   
   if travelling positive 
    if past highest in bounds value
      newPosition = lowest in bounds value
    endif
   else 
    Do the lower bounds test this time
   endif
   
   return newPosition
 end teleportIfOOB
```  

### 2. A 2D Coordinate Object

If we could return an object that holds x,y coordinates, then we can pass in batty's `x`, `y`, `xDir` and `yDir`) and use the resulting `x,y` object to set her new direction.
Create a new object type that holds x and y values: XYPair, or Coordinates, or Point2D, whatever makes sense to you.

1. Declare XYPair teleportedPosition;
2. Pass Batty or the values above, to a function that returns the new x,y position as an XYPair, assign the returned value to XYPair.
2. Set Batty's x to teleportedPosition.x, same for y.

### 3. Pass By Reference (Intermediate Level)

Normally a function passes a variable's value as a copy, we can't change the original. There _is_ actually a way _C++_ to pass a reference to the original variable (albeit with a different name), letting us edit the original.

This would let us pass in `batty`, and the function will directly change her `x` and `y` if she's out of bounds.

* In the function declaration add `&` to the name of the argument variable: `bool teleportIfOOB(Creature &thatCreature)`
* If you pass `batty` to that function, changes to `thatCreature` in the function are really changes to batty.
* It doesn't need to `return` anything since original `batty` has been changed.
* It leaves us with a knowledge gap.. Was Batty teleported? Why not have the function `return` a `true`/`false` for that outcome?
```cpp
// Teleport if out of bounds
bool teleportIfOOB(Creature &thatCreature )     // versus (Creature batty)
{
  bool teleported = false;
  // Just modifying values for demonstration
  if ( /* test here for x out of bounds..*/ )
  {
    thatCreature.x = /* new in bounds x position goes here */
    teleported = true;
  }
  /* Do the y test */
  return (teleported);
  
}

void play()
{
  batty.x = 50;
  bool battyTeleported = teleportIfOOB(batty);
  
}
```
References are a bit like nicknames are for your friends. Your friend's mother might call her **Sherry**, but she'll answer to **NoHeelzNoFeelz** in a raid. 

#### Aren't References Messing Up Our Rules?

We had learned that functions only use value copies and have no direct access other function's variables.
* It was nice and clear cut..
* but it was, in reality, a simplification to make learning easier
* Yes it does complicate our rules, increasing cognitive load, even potentially confusing us.

Powerful **new features come at the cost of clarity**, and often trade cognitive load for brevity and new possibilities.

#### So Is It Worth It

Yeah, in the same way adulthood is worth it. The rules get murkier and more confusing, but you can do a lot more.

* References super useful when objects get big, and save a lot of processing and memory. 
* That's critical for game performance. 
* They save on a lot of globals and extra awkward function calls.
* They let us make our game worlds bigger and more interesting.
