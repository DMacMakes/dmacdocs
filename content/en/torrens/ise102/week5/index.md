---
title: "5: Functions"
linkTitle: "W.5 Functions"
weight: 40
description: >
  Programs inside programs!
---

## Functions: Little Programs

Functions are like little programs within your program. You can define them to handle whatever job you need done, then call them whenever needed. You can hand them new data to work on each time, and grab their results to use or pass to other functions to get even more done.

They're easy to create because they have the same basic components as their parent programs: input, storage, processing and output.

### Making A Function

The function `twoTimes` takes a number and multiplies it by 2:

{{< imgcard function_two_times_1 Link "function_two_times_1">}}
Click to expand.
{{< /imgcard >}}

### Running A Function

Then, use `twoTimes` like a helpful program anywhere in `main()`!

* `main()` has been where we write our programs
* `twoTimes` is like a sub-program, and it runs when `main()` _**calls**_ it.

{{< imgcard function_main_2x_1 Link "function_main_2x_1">}}
Click to expand.
{{< /imgcard >}}

{{< alert title="Definition: Function" color= "primary" >}}
A section of a computer program that is defined only once but can be used when required at several different points in the program. They save space, reduce bugs and bring organisation and clarity by packaging up variables and code into handy, specialised tools.
{{< /alert >}}

## Exercise: Code Two_Times_Calculator

* Create a new project _Two\_times\_calculator_. 
* Enter the code below **including comments**
* Run it. Try a few other values.

{{< imgcard code_two_times_1 Link "code_two_times_1">}}
Click to expand.
{{< /imgcard >}}

### Structure Of A Function

Anything that is new to the program has to be declared.
* Functions are mostly _declared_ like a `variable`. 
* Tacked on the end are parentheses to tell C++ that this is a function. 
  * You can declare variables in these parentheses. These will receive any input the function can accept.

```cpp
int twoTimes ( int inputValue )
```

Then they have a body, a code block just like we've seen in `if`, `for`, `while`.  It can hold new variables (storage) and statements (processing) just like main.

```cpp
int twoTimes ( int inputValue )
{
  int outputValue = 0;            // Look, storage
  outputValue = 2 * inputValue;   // Look, processing
```

Finally, before the end of the code block, they support **output** using the special keyword `return()`. A value in the parentheses will be  _returned_ (output) to the calling function.
```cpp
  outputValue = 2 * inputValue;   // Look, processing
  return(outputValue);
}
```
{{< alert title="Synonyms: Function" color= "primary" >}}
We've been calling them functions, but they go by many names in many languages. Even within _C++_ you'll hear more than one. 

The most common are:
* method
* routine
* subroutine
* procedure
* subprogram
  
{{< /alert >}}
## How Functions Work Together

{{< imgcard heist_gang >}}
Everyone has a job, one guy is the lead.
{{< /imgcard >}}

**Heist movies** usually go something like this:
* **Smart criminal** guy decides to do The Big One/The Very Last One and puts together a crew
* Then there's planning, arguing, people walking out etc
* They get serious and everyone is given instructions by **Smart criminal**. They either:
  * Get something important for the job
    * **Distractingly attractive lady** gets Id from rich jerk
    * **Hacker** gets security codes and camera ids
    * **Unhappy employee** draws a layout of the cameras and their blindspots, intel on staff.
    * **Explosives guy** gets.. explosives.
  
  * Do something important for the job
    * **Loud comedian** runs a distraction
    * Safe guy **opens** a lock
    * **Driver** drives a vehicle

### Organised Teamwork

If **Smart criminal** gave out the first job and everyone else just figured it out between themselves he wouldn't know things like:
* Who's doing what
* If the heist is going to work out
* Who's selling out the plan to cops/other crooks
* Who's secretly stashing half the loot

So he deals with each person one by one:
* Each team member is given only the **information they need to know** for their specialty
* They return the information/goods to him **directly**
* He then **passes on** some of what he's learned to the **next team member**
* They can then subcontract out some work on that limited task/info when necessary

1. **Smart criminal** tells **Attractive lady** about _rich jerk_, and she brings back his _ID Card_
2. **Smart criminal** gives **Hacker** the _ID Card_, and he gets _camera ids_ and _security codes_
3. **Smart criminal** gives **Unhappy employee** the _security codes_, and he uses them to access secure areas and map out _camera locations_
.. and so on.

### The Contract

How do you get a bunch of goons you don't trust to do what you need done? Through clear, limited agreements. Look again at a _function_ declaration and a _function_ call: you can see that a well written function defines a contract:
1. Its abilities are in the name, usually a _verb_.
2. The _argument_ or _parameter_ list defines the minimum input it needs to do the work.
3. The function's _type_ tells you what you are guaranteed in return. `int twoTimes()` is required to `return` an `int`.

```cpp
type functionName( type argument1, type argument2 )
{
  type outputVariable;
  // do things
  return ( outputVariable );
}
```

## Exercise: Free Throw Master

Enter it.

{{< imgcard code_free_throw_master Link "code_free_throw_master.png">}}
Click to expand the world's greatest basketball game.
{{< /imgcard >}}

The output:
{{< imgcard output_free_throw_master Link "output_free_throw_master.png">}}
Hi scores, realistic sports action.
{{< /imgcard >}}

### Benefits Of Functions

Reuse: You don't have to duplicate code when you can wrap it in a function and use it as many times as you want.

### Readability

Windows 10 has over 50 million lines of code. Imagine if that was all inside `main()`. You could see it from the moon.

You can have just a few function calls in `main()`, then each of those can call specialised functions and so on. You quickly get an overview of the program. Look, here's Windows 10!!

```cpp
/// Not really Windows 10
int main()
{
  strint input = "";
  bool shuttingDown = false;
  
  startUp();      // Start windows
  while ( shuttingDown == false )  // If noone clicked shutdown
  {
    string input = checkInput();   // Keyboard tapping? Mouse clicking??
    
    if (input != SHUTDOWN_REQUEST) 
    {
      reactToInput(input);          // Do windows things
    }
    else
    {
      shuttingDown = true;          // Oh no, prepare for shutdown
    }
  }
  shutDown();     // Thank you for using windows.
  
  return(0);
}
/// Just under 50 million lines of code continue below

```

{{< alert title="Going Deeper: Function life cycle" color= "primary" >}}
When main calls a function, it's a bit like windows starting a program. 
1. It sets up room in memory for the function to come to life, then lets it:
   * set up variables, 
   * do its job
   * return data. 
2. The _function_ ends, the memory is cleared along with variable values.
3. Any future _function_ calls set up room in memory and repeat this process. Dust in the wind.
{{< /alert >}}

### Grouping Processing With Storage

Imagine all your heist guys had all the information everyone else had, they'd be overloaded. What's explosives guy going to do with all the info about the network and cameras etc. 

Humans work better with a limited set of data related to what they're doing right now. Functions let us put data next to the code we're using it with.

**Question:** I understand a _function_ takes input, but.. is it required? We defined `highScore`, can't `showQuitMessage()` just use it??
**Answer:** Nope. A _function's variables_ aren't visible to any other code. The game won't compile if you try to `cout << highScore` inside `showQuitMessage()`. This _compartmentalises_ things, making it much easier to see what code is changing what data.

PICTURE OF FUNCTION SCOPE

We refer to what a _function_ can see as its **scope**. A function's scope includes:
   1. Variables declared in the parentheses aka the _arguments list_
   2. Variables declared inside the _code block_ `{}` of the _function_.
   3. _**Global**_ variables declared outside any codeblocks of any functions. Commonly after `#include` statements.

{{< alert title="Origin Of Term: Scope" color= "primary" >}}
From the _Online Etymology Dictionary:_

**Scope:** "extent," 1530s, "room to act," 
* from Italian _scopo_ "aim, purpose, object, thing aimed at, mark, target,"  
* from Latin _scopus_,  
* from Greek _skopos_ "aim, target, object of attention; watcher, one who watches" 
  * suffixed form of root *_spek-_ "to observe." Sense of "distance the mind can reach, extent of view" first recorded c. 1600.
{{< /alert >}}

## Homework

**Reading:** 
Chapter 5, Mad Lib.

[Chapter 5](../resources/book_cpp_through_games.jpg)


**Add to** _Two Times Calculator_:
* A constant for the multiplier (2)
* A function that asks the user for and returns the multiplicand
  * (A multiplicand is the second number in your multiplication)
* A menu item for viewing the credits (as in who made the game).

**Add** realtime shooting to _free throw master_ 
* by entering this (and filling in blanks)
* code

## Summary

This week we learned:
* Functions are like mini programs: 
  * input, storage, processing, output
* Creating and calling functions
* How functions make programming easier
* Ways to get more out of functions
  * Passing arguments
  * Descriptive function names
  * Returning values.