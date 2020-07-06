<!--
title: "6: Functions 2"
linkTitle: "W.6 Functions 2"
weight: 60
description: >
  Programs inside programs!
-->

## Assessment 2: Slots

The brief pdf [on Blackboard](https://learn-ap-southeast-2-prod-fleet01-xythos.s3-ap-southeast-2.amazonaws.com/5c07149a959f5/15836406?response-content-disposition=inline%3B%20filename%2A%3DUTF-8%27%27ISE102_Assessment%25202%2520Brief_14112019.pdf&response-content-type=application%2Fpdf&X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Date=20200323T002852Z&X-Amz-SignedHeaders=host&X-Amz-Expires=21600&X-Amz-Credential=AKIAIW5OVFIUOTV36DNA%2F20200323%2Fap-southeast-2%2Fs3%2Faws4_request&X-Amz-Signature=79ee9923fd485563a89cf9cbb31a3dfb27f1b2a5885a18ad85ec1ca65766012a)

### Tips

* Write the brief down in your own words.
* Also remember to check against that and the real brief throughout the time you work on it.
* Break a big problem into smaller problems

## Approaching Big Jobs

Break it down into smaller and smaller tasks, until you can find stuff you can do.

### Powerful words: Abstraction and Encapsulation

We've talked about words giving us power over ideas, power to discuss and challenge them. _Conditional_ is one of those: it lets us talk about decision making in code that can be done several ways in infinite combinations, **but in a single word.** 

In a more mechanical/practical sense, "car" is a hell of an abstraction. Think about all the things that come together in a car, all the variations available, but in a word we evoke the entire thing. 

"Plant" is another. "Food". "Cooking". If we had to go into all the details of what these things actually mean, all the concepts and knowledge they combine, just to water our cactus or a heat up a frozen pie, we'd never get anyhere.
textbook pp143 and pp152 

More powerful than all of those is the word "abstraction". 

{{< alert title="Definition: Abstraction" color= "primary" >}}
Abstraction lets us talk, in a single word, about all that stuff I just talked about that. A 'computer', a 'controller', a 'button', they're all abstractions.

Abstraction, in this sense, is **the reduction of a complex system or idea to its general properties and interface**.
{{< /alert >}}

#### Spot the abstractions

> **A car** is a four wheeled vehicle, below a certain size, usually controlled by a single person, for the transporting of one or more human passengers and their property. They offer a steering wheel, along with controls for stopping, accelerating and gear selection (wether manual or partly automated). It typically (though optionally) encloses its passengers, separating them from their evironment and the weather. It's powered by combustion or electricity, using a fuel or power source contained in the vehicle, which can be periodically refreshed from an external source. 

1. Open _notepad_ and write down 5 abstractions of systems you can find in that description.
2. Choose one of them and write a brief description of that system, like I've done for car.
3. Write down 3 abstractions you find in your description.
4. When that's all done, open this thread and reply to it with your answers. 

## Code with abstraction

### Bullet points

I like to set up bullet points first, before any psuedocode. As you write them out, you start to see how parts will work, smaller problems you'll need to serve. Like a todo list, it clarifies and organises.

It'll probably consist of the top level abstractions in your game: menus, screens, game modes, settings.

```
"My pencil and I are smarter than I am." - Einstein
```

* Make **entire** slots game **app** (too monolithic)

1. Make a **menu**
    * Show menu w cash total
    * Get Choice
    * Go to sub-screen or quit  
2. Make the slots **game part**  
    * Show cash
    * Get user bet, check it
    * Take away bet
    * show 3 random numbers 2-7
    * Check for wins
    * Calculate winnings
    * Display win/loss info
    * Return to menu.
3. Make **credits** part  
    * Show credits (think film credits: who made what)  
    * Return to menu  
4. Make **quitting** part
    * Tell them how they did
    * Thank them or pick on them.

That's still a lot to do, but we don't have to do it all at once. 

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


<!-- ### From screens to functions

The abstractinos here basically amounted, in my mind, to screens in a game, and then the things they need done.

What screens do we need? What output do we need from the menu screen? What information do we need to give the slot machine? What do we need back from the slot machine screen when it's done?

The best part: we don't need our functions to do their real job: a function that checks for wins, for example, just needs to take three numbers and return a result
-->

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

<!--**Return** an int from the function for the outcome (something from the enum)
**Reading** needed to get functions dialled now.  -->
