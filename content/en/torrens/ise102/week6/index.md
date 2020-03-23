---
title: "6: Functions 2"
linkTitle: "W.6 Functions 2"
weight: 60
description: >
  Programs inside programs!
---


## Assessment 2: Slots

The brief pdf [on Blackboard](https://learn-ap-southeast-2-prod-fleet01-xythos.s3-ap-southeast-2.amazonaws.com/5c07149a959f5/15836406?response-content-disposition=inline%3B%20filename%2A%3DUTF-8%27%27ISE102_Assessment%25202%2520Brief_14112019.pdf&response-content-type=application%2Fpdf&X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Date=20200323T002852Z&X-Amz-SignedHeaders=host&X-Amz-Expires=21600&X-Amz-Credential=AKIAIW5OVFIUOTV36DNA%2F20200323%2Fap-southeast-2%2Fs3%2Faws4_request&X-Amz-Signature=79ee9923fd485563a89cf9cbb31a3dfb27f1b2a5885a18ad85ec1ca65766012a)

Examples later in class.

### Tips

* Write the brief down in your own words.
* Also remember to check against that and the real brief throughout the time you work on it.
* Break a big problem into smaller problems

## Approaching Big Jobs

Break it down into smaller and smaller tasks, until you can find stuff you can do.

### Bullet points

I like to set up bullet points first, before any psuedocode. As you write them out, you start to see how parts will work, smaller problems you'll need to serve. Like a todo list, it clarifies and organises.

```
"My pencil and I are smarter than I am." - Einstein
```

* Make **entire** slots game **app** (too monolithic)

* Make a **menu**
    * Show menu w cash total
    * Get Choice
    * Go to sub-screen or quit

* Make the slots **game part**
    * Show cash
    * Get user bet
    * Take away bet
    * show 3 random numbers 2-7
    * Check for wins
    * Calculate winnings
    * Display win/loss info
    * Return to menu.

* Make **credits** part
    * Show credits (think film credits: who made what)
    * Return to menu

* Make **quitting** part
    * Tell them how they did
    * Thank them or pick on them.

That's still a lot to do, but we don't have to do it all at once. 

### Code skeleton

A good way to start is a scaffolding or skeleton that looks and behaves a bit like the app, but we can just fake the actual details.

What does that mean? Writing up the first few functions you'll probably need, and having them take and return data. They can fake their own functionality at first, as we'll see shortly.

## Exercise: Slots Skeleton 1

Looking at the brief and building the skeleton of a plan. A bit like putting a core team together and filling it out.

{{< imgcard code_slots_skeleton_1 Link "code_slots_skeleton_1.png">}}
Click to expand.
{{< /imgcard >}}

The output:
{{< imgcard output_slots_skeleton_1 Link "output_slots_skeleton_1.png">}}
Hi scores, realistic sports action.
{{< /imgcard >}}


## Strategy: Making Functions Work As A Team

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

### Top Down Organising

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

### Benefits 1: Readability

With other functions on hand, and well planned roles for each, `main()` becomes **a short summary of your program**.
Main() here is short and readable. Functions do a single job.

{{< imgcard code_main_ss_1 Link "code_main_ss_1.png">}}
Click to zoom
{{< /imgcard >}}

### Reuse

Blah

## Exercise: Slots Skeleton 2

Adding in betting (including function), more description of function body from brief.

{{< imgcard code_slots_skeleton_2 Link "code_slots_skeleton_2.png">}}
Click to expand.
{{< /imgcard >}}

The output:
{{< imgcard output_slots_skeleton_2 Link "output_slots_skeleton_2.png">}}
Hi scores, realistic sports action.
{{< /imgcard >}}


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

**Replace psuedocode** in _slots skeleton 3_ 
**Add** a function to show the 3 random numbers (just fake the data).
**Add** an enum for outcome of spin: no win, pair, three of a kind, three sevens.
**Return** an int from the function for the outcome (something from the enum)
**Reading** needed to get functions dialled now. 
