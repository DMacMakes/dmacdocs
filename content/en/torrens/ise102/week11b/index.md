---
title: "Week 11b: Collisions, Collections"
linkTitle: "W.11b: Collections"
weight: "111"
description: >
  How do we check if things collide? How can we use bunches of related objects easily? How do we add more screens to our game?
---

## Learning today


## Things left to do

Not sure what's left to do? Check the [Snake_T2 Trello](https://trello.com/b/aVYKZSK8/snaket2).

{{< imgproc snake_trello Resize "500x" Link "snake_trello.png" >}}
Click image to visit the Trello
{{< /imgproc >}}

## A3 deliverable: Homework

This homework **MUST be attempted in order to pass the assessment**. Make a genuine attempt at completing AT LEAST the _**easy**_ and _**medium**_ homework to qualify.

Clean it up (delete unnecessary folders), **ZIP YOUR PROJECT AND SUBMIT** by email to Matt **by midnight this Sunday night, August 16.**

{{< alert title="" color= "secondary" >}}
* _**EASY:**_   
    Add in a poison fruit that ENDS THE GAME. Add in deadly walls (collide with walls), game over.  

* _**MEDIUM:**_  
    Now, instead of deadly walls, move slithers to the other side of the screen (teleport).  

* _**HARD:**_  
    Add a second playmode, deadly walls, so players can choose that mode or teleport style. (hint: pass as argument to playSnake, don't make a whole new playSnake)

* _**ADVANCED:**_  
  Game over: replace ui with a game over message and option to play again or quit to menu. 
   - Draw over the place the regular gui is. You can basically copy _some_ of the draws from the drawLevelAndGui function.
   - Listen for their keypress to quit or start game loop again. 
   - At the end of playSnake maybe you you can call a little function with its own textpixels frame loop
   - Your choice how to get back to start of playSnake, but definitely don't call playSnake from within itself. 
     - (You'll probably need to encapsulate everything in side playSnake in a regular loop, so it never returns the score until the player has finished playing. Maybe it doesn't return the score at all, but sets a global "best score" if it the score you just got is better, So many options!
{{< /alert >}}

## Bunches of data: collections!
 
 Games are full things, and a lot of those things are _almost_ the same.

{{< youtube "09QaF345qZk?t=203" >}}
(Jump to 3:20)

Chickens, buildings, villagers, fishmen, trees, clumps of grass with or without hidden gems, treasure chests, bouncing fireballs, stone platforms, eaty flowers, stone tiles.

Lots of each of them, and they don't all have variable names. We don't have time for garima, kevin, jacinta, and aram the chickens. Or stoneTile1, stoneTile2, stoneTile3. How would you even write code to deal with so many variable names?

Instead we need **a way to deal with things as collections.**

{{< alert title="A punnet of strawberries" color= "primary" >}}

This little plastic container is a _punnet_, and it's full of strawberries. 

![](strawberries_punnet.jpg)

It has
  - a type of thing it's holding: in this case strawberries, or more generally, Fruit
  - an amount of fruit in it
  - a limit to what it can hold in this case
  - a way of retrieving the strawberries inside
{{< /alert >}}

### Virtual punnets: the Vector

We've already used collections in C++: strings. They're just collections of characters, and they have properties like "size()" and functions to change or access the characters, like `append()` and `substr()`.  

We need a more generic collection, something that lets us choose what type of things it contains: maybe a collection of integers, or even whole strings, or Fruit.  
  
The **`vector`** object is exactly that. If we add **`#include <vector>`** to `main.cpp`, we can make vectors of any size to hold whatever we need.  
 
You can declare a new vector that holds `Fruit` objects like this:  

```cpp
  vector<Fruit> punnet;
  // vectors are objects. They are special because they can hold a punch of objects.
  // vector is the type of container object, then <Fruit> specificies what type of objects it can hold.
  // finally it has a name, punnet.
```

Add an existing fruit to your vector with **`.push_back(myFruit)`**. It's not a great name, but it means "addToEnd".
```cpp
Fruit strawberry;
Fruit cherry;
punnet.push_back(strawberry);
punnet.push_back(cherry);

// punnet now contains 2 fruit.
// punnet.size() returns the number of things added to the vector (as an integer)
drawString(0,0, "Number of Fruits in punnet: " + to_string( punnet.size() );
```

## Exercise: vectors

1. Grab Fruit_vector_wk11_incomplete.zip (a special cut down version of snake) 
2. Look for the //TODO: comments
3. Complete them by entering in the missing code. Reference the code from the image of the complete source below.

<a class="btn btn-lg btn-primary mr-3 mb-4" href="Fruit_vector_w11_incomplete.zip" target="_blank">Download Fruit_vector_wk11_incomplete.zip<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>

{{< imgproc code_fruit_vectors Resize "800x" Link "code_fruit_vectors.png">}}
Click to for full size
{{< /imgproc >}}

### Accessing objects in vectors by _**index**_

 {{< alert title="Indexed Collections" color= "primary" >}}
 A gallery contains lots of precious and small items. When you visit with your family then, you're not surprised that they don't want people taking in bags: they ask you to leave yours with security in the `bag check`. It's full of all different sizes and shapes of bags, and when they take yours they assign it a number so they can find it again.
 
 When you've had your walk around the gallery you return and fish out the piece of paper with your bag's assigned number. Without needing any sort of description, they find and return your bag.
 {{< /alert >}}
 
 You create a single vector object, and can submit as many objects to it as you like for safe keeping. To access any object, just provide an _index_. Like with most indices in c++, it starts at 0.

## Edge teleport
{{< imgcard edge_teleport_explained>}}
Edge teleport: When Batty's somewhere bad, (B1) put her somewhere that isn't (B2).
{{< /imgcard >}}

## Looking it up yourself

{{< imgcard big_baby_bird>}}
Time to open those wings mate.
{{< /imgcard >}}

It's that time to start gathering your own answers/worms.

1) Learn what you've put off: `for` and `while`  loops, functions, `switch` statements: if you're not sure, do the googling and the reading now.
2) Learn the range of sites that can help you, each with their own style: _geeksforgeeks_, _stackoverflow_, _Wikpedia_, _cppreference_ and _youtube_. If you take responsibility for learning, for being curious and active, these sites will see you there. 
  * Detailed but not a reference sheet: https://www.geeksforgeeks.org/switch-statement-cc/
  * Listicle style: https://www.geeksforgeeks.org/interesting-facts-about-switch-statement-in-c/
  * Across languages, high level view: https://en.wikipedia.org/wiki/Switch_statement
  * Question and answer: https://stackoverflow.com/questions/31410393/c-switch-cases/31410441
  * Technical, authoritative: https://en.cppreference.com/w/cpp/language/switch


Go back to the top and **attempt the homework in order to qualify to pass the final assessment!**

<a class="btn btn-lg btn-primary mr-3 mb-4" href="#a3-deliverable-homework" target="_blank">Go to A3 deliverable Homework<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>

-----------

## OLDER MATERIAL

This is from previous trimesters, you may find nuggets of nice info,especially on pass by reference.

## Ending the game
A way to **end the game**. There's work to be done like:
* showing a game over message/screen
* making it obvious to the person where they died and why,
* and letting them know their final score
* letting people go to the menu or play again.
* 
We have no way of dying right now, but we want that screen sorted, so we have **a couple choices**:
1) **Make our snake grow** and eat itself
   - That's a _lot_ of work getting the snake to grow and move
   - There's also plenty of testing self-collision/self-biting before we can test something as simple as game over
   - It'll be hard to tell snake body problems end and game over screen problems start.
2) Temporarily make the walls deadly again.
   - It's easy: we already collide with the wall. Instead of moving the snake, turn it blood red and say game over.
   - That totally doubles as a mode you could put in the main menu. Play Snake and Play Snake (electric fence)
3) Make a DeathBlock or Shredder object, like you made Fruit. Put it on screen, and end the game if your snake hits it.
   * Also easy
   * Also a game mode or game option 
   * Maybe it's a progressive difficulty thing.

### Add More?

You can create all sorts of game elements now.
1. Decide their properties
2. Make a definition (class) for their object
3. Give them a location and draw them
4. Check if snake runs into them.
5. Code what happens next

You can add deadly obstacles like FlameBlocks or MetalSpikes that end the game. Fruit that changes your speed more than usual. Rotten fruit that costs you points.

{{< alert title="The Golden Rule" color= "primary" >}}
A player should never have to guess what happened.

If they hit a rotten fruit, you have to make clear it was rotten fruit, and what penalty was paid.
* Changing the top or bottom border to display "ROTTEN APPLE: -3 SCORE" for 2 seconds is one possible way.
  * You could tutorialise it a bit by pausing the game for 2 seconds the first time it happens, so they def read the message.
{{< /alert >}}

## Game Modes?

To get more than a pass/credit, you want to have extra features and options in the game. See my ideas in _game over_, the ideas in the pdf brief, also just think of fun ideas.

----------

## Intermediate Level: Moving The Collision Code

`playBattyGame()` is getting bloated with wall collision code, then fruit collision code. Long functions are tough to read and debug.
Can we **move that stuff into a function?**.

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

```
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

-------------



<!-- ### Don't Push Code Around

"Don't push paint around" is a phrase art teachers use to counter something they, us, and everyone else does. When we have gone beyond our understanding, but we know we're kinda close, we start to noodle and try random stuff. In concept art it's maybe because we don't really know how to paint folds in fabric, or how to render realistic hair. We don't have reference photos for combat armour, or we never figured out the perspective properly.

You're new to coding, and you'll often have bugs that come from misunderstanding c++ syntax, its basic structures. When that happens, it'll feel like you're close, but you'll never get there: reordering, changing variable values, none of it's working because you don't actually know how to do a comparison in your `while` statement, or that you have to store the value a function is returning.

What you need to do is solve the underlying problem, outside of your program, and come back with the knowledge.

{{< alert title="(A) Golden Rule: Work Small To Big" color= "primary" >}}
Test small chunks of code in isolation and you'll be able to focus down the problem. Students often spend hours and days trying to fix their logic, despite knowing they're kind of winging it on functions or the difference between `&&` and `||`. Maybe they can just get this one thing solved and not have to dig into that.

Take the two or three lines you _know_ you don't really understand and put them in `main()` in a new, empty project. Throw in some dummy values, try to ask new questions in that new lightSee them without anything around them, think about what you're assuming about the c++ keywords/operators/syntax in that code and how you can test if you're right. 
{{< /alert >}}

-->
