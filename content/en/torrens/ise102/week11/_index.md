---
title: "Week 11: Colliding and More Screens"
linkTitle: "W.11: Colliding"
weight: "110"
description: >
  How do we check if things hit eachother, and how do we react? How can we add more screens to our games? Oh, also more objects.
---

## Homework:

Teleporting. This was a type of hit detection, or collision detection.

## Other Collisions:

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

IMAGE OF CREATURE.H CODE

### Colliding With Fruit

### Adding To The Score

### Add More

You can add deadly obstacles like FlameBlocks or MetalSpikes. You can check if your Bat/Snake hits any of them.

### Too Much Collision Code 

playBattyGame is getting bloated with collision code: even the teleport code is a lot. Can we **move it into a function?**.

x and y are two values, so we can't assign a return value. It'd be great to pass batty to to a function and have it change the positions. Functions work on a value copy of our object though, not the original. We need a solution..

## Pass By Reference

Adding an & in the variable definition lets the function mess with the original. We can now have a `teleportIfOutOfBounds(batty)` that returns `true` if it teleports the bat.

To get a variable through as a function argument, instead of just the value of the variable, attach ampersand `&` to the variable name's beginning:

```cpp
// Teleport if out of bounds
bool teleportIfOOB(Creature &thatCreature )     // versus (Creature batty)
{
  // Just modifying values for demonstration
  if (thatCreature.x >= windowWidth()-1) 
  {
    thatCreature.x = 1;      
  }
  return true;
}

void play()
{
  batty.x = 50;
  teleportIfOOB(batty);
  // Batty's x and y are changed by
}
```
References are a bit like nicknames are for your friends. Your friend's mother might call her **Sherry**, but she'll answer to **NoHeelzNoFeelz** in a raid. 

### Isnt That Confusing?

We had learned that functions only use value copies and have no direct access other function's variables.
* It was an over simplification.
* but yes it was nice and clear cut. 
* Having to remember these blurry distinctions is indeed more work
* Yes it can lead to bugs

It turns out **powerful new features come at the cost of clarity, and of extra brain load.**

### So Is It Worth It

Yes, references super useful when objects get big, and save a lot of processing and memory. That's critical for game performance. Plus it saves a lot of globals and awkward program structures.

## More Screens

To add features we'll need more screens. Game Over, Menu, Change Difficulty etc.
 
 How?
 
 More screens code.
 
 ### Menu
 
 ### Game Over