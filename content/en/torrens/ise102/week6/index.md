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

The brief pdf [on Blackboard](https://laureate-au.blackboard.com/webapps/blackboard/content/listContentEditable.jsp?content_id=_8948579_1&course_id=_90315_1)

## Solving programs

The way humans solve big problems is simple: **break them up into smaller problems** till we find ones we can solve. **Add up the solutions**, and you solve the big problem.

{{< alert title="The Game-Program problem" color= "primary" >}}
What you're usually getting when you download a game, say a soccer game, is **a program that, among other things, lets you play the game (soccer)**. It usually, but optionally, also allows you to configure the game, access statistics and more. It doesn't just load up and drop you into the action.

A game program, at the highest level solves the problem of **wrapping up the game screen (and others) in a menu (loop)**
{{< /alert >}}

## Slots Level 1: The program as problem

Our game's big problem to solve is:

> Starting up and displaying a menu _screen_ that accepts input providing access to other _screen(s)_ (slots game and related _screens_).  
> Finally, if the user chose to exit, that has to happen.

A big problem needs someone to solve it, and they usually need help. **`int main()`, our main function, is the lead problem solver in any program.** 

It can't handle the whole problem, so it breaks it into separate smaller problems, which it can hand off to other functions.

### The screens

There's only so much you can do in your head while staring at text. I'll draw out the _screens_ that our program will have.

{{< imgcard visualising_slots_program_1>}}
Drawn in stream: A menu, a slots game, a credits screen, an exit with a message.
{{< /imgcard >}}

### What are _screens_?

We're in fuzzy territory. They're not literal surfaces of literal monitors. 

It basically means **a section of our program**, and what that section would display on screen.

It's a bit.. _abstract_. 

---

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
<!--
## Stringing it together

The relationships between the jobs are very important: what do they need, and what do they provide? 

It's the job of `main()` to give out, receive back and pass along data to the next level of functions. What input do these medium jobs need, and what do they produce?
-->
## Slots Level 2: Medium sized problems

Back to our slot machine. Our _Game Program_ is an abstraction equivalent to our car, and it mentioned screens, Our screens are the next level of abstraction down. 

We need to define a little bit more information about them, and how they will interface with main. Let's do it with some easy techniques.

### Bullet points, Drawing, Pseudocode, Code.

I drew the rough screens above, but I didn't cover what they need as input or what they give back to main.

{{< imgproc visualising_slots_program_1 Resize "400x" Link "visualising_slots_program_1.png">}}
Visualising what the screens do.
{{< /imgcard >}}

Instead of a new drawing, first I'll just write down that level of detail as a **bullet list**. You're not going down to low level detail, but make sure you **don't miss** any top level functionality **required by the brief**.

### Step 1A: Bullet points 

{{< alert title="My Slots Game bullet list" color= "primary" >}}
1. **MENU SCREEN** which **gets a choice**  
     * Needs cash left (to display)  
     * Returns choice  
2. **SLOTS SCREEN**  
     * Needs cash total  
     * Returns cash left  
3. **CREDITS SCREEN**  
     * Needs nothing, returns nothing. `void` function.  
4. **QUIT SCREEN** with **feedback** (my add on)    
     * Needs their cash left (to comment on)  
{{< /alert >}}

### Step 1B: Flowcharts, Screens, Diagrams

I took it further with flowcharts, showing the flow of the program and some of the data needed/produced by each screen.

{{< imgproc slotso_flows_1 Resize "700x" Link "slotso_flows_1.png" >}}
<b>A:</b> Absolute top level, a menu that leads to screens.  <b>B:</b> Showing how main will actually decide whether to show screens or exit.
{{< /imgproc >}}

Next I broke out all the screens, and put in all the logic, input and output I think aren't accounted for, I'm really wanting something I can pseudocode now:

{{< imgproc slotso_flows_2 Resize "600x" Link "slotso_flows_2.png" >}}
Enough to jump to psuedocode.
{{< /imgproc >}}

{{< alert title="Tools, not rules." color= "secondary" >}}
Sometimes you might prefer 1A over 1B, or vice versa, or a blend of them. You might do them each a bit differently to me, it depends how you figure these things out best. 

They're just ways of organising your thinking and better exploring your plan.
{{< /alert >}}

### Step two: Psuedocode

This step is very important. Try writing your top level program in pseudocode. This helps you formalise what you've outlined above without having to think about c++ syntax or enter visual studio. Use whatever text editor is on hand.

Here's a very top level bit of psuedocode, keeping things very abstract. It just covers what jobs need doing, but not how we pass around the data.
```
constant STARTING_CASH = 2000
cashLeft = STARTING_CASH

MAIN
  begin loop
      display menu, cash, and get choice.
      if choice is 1 show slots
      otherwise if choice is 3 show credits
  loop again (while choice is not 2)
  display exit screen
END
```
Reorganising things a bit, and adding the flow of data between screens.
Notice I write where I'll store a result (choice =) and on the next line the things that have to happen before we get the result. That will eventually be a function call, but at first we can just write the code in-line.
```
MAIN
    constant STARTING_CASH = 2000
    cashLeft = STARTING_CASH

    choice = 0
    begin loop
        choice =  
            display Menu (needs cashLeft), get and return player choice

        if choice is 1 
            cashLeft = 
                play slots and return whatever cash (if any) is left 
        otherwise if choice is 3 
            show credits
        end if 
    loop again (while choice is not 2)
    display exit screen
END
```

####  Psuedofunctions?

I can see enough info there to give us our functions too. How?


{{< alert title="Functions enable abstraction!" color= "primary" >}}
Functions offer a simple input (arguments), output(return value) way of summarising solutions to problems.
When you see a function, like the one below, think:

**OUTPUT problemBeingSolved (INPUT, INPUT)**

```cpp
// A function that joins two parts of a name
// together with a space

string fullNameFromParts( string firstName, string lastName);
```

That means we can easily use functions to define new abstractions.
{{< /alert >}}

1. Display a menu screen 
     that allows a player to input a choice (and shows their cash left). Get
1. Display a slots screen
2. Display a credits screen
3. Display an exit message screen.

```
/// In name only: the next level of functions I'll probably use
  displayMenuGetChoice();
  playSlots();
  displayCredits();
  displayGameOver();
```

**OUTPUT problemBeingSolved (INPUT, INPUT...)**

## **Step four: Code!**

Try writing the **skeleton** of your game: a **game loop with only very top level functionality**, you can fake the rest.

I'll literally cut and paste my psuedocode in as comments, then on the lines below them write real code. Now it's just translation.

{{< alert title="Safety First: Compile as you go" color= "danger" >}}
Never try to translate it all at once. Compile with just main. Compile with just some constants etc.

Compiling as you go means that when you have an error, it's related to something you just wrote, not the whole program.
{{< /alert >}}

Pasted pseudocode: 
```cpp
int main()
{
  //constant STARTING_CASH = 2000
  //cashLeft = STARTING_CASH

  //choice = 0
  //begin loop
    //choice = 
    //  display Menu (needs cashLeft), get player choice and return it

    //if choice is 1 
      //cashLeft = 
      //  play slots and return whatever cash (if any) is left 
    //otherwise if choice is 3 
      //show credits
    //end if 
  //loop again (while choice is not 2)
  //display exitscreen
}
```
### First pass

{{< imgproc slots_making_code_1 Resize "800x" Link "slots_making_code_1.png">}}
Super basic functionality: A menu, fake input (2), a loop that exits.
{{< /imgproc >}}

{{< imgcard slots_making_output_1>}}
Even at this early stage, communication and spacing is important. 
{{< /imgcard >}}

### Second pass

{{< imgproc slots_making_code_2 Resize "800x" Link "slots_making_code_2.png" >}}
Real input. The ability to reach all the screens in our flowchart and then exit.
{{< /imgproc >}}

{{< imgcard slots_making_output_2>}}
Communicate! This differentiates games from business apps. We engage and entertain.
{{< /imgcard >}}

<!-- ## Go for readability

With other functions on hand, and well planned roles for each, `main()` becomes **a short, readable overview of your program**. You'll aim to have your functions short and readable too.
-->
## Homework

You have **two tasks:** to complete the code below and then plan two functions (including pseudocode).

### Task one: Complete the functions

The code below function declarations and function calls commented out, and they're incomplete. Your job is to complete the functions and move the appropriate code from `main` into them.

1.**Create a project** _Slotso_base_ and write out the code below, **including the comments**.   
2. **Run it.** Try the slots and credits screen. Finally, enter 2 to exit and make sure it all works.  
3. **Uncomment** the `displayExitScreen()` function declaration (with definition), then do the same for the call to the function near the end of main.  
4. **Identify the functionality** that belongs in `displayExitScreen()` and **move it** there.  
5. **Run it**, and make sure the program outputs what it did before.   
6. **Repeat** for the **other 3** functions.  
  * You can figure out the function types and argument types from the comments, or the code you'll be moving into them. Look at the bullet lists and flowcharts too.  
  * Meaningful variable names in the functions make life easier.  
  
{{< alert title="Easy or impossible?" color= "secondary" >}}
It **should be quite easy** if you've understood functions and the basic structure I built in class. If it's hard, if you find yourself moving things around and it never works, there's a good chance you haven't really watched and participated in class 5 and/or 6 with full focus. 
* If you skim or 'watch' the classes while doing another subject's work, **you won't get there**.
* If you **skipped week 5's homework** (at least half the class did) and think that moving on to week 6's will fix what you don't know about functions, **it probably won't**. 
* **This stuff becomes easy** when it clicks, but **it won't until you do the leg work**.
* Read (don't skim) the required textbook sections. 
{{< /alert >}}

{{< imgproc slotso_code_homework Resize "800x" Link "slotso_code_homework.png" >}}
Middle-click to open, larger, in new window.
{{< /imgproc >}}

{{< imgcard slotso_output>}}
The output before changes.
{{< /imgcard >}}

### Task two: Pseudocode two functions

1. Look at the bullet list in [_Next level down_](#next-level-down) below and **plan out + write pseudocode for:**
    * the **credits** screen
    * the **menu** screen.

### Next level down

Our screens so far are basic abstractions. Our next step is to describe those in more detail, so we can plan their code too.

Of course, youll find new abstractions, like we did with the in **car abstraction exercise**, and some of those will be worth writing a function for.

You just keep going down levels, doing this till everything is done and no further functions are needed.

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