---
title: "Week 3: The Game Loop and Logic"
linkTitle: "W.3 Loops, Logic"
weight: 30
description: >
  Learning to repeat ourselves usefully and make anything.
---

## Week 2 Recap And Homework

* End of Chap 1, code.
* Start of Chap 2, code.
  
[Week 2 Homework](../week2/#homework)

## Controlling Execution

We know that **completing a task** is **stepping through a list** of instructions.  That list might be written on paper, spoken to someone, or typed into a computer.

We've stepped through these instructions in two ways so far: **sequentially** and **selectively**. Today we'll add the third, **repetitively**.

{{< alert title="Definition: Execute" color= "primary" >}}
To complete a task you first _complete_ each _step_.
<br /><br />
In programming we often talk about _**stepping**_ through and _**executing**_ each _**line**_ of code.
{{< /alert >}}

#### 1. _**Sequential**_ Execution

We go through the statements in the _**sequence**_ or order they're presented: 1st, 2nd, 3rd until we reach the end. This is how a program works by default.

{{< imgproc flow_knightsJourney_input Resize "400x" >}}
Knights Journey runs in a straight line.
{{< /imgproc >}}

####  2. _**Selective**_ Execution

AKA branching. You step through the instructions in a straight line until you come to a decision. Then you consider a condition and.. **_select_** which step to execute next,

* Is it equal to my favourite dessert?
* Does it weight more than I can lift?

{{< imgproc flow_guessy Resize "400x" >}}
Guessy Number selects the next stepped based on win/loss
{{< /imgproc >}}

#### 3. _**Repetitive**_ Execution

{{< youtube "F2A-0IF4sqI" >}}
<br />
Considered on its own, _**repetition**_ is a simple, endless, maybe boring process. When you introduce the **entering** and **exiting** of loops, things start happen.

{{< alert title="Dig Deeper" color= "primary" >}}
**More On Control Structures:**
<br />
<https://www.cs.fsu.edu/~myers/c++/notes/control1.html>
{{< /alert >}}


## Games Are Loops (in loops (in loops))

In games we often start at a **menu**, then choose a **game mode**. We then play our actual game, often, in **rounds**, **halves/quarters** or **levels**.

{{< imgproc menu_main_guac Resize "600x">}}
<i>Guacamelee's</i> main menu, to which we ultimately return.
{{< /imgproc >}}

{{< imgproc menu_game_mode_ow Resize "600x">}}
Choosing an <i>arena/arcade</i> game mode in <i>Overwatch</i>.
{{< /imgproc >}}

{{< imgproc rounds_loop_sf4 Resize "600x">}}
In <i>Street Fighter</i> victory goes to the winner of 2 out of 3 99 second rounds.
{{< /imgproc >}}

{{< alert title="Exercise: Your Favourites" color= "primary" >}}
Go to the thread "Game loops: Your favourites" on blackboard ([Ultimo](https://laureate-au.blackboard.com/webapps/discussionboard/do/message?action=list_messages&course_id=_84174_1&nav=discussion_board_entry&conf_id=_133815_1&forum_id=_800547_1&message_id=_1957190_1), [Online](https://laureate-au.blackboard.com/webapps/discussionboard/do/message?action=list_messages&course_id=_84207_1&nav=discussion_board_entry&conf_id=_133864_1&forum_id=_800095_1&message_id=_1957191_1)) and reply to it. Think of and add to your post:

1. At least 3 game modes in games you've played.
2. At least 3 examples of rounds, periods (sports) or levels in at games you've played.

You have <b>5 minutes</b>.
{{< /alert >}}

## Guessy Help: Coding A `while` Loop

Guessy Number involved blind guessing. Let's help players by telling them if their guess is too low or too high. But first...

{{< alert title="DIS-CODE QUIZ" color="primary" >}}
I need to know if the player's guess was too low, but the test on line 4 is missing! Type your answer in [ise102 on Discord](https://discord.gg/ZDyHS6N).

```cpp {linenos=inline,hl_lines=[4]}
secretNumber = 2
cin >> playerGuess;

if ( ??? ? ??? ) {   // player guess too low
  cout >> "Nope, you need to guess higher."
}
```
_(hint: variable, relational operator, variable)_
{{< /alert >}}

### Exercise: Code _GuessyNumber_Help_

1. Create a new `ise102_console` project in Visual Studio. Call it _GuessyNumber_Help_.
2. Replace the code in `main.cpp` with the following:
3. Test it out.

{{< imgcard code_guessy_help Link "code_guessy_help.png">}}
Using <i>repetition</i> for multiple guesses and <i>selection</i> for hints.
{{< /imgcard >}}


### How `while` Works
One way to repeat in _C++_ (and many languages) is with the `while` loop.  For any loop to be useful, we need to be able to **enter** it, **repeat** it, and **exit** it.

`while` supports all of these with the one test, but you have to **help**:
1. You **enter** the loop by **passing the test** in parentheses `()`, like an `if`.
2. You **repeat** the loop by **continuing to pass** the test.
3. You **exit** the loop by **failing to pass** the test. 


Here's the **syntax**
```cpp {linenos=inline}
while ( test )
{
  // Lines of code to execute.
}
```

{{< alert title="Critical: Different Outcomes Require Different Values" color="danger" >}}
To repeat the loop you must past the test continually, but unless you find a way to fail it will **loop infinitely**.

To fail the test, the **variables you're testing must change value!**

```cpp {linenos=inline}
while (secretNumber != playerGuess) {
  // The loop is running because these two numbers are different.
  // For the loop to end, secretNumber or playerGuess has to change value!
}
```
{{< /alert >}} 

### Exiting with `break;`

You can stop execution of a loop using the `break` keyword.

```cpp {linenos=inline}
while (secretNumber != playerGuess) {
  // some code
  if ( some test )
  {
    break;        // Loop will stop executing...
  }
  // some code
}
// ...program will jump here and resume 
```

### Continue Loops In The Textbook

[Chapter 2](../resources/cpp_through_games_2.pdf) and [Chapter 3](../resources/cpp_through_games_3.pdf) cover other useful loop structures you'll need, including `do... while` and `for` loops.

## Smarter Decisions With _Logical Operators_

Right now we have a very simple test to end our game: `playerGuess == secretNumber`.  To make our game more interesting, we decide to limit the player to 3 guesses.

### Exercise: Enter GuessyNumber_Limit

{{< imgcard code_guessy_tries Link "code_guessy_tries.png">}}
Limiting the players to 3 games sets a new standard in high stakes gaming. 
{{< /imgcard >}}

### Setting Multiple Conditions With `&&`

Sometimes we need to set multiple conditions for a task to be completed. Two examples:
```
A. "Hey mum, I want ice cream and Tim Tams, or nothing gets washed."

B. "If the dough is free of lumps and the oven has warmed to 200 degrees, 
    bake the dough for 25 minutes"
```

`(test 1) && (test 2)` requires BOTH tests to be `true` to pass.

## Summary

We:
* learned how to **enter and exit loops**, to repeat ourselves deliberately. 
* discovered ways to decide **whether to continue** at the beginning, middle or end.
* learned to use **multiple conditions** with logical operators

## Homework:
This week you will **submit your homework**.

1. Read the rest of [Chapter 2](../resources/cpp_through_games_2.pdf) of the textbook, where you'll learn about other types of loops.
    - Take notes
    - In a new `ise102_console` project, **type and run** _Play Again 2.0_ on **page 54**.
    - Change the game to use a menu with 2 entries (shown below) and look for `1` or `2` as their input.
      - tip: remember to change `char` to `int`
    - `1` continues, `2` exits. If they don't input `1` or `2`, continue the loop.
    - Send me your finished `main.cpp` via Blackboard Messages before next class!
```
  **Played an exciting game**"
  
  Do you want to play again?
  1. Play again
  2. Quit
  Enter 1 or 2 >
```