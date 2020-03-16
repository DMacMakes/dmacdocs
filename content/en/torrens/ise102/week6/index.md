---
title: "6: Functions 2"
linkTitle: "W.6 Functions 2"
weight: 60
description: >
  Programs inside programs!
---


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

**Add** realtime shooting to _free throw master_ 
* by entering this (and filling in blanks)
* code
