---
title: "3: The Game Loop and Logic"
linkTitle: "W.3 Loops, Logic"
weight: 30
description: >
  Learning to repeat ourselves usefully and make anything.
---

## Week 2 Recap And Homework

* End of Chap 1, code.
* Start of Chap 2, code.
  
[Week 2 Homework](../week2/#homework)

## Assessment 1

Read about Assessment 1 on [the ISE102 Asessments page](../assessments/#assessment-1-exam)

## Controlling Execution

We know that **completing a task** is **stepping through a list** of instructions.  That list might be written on paper, spoken to someone, or typed into a computer.

We've stepped through these instructions in two ways so far: **sequentially** and **selectively**. Today we'll add the third, **repetitively**.

{{< alert title="Definition: Execute" color= "primary" >}}
To complete a task you first _complete_ each _step_.<br /><br />
In programming we often talk about _**stepping**_ through and _**executing**_ each _**line**_ of code.
{{< /alert >}}

#### 1. _**Sequential**_ Execution

We go through the statements in the _**sequence**_ or order they're presented: 1st, 2nd, 3rd until we reach the end. This is how a program works by default.

{{< imgproc flow_knightsJourney_input Resize "500x" >}}
Knights Journey runs in a straight line.
{{< /imgproc >}}

####  2. _**Selective**_ Execution

AKA branching. You step through the instructions in a straight line until you come to a decision. Then you consider a condition and.. **_select_** which step to execute next,

* Is it equal to my favourite dessert?
* Does it weight more than I can lift?

{{< imgproc flow_guessy Resize "500x" >}}
Guessy Number selects the next stepped based on win/loss
{{< /imgproc >}}

#### 3. _**Repetitive**_ Execution

{{< youtube "F2A-0IF4sqI" >}}
<br />
Considered on its own, _**repetition**_ is a simple, endless, maybe boring process. When you introduce the **entering** and **exiting** of loops, things start happen.

{{< imgcard flow_guessy_loop >}}
If the playerGuess is NOT EQUAL to the secretNumber, pass through the loop.
{{< /imgcard >}}

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

{{< imgcard code_guessy_help_blanks Link "code_guessy_help_blanks.png">}}
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

{{< imgcard code_guessy_tries_blanks Link "code_guessy_tries_blanks.png">}}
Limiting the players to 3 games sets a new standard in high stakes gaming. 
{{< /imgcard >}}

### Setting Multiple Conditions

For some tests we need to meet **more than one condition**.

"We can play basketball _on the weekend_ if _it's not raining_"
  - Is it the weekend AND is it not raining?

"If the _dough is free of lumps_ and the _oven has preheated to 200C_ bake the dough for 25 minutes"
  - Is the dough lump free AND the oven temperature 200C?

In these examples test A **AND** test B both need to be true.

#### Testing With `&&` In Guessy Limit

You want to guess the number in Guessy Limit: What two things need to be true?  **Don't think about the code!** Think of it like you're the game master, and a child is the guesser:

"Can I guess?"
"Let me see: _if_ you haven't guessed the secret number _AND_ _if_ you haven't had 3 guesses... sure!"

### More Logical Operators

Logical operators are similar to using **and**, **or** and **not** in a sentence. **Or** works with two variables or values like **and** does. 

| Word    |   C++ Symbol    | When to use   |
|----|----|----|
| And     | &&              | I need **both** tests to evaluate to `true` |
| Or      | \|\|              | I need **at least one** test to evaluate to `true` | 
| Not     | !   | I need the following thing **not** to evaluate as true. |

<br />
**Not** works a little differently. It still fits in this category because you might say _"I need a **and not** b to be `true`"_. 

```cpp
//// If our game had a quit feature:
if ( guessesRemaining > 0 && !playerHasQuit )
{
  // This code runs if they haven't used all their guesses and they haven't quit.
  // (playerHasQuit here is a bool, true or false)
}
```

### Continue In The Textbook

As you read the textbook this week for homework, you'll encounter logical operators from **page 58** onward. Read it carefully and, if you aren't sure of anything, try some tests in code!

{{< imgproc textbook_chap2_logical Resize "600x" Link "../resources/cpp_through_games_2.pdf" >}}
Right click and <i>save Link as..</i> or <i>save Target as..</i> to download Chapter 2.
{{< /imgproc >}}

## Summary

This week we:
* learned how to **enter, repeat and exit loops**. 
* discovered ways to decide **whether to continue** a loop at the top, middle or bottom.
  - `while` evaluates at the top
  - `do... while` evaluates at the bottom
  - `break;` can exit from anywhere.
* learned to use **multiple conditions** with logical operators
  - `&&`, `||` and `!`

## Homework:
This week you will again **submit your homework code**.

1. Read the rest of [Chapter 2](../resources/cpp_through_games_2.pdf) of the textbook, where you'll learn about other types of loops. If you're caught up on the reading, you're beginning from **page 48**. If not, catch up from where you left off and continue to the end of chapter 2.
    - Take notes  
    - In a new `ise102_console` project, **type and run** _Play Again 2.0_ on **page 54**.
    - Change the game to use a menu with 2 entries (shown below) and look for `1` or `2` as their input.
      - tip: remember to change `char` to `int`
    - `1` continues, `2` exits. If they don't input `1` or `2`, continue the loop.
    - **Send me** your finished `main.cpp` **via email** before next class! I'll put my email in a Blackboard Announcement for those who don't have it.
      - To **find** `main.cpp` right click your project name in the _solution explorer_ and click _open folder in file explorer_

```
  **Played an exciting game**
  
  Do you want to play again?
  1. Play again
  2. Quit
  Enter 1 or 2 >
```