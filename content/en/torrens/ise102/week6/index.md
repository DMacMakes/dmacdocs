---
title: "6: Functions 2"
linkTitle: "W.6 Functions 2"
weight: 60
description: >
  Programs inside programs!
---

## Week 5 Homework

1. The reading
2. The programs

[Week 5 Homework tasks in Week 5 notes](../week5/#homework)

## Assessment 2: Slots

The brief pdf [on Blackboard](https://learn-ap-southeast-2-prod-fleet01-xythos.s3-ap-southeast-2.amazonaws.com/5c07149a959f5/15836406?response-content-disposition=inline%3B%20filename%2A%3DUTF-8%27%27ISE102_Assessment%25202%2520Brief_14112019.pdf&response-content-type=application%2Fpdf&X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Date=20200323T002852Z&X-Amz-SignedHeaders=host&X-Amz-Expires=21600&X-Amz-Credential=AKIAIW5OVFIUOTV36DNA%2F20200323%2Fap-southeast-2%2Fs3%2Faws4_request&X-Amz-Signature=79ee9923fd485563a89cf9cbb31a3dfb27f1b2a5885a18ad85ec1ca65766012a)

### Tips

* Write the brief down in your own words.
* Also remember to check against that and the real brief throughout the time you work on it.
* Break a big problem into smaller problems

## Approaching big problems

The way humans solve big problems is simple: **break them up into smaller problems** till we find ones we can solve. **Add up the solutions**, and you solve the big problem.

{{< alert title="The Game-Program problem" color= "primary" >}}
What you're usually getting when you download a game, say a soccer game, is **a program that, among other things, lets you play the game (soccer)**. It usually, but optionally, also allows you to configure the game, access statistics and more. It doesn't just load up and drop you into the action.

A game program, at the highest level solves the problem of **wrapping up the game screen (and others) in a menu (loop)**
{{< /alert >}}

### Our big problem

Our game's big problem to solve is:

> Starting up and displaying a menu _screen_ that accepts input providing access to other _screen(s)_ (slots game and related _screens_).  
> Finally, if the user chose to exit, that has to happen.

A big problem needs someone to solve it, and they usually need help. **`int main()`, our main function, is the lead problem solver in any program.** 

It can't handle the whole problem, so it breaks it into separate smaller problems, which it can hand off to other functions.

#### The screens

Let's have a look at the _screens_ that our program will have, before we get into how to get to them.

(drawing time)

#### What are _screens_?

We're in fuzzy territory. They're not literal surfaces of literal monitors. 

It basically means **a section of our program**, and what that section would display on screen.

It's a bit.. _abstract_. 

## We need to talk about abstractions.

Lot's of things we're talking about are _abstractions_, and we need a way to think about that.

{{< alert title="Definition: Abstraction" color= "primary" >}}
An abstraction is just the most minimal, top level simplification of a an idea, or system, or type of thing. 

Abstraction lets us evoke detailed, complex things in a word or two: _Job_, _fruit_, _computer_,_game_, _memory_, _city, _car_, _meal_, _loop_, _company_. 

All those are complex things you can spend forever explaining, but if you bring them up in conversation people have a crystal clear notion of what you're talking about.

Importantly, an abstraction isn't a single instance of thing. **A _car_ is an idea.** Your mum's 2008 White Range Rover is an individual thing
{{< /alert >}}

**The power of an abstraction**:
* We can talk about it at a high level:
  * what it can do, what problem it solves, what it requires, what it produces.  
* Then we can **combine abstractions** to solve bigger problems!
  * Go somewhere: Car plus driver plus gps.
  * Learn programming: University course plus computer plus effort over time.

### Exercise: Spot the abstractions

> **A car** is a four wheeled vehicle, self propelled, usually controlled by a single person. The driver's seat provides a steering wheel and pedals to change the direction and speed, also allowing sudden stopping. They have variable speed, and can be brought to a sudden halt. They use a variety of methods to protect occupants from harm and the.They are often enclosed to protect you from the environment. Combustion of hydrocarbons or a battery provide a source of power to the engine, which in turn powers the axels and on board electronics. A car, when unlocked, commonly provides doors as access points.

1. Open _notepad_ and write down 5 abstractions you can find (written or implied) in that description.
2. Choose one of them and write a brief description of that system, like I've done for car.
3. Name 3 more abstractions within that system you've described.
4. When that's all done, **open this thread and reply** to it with your answers. 

<a class="btn btn-lg btn-primary mr-3 mb-4" href="https://laureate-au.blackboard.com/webapps/discussionboard/do/message?action=list_messages&course_id=_90315_1&nav=discussion_board_entry&conf_id=_153571_1&forum_id=_857301_1&message_id=_2200384_1" target="_blank">Abstraction Exercise Thread<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>

#### Levels

What you just did, breaking down a _car_ into other, smaller abstractions, you just used **levels of abstraction** to understand a car. Top to bottom, or bottom to top, levels of abstraction make it manaageable!

## Slots: Medium sized problems

Back to our slot machine. We need to break our big job down to medium sized problems that, done in some order, will add up to a solution to our _Game Program_ problem. 

When I talk about these problems as simple things with inputs and outputs, you'll know I'm treating them as _abstractions_. If you're thinking ahead you'll realise that, yes:

**functions offer a simple input, output way of thinking of bigger problems.. they helps us use levels of abstraction** 

If we break our program into solvable problems, handled by functionsthem out and chain their inputs and outputs.. we can expect a solution to our big problem. 

1. Display a menu screen that allows a player to input a choice (and shows their cash remaining)
Based on that data, we need to be able to
1. Display a slots screen
2. Display a credits screen
3. Display an exit message screen.

```
/// Very roughly, the next level of functions down from main.
int main()
{
  displayMenuGetChoice();
  displaySlots();
  displayCredits();
  displayGameOver();
}
```

### Stringing it together

The relationships between the jobs are very important: what do they need, and what do they provide? 

It's the job of `main()` to give out, receive back and pass along data to the next level of functions.

What input needs the cash amount to display it, and the slots screen will need to know about cash as well

Notice  what input do these medium jobs need, and what do they produce? Each job should probably take some input from the job before it, and output its own. A chain that leads from start to finish.


## Bullet points, Pseudocode, Code.

It's all getting pretty theoretical sounding, and you're not sure your brain will survive if we move to code now. Good news:

**My first step**, after reading the brief and maybe drawing things on a pad, is **writing a bullet list.** I **put in whatever I think the brief is asking** me for.

{{< alert title="My Slots Game bullet list" color= "primary" >}}

1. Make a **menu screen** which **gets a choice**  
  * Needs cash remaining (to display)  
  * Returns choice  
2. Make the slots **screen**  
  * Needs cash total  
  * Returns cash remaining  
3. Make **credits screen**  
  * Needs nothing, returns nothing. `void` function.  
4. Make **quitting screen** with **feedback** (my add on)    
  * Needs their cash remaining (to comment on)  
{{< /alert >}}

**Step two:** Try writing it in pseudocode, of the top level, figuring out your top level functions and what they need.

**Step three:** Try writing the game loop with some function skeletons in Visual studio.

Big problem: Make **entire** slots game **app** (too monolithic)


You just keep going down levels, doing this till everything is done.

1. **menu screen**
    * Display cash total (argument)
    * Display choices
    * Get Choice
    * Check if valid choice
    * Show error and get choice again if no good
    * return choice
2. **slots screen**  
    * Show cash
    * Get user bet, check it
    * if valid, Take away bet
    * if invalid, say why and ask again.
    * generate and show 3 random numbers 2-7
    * Check for winning combos
    * Calculate winnings
    * Display win/loss info
    * Return to menu.
3. Make **credits screen**
    * Show credits (think film credits: who made what)  
    * Ask them to press a key to return to menu
    * Wait for key press, return to menu
4. Make **quitting screen**
    * Depending on their score, thank them or console/pick on them


## Abstraction benefits 2: Readability

With other functions on hand, and well planned roles for each, `main()` becomes **a short summary of your program**.
Main() here is short and readable. Functions do a single job.

## Homework

### Reading

Coming tomorrow

### Fleshing out code skeleton

Coming tomorrow

* Adding dummy and real functionality to your functions.


<!--

### Code skeleton

A good way to start is a scaffolding or skeleton that looks and behaves a bit like the app. Thinking of parts of our program as abstractions, we can forget about the details now and just think about the 'screens' in our game, and what goes in and out of them. Then we translate that basic exchange into function definitions that make sense. 

Later we can add functions to do various jobs like checking for wins. To keep focussed on our top level, we even **fake their contents** eg returning a win or loss for testing.

## Exercise: Slots Skeleton 1

Looking at the brief and building the skeleton of a plan. A bit like putting a core team together and filling it out.

{{< imgcard code_slots_skeleton_1 Link "code_slots_skeleton_1.png">}}
{{< /imgcard >}}

The output:
{{< imgcard output_slots_skeleton_1 Link "output_slots_skeleton_1.png">}}
The game loop works, the winnings are accruing.
{{< /imgcard >}}


### From screens to functions

The abstractinos here basically amounted, in my mind, to screens in a game, and then the things they need done.

What screens do we need? What output do we need from the menu screen? What information do we need to give the slot machine? What do we need back from the slot machine screen when it's done?

The best part: we don't need our functions to do their real job: a function that checks for wins, for example, just needs to take three numbers and return a result


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

If **Smart criminal** wants to control events and predict the outcome of the heist, he needs to deal with each person individually.

#### Direct Control

* Each team member is given only the **information they need to know** for their specialty
* They return the information/goods to him **directly**
* He then **passes on** some of what he's learned to the **next team member**
* They can then subcontract out some work on that limited task/info when necessary

#### In Practise

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
{{< /imgcard >}}

## Exercise: Slots Skeleton 2

Adding in betting (including function), more description of function body from brief.

{{< imgcard code_slots_skeleton_2 Link "code_slots_skeleton_2.png">}}
{{< /imgcard >}}

The output:
{{< imgcard output_slots_skeleton_2 Link "output_slots_skeleton_2.png">}}
We know our game loop is reliable, now we've added fake betting.
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

Imagine all your heist guys had all the information everyone else had, they'd be overloaded. Humans work and focus better with smaller amounts of info related to the current task. Functions embody that idea.

**Question:** A function takes input, but.. does it have to? We defined `highScore` in `main()`, can't `showQuitMessage()` just use it??

**Answer:** No. A function's body isn't visible to any other code, including the variables there.


What a _function_ can see is its **_scope_**. A function's scope includes:
   1. Variables declared in the parentheses aka the _arguments list_
   2. Variables declared inside the _code block_ `{}` of the _function_.
   3. _**Global**_ variables declared outside any codeblocks of any functions. Commonly after `#include` statements.

{{< alert title="Origin Of Term: Scope" color= "primary" >}}
From the _Online Etymology Dictionary:_

**Scope:**   
* from Greek _skopos_ / _spek-_ "to observe." Sense of "distance the mind can reach, extent of view" first recorded c. 1600.
{{< /alert >}}

## Due This Week

### Code 

1. **Replace psuedocode** in _slots\_skeleton\_2_:
    - getValidBet needs to get bet, check is valid, loop if it isn't valid.
    - showHomeMenuPrompt needs to loop if choice is invalid
2. **Add** a function to show the 3 random numbers (just fake the data).
3. **Add** an enum for outcome of spin: no win, pair, three of a kind, three sevens.

-->