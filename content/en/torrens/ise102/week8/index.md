---
title: "8: Finalising Slots"
linkTitle: "W.8 Final Slots"
weight: 80
description: >
  User experience, submission of projects.
resources:
  - src: "dad_car.jpg"
    params:
      byline: "Credit: http://annx.asianews.network"
---

## What are we learning today?

1. Answers to the **homework**
2. Correctly **delivering** assessment 2.
3. The next level of **abstraction**: the `playSlots()` function.
4. Project management using sticky-note style _**agile/kanban** board_.
5. Adding colour with **_colorterm.h_**

## Delivering Your Assessment

* Confirming the Blackboard-related **extension to July 29**. 
* If anything is going to stop you delivering on time, reach out/request extension BEFORE the day it's due.

Visit the link, follow the instructions there carefully!!

<a class="btn btn-lg btn-primary mr-3 mb-4" href="../assessments/#assessment-2-slot-machine" target="_blank">Delivery (Zip) File Creation on dmdocs<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>

## Assessment 2 progress

**What's done?**
* Screens, menu loop (if homework done)
* `playSlots()` function dummy structure is there
* Some real playslots structure basic user inputs of bet
* Good formula for calculating new cash amount, it's returned to Menu.

### What's left to do?
This will be easier [using Trello](https://trello.com/b/aETa5OZN/slotsot2):

{{< imgproc trello_slotso_w8 Resize "700x" Link "https://trello.com/b/aETa5OZN/slotsot2" >}}
Click the image to visit the board.
{{< /imgproc >}}

## Exit and Credits screens

Skipping these is a terrible idea. You're here to make games, and games are made to engage and entertain. EASY MARKS.

---

## Pseudocoding Playslots

Play Slots is different to the other screens, it hosts the actual game itself. As such it has more work to do, and is more complex.

**How do we deal with complexity?** We break it up/abstract it into smaller jobs, and send it to functions.

![](pstasks.png)

First, think of it at the topmost level:

{{< alert title="Psuedocode: playSlots() outline" color= "secondary" >}}
Keeping it pretty abstract, again half way between a bullet list and pseudocode.

Variables and structure are implied mostly.

```
START playSlots (needs: players cash amount to start)
  Get valid bet from player.
  Remove bet from playerCash
  Make and display random numbers
  Set bet multiplier based on win/loss by matching random numbers
  Add (bet times multiplier) to playerCash
  Tell players the outcome
  return playerCash value 
END playSlots
```
{{< /alert >}}

### The bet

There are two cards related to making a bet. There's an obvious repeat in the job too. 

{{< imgcard pstasks_1_bet Link "pstasks_1_bet">}}
From the <i>Trello</i>. Maybe these two can go in a function together.
{{< /imgcard >}}

{{< alert title="Psuedocode: playSlots() calls getValidBet()" color= "secondary" >}}
In `playslots()`, we'll do the equivalent of making a wish. We'll pretend we have a function to do the work for us, and describe it.

```
START playSlots (playerCash)
  // Get valid bet from player becomes:
  bet = getValidBet(needs player Cash)
  ...
```
Looks good! So we need a function:
```
FUNCTION getValidBet
needs: playerCash
returns: a valid bet in dollars
```
{{< /alert >}}

### Randoms

We need to make 3 random numbers. They'll have to be displayed and then compared to see if they're a winning combo. That means storing them. 

{{< imgcard brief_randoms>}}
From the assessment brief pdf.
{{< /imgcard >}}


{{< alert title="Pseudocode: playSlots() with randoms" color= "secondary" >}}
Since we don't yet know how to get 3 values back from a function, we'll have to request them one by one in playSlots.

```
START playSlots (playerCash)
  // Get valid bet from player becomes:
  bet = getValidBet(needs player Cash)

  rand1 = a random in the range 2-7
  rand2 = another random in the range 2-7
  rand3 = another random in the range 2-7
  
  display the numbers on cards/pokie wheels/whatever
  ...
```
Let's make a wish again! Those lines could become:

``` 
rand1 = getRandInRange(2,7)
rand2 = getRandInRange(2,7)   // and so on
```

You can guess what our function definition might look like 

```
FUNCTION getRandInRange
needs: lowest number and highest number
returns: a random integer in that range, inclusive.
```
{{< /alert >}}

You can hopefully see how starting at a high level of abstraction begins to make the next level down pretty obvious. It's _never_ true the other way around - making low level functions without a plan and then trying to fit it all together is a nightmare.

### Testing wins, setting multipliers.

When we check for a win we only need to know one thing in order to calculate winnings: what was the multiplier? 

The job we need done then is:
1. Take multiple inputs (the 3 random numbers we have already stored)
2. Compare them and check for win conditions.
3. Tell me what multiplier is appropriate: 0x (loss), 3x (Pair), 5x (triple) or 10x(triple7)

{{< alert title="Pseudocode: playSlots() with win test" color= "secondary" >}}

```
START playSlots (playerCash)
  // Get valid bet from player becomes:
  bet = getValidBet(needs player Cash)

  rand1 = a random in the range 2-7
  rand2 = another random in the range 2-7
  rand3 = another random in the range 2-7
  display the numbers on cards/pokie wheels/whatever

  multiplier = checkForWin(rand1, rand2, rand3)

  ...
```
The arguments for checkForWin are just 3 numbers, but it'll help if we use something more meaningful than `number1, number2,number3` or `x,y,z`.

You can call them wheel, as in the spinning wheel on the machine, or card since they're numbers represending cards  in poker(thus _poker machine_).

```
FUNCTION checkForWin
needs: 3 numbers (wheel1, wheel2, wheel3)
returns: a multiplier, preferably matching a meaningful constant? hint: enums

{{< /alert >}}

### Calculating winnings, returning new cash total.

According to the brief, the amount you win is a multiple of your bet. We can just add that to the player's remaining cash (we've already subtracted the bet). Finally, we return it.

{{< imgcard brief_multipliers>}}
From the assessment brief pdf.
{{< /imgcard >}}

{{< alert title="Pseudocode: playSlots complete" color= "secondary" >}}

```
START playSlots (playerCash)
  // Get valid bet from player becomes:
  bet = getValidBet(needs player Cash)

  rand1 = a random in the range 2-7
  rand2 = another random in the range 2-7
  rand3 = another random in the range 2-7
  display the numbers on cards/pokie wheels/whatever

  multiplier = checkForWin(rand1, rand2, rand3)
  playerCash = playerCash plus (bet times multiplier))
  Tell player about win/loss, new total etc
  
  Prompt player to hit key, return to menu.
  return playerCash
END playSlots
```
The arguments for checkForWin are just 3 numbers, but it'll help if we use something more meaningful than `number1, number2,number3` or `x,y,z`.

You can call them wheel, as in the spinning wheel on the machine, or card since they're numbers represending cards  in poker(thus _poker machine_).

```
FUNCTION checkForWin
needs: 3 numbers (wheel1, wheel2, wheel3)
returns: a multiplier, preferably matching a meaningful constant?
hint: enums (look at MenuChoices)
```
{{< /alert >}}

{{< imgcard pstasks>}}
I remember to check the Trello cards too.
{{< /imgcard >}}

### playSlots in C++ with pseudocode

I've implemented parts of the pseudocode here in a basic way along with dummy results (faking a win by Pair). 

The rest has the pseudocode as comments. It's not a big leap from here to the finished function!

{{< imgproc code_playSlots_wpseudo Resize "700x" Link "code_playSlots_wpseudo.png" >}}
<i>Click/Middle click for full size.</i>
{{< /imgproc >}}

---

## Filling in getValidBet

For this to work, the player should:
1. Know what to input: what a valid(correct) bet is.
2. Be told if they make a mistake, and what it was.
3. Be prompted again for a valid bet.

{{< alert title="Pseudocode: getValidBet in detail" color= "secondary" >}}
It's a lot like the [menu functionality in the week 7 homework](../homework7/). It loops, has valid and invalid input to test for, and an error needs to be displayed.

```
START getValidBet (playerCash)
  betIsValid = false
  bet = 0
  error = ""

  while we don't have a valid player bet (betIsValid == false)
    
    If they stuffed up previous attempt, show that error

    Ask user for a bet between 0 and playersCash 
    If bet is above zero and they can afford it:
      set betIsValid to true
    else
      if (bet is zero)
        set error to "You can't bet nothin"
      else
        set error to "You can't bet what you don't got."
      end if
    end if
  end while
  
  return the bet
END getValidBet
```

{{< /alert >}}

## Filling in checkForWin

lorem
1. ipsum
2. dolor

{{< alert title="Pseudocode: checkForWin " color= "secondary" >}}
Lorem ipsum.

```
START checkForWin( wheel1, wheel2, wheel3)
  storage

  processing

  return something
END checkForWin
```

{{< /alert >}}

<!--

```
START PlaySlots (needs: players cash amount to start)
  
  while we don't have a valid player bet
    Ask user for a bet between 0 and playersCash
    If they mess up, tell them how
  end while
  remove the bet from playerCash (cost of playing)

  make and display 3 random numbers between 2 and 7
  inspect those 3 numbers for a winning combination.
  // Players receive x times their bet, depending on winning/losing combinations
  Select a multiplier that matches the outcome:
    No match: 0x, Pair: 3x, Three of a kind: 5x, Three 7s: 10x
  Tell players they won and why.
  Add (bet time multiplier) to playerCash
  Tell players how much they won, and their new total.
  
  // extra: offer players chance to bet again
  Tell players to hit a button to return to menu. Wait for them.

  return playerCash value 
END PlayerSlots
```

-->

## More about what to submit.

Academic integrity, demonstrating what you've learned in class, not submitting broken solutions.

 <a class="btn btn-lg btn-primary mr-3 mb-4" href="https://trello.com/b/aETa5OZN/slotsot2" target="_blank">Avoid submission dangers: Trello<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>


## Add Colour With Termcolor

What does it achieve, and how do can you add it?

{{< imgcard output_termcolor_menu Link "Termcolor_sample.zip">}}
Menu (older code) with some basic colour added.
{{< /imgcard >}}

### Visual Communication

It's not pretty but it's easy to parse, so it's easy to play.
  - Colour blocking to separate title and current cash from menu
  - Green to evoke cash for the player money (association)
  - Hilighted the menu numbers to call player to action
  - Used the same magenta to associate the input area with the menu numbers.

### Using The Library:

Download the visual studio solution first:

<a class="btn btn-lg btn-primary mr-3 mb-4" href="Termcolor_sample.zip">Download Termcolor_sample.zip<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>

  * Including termcolor in main.cpp
  * accessing the constants it uses for colour
  * using termcolour's reset function

{{< imgcard code_termcolor_menu Link "Termcolor_sample.zip">}}
{{< /imgcard >}}

## Exercise: Add colour to your menu.

### Getting The Library

Add `termcolor.h` to your own assignment by **right clicking** the `termcolor.h`, clicking _Save link as.._ and saving to your assessment's project folder.

<a class="btn btn-lg btn-primary mr-3 mb-4" href="termcolor.h">Download termcolor.h<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>

### Making The Library Available

Just having it in your project/solution folder doesn't make `#include` work.

In _solution explorer_, right click _Headers_, add existing, and select the `termcolor.h` file in your project folder.

### Usage

For more help, visit the [github homepage of termcolor](https://github.com/ikalnytskyi/termcolor) and scroll down to the README.
