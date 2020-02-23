---
title: "Week 2: Comparing and Deciding"
linkTitle: "W.2 Comparisons"
weight: 20
description: >
  We found out last week that a program is just the instructions for completing a task.
  A task really comes down to two things: _observing_ and _taking action_. Is it loose? Tighten it. Are they aligned? Glue them. Is it dry? Put it in the cupboard. 
  <br /><br />
  If we can _compare_ things and _decide_ what action to take, we can almost make anything!
---


## Recap And Homework

* Adding the `cin` code.
* Who tried _Flowgorithm_?
* Textbook chapter 1 game. How's the book?
  
[Week 1 Homework](../week1/#homework)

## This Week: A New Game

We're exploring a new game called **_Guessy Number_**. Let's type it in, then break it down.

### Exercise: Enter The Source Code

1. Make a **new project** using the `ise102_console` template (use the search field).
    - If you can't remember how, visit [the resources](resources/#visual-studio-c-templates) and start from **step 3**.
    - Put it in a new folder `week2` and call the project `Guessy Number`.
2. Open `main.cpp`, select and delete all the code, then **type this in**:
 
{{< imgcard guessy_code_vs Link "guessy_code_vs.png" >}}
Click the code if it's too small.
{{< /imgcard >}}
 
3. Select _Debug > Start without debugging_ from the top menu, or press `ctrl+F5`.
4. Test the game.

## New Processing Tools

In _Guessy Number_, Two new types of **processing** help the computer to be our playmate. They are:

1. **Comparing** two things to decide what is **true**.
2. **Choosing** what to do next.

They're new to us in _C++_, but were figuring out true/false and acting on it before we figured out toilets.

{{< imgproc vegetables_true Resize "1024x" >}}
<i>Peas</i> yo!
{{< /imgproc >}}

### Testing equality with `==`

{{< imgcard if_playerGuess_equals >}}
What's happening here?
{{< /imgcard >}}

How do we compare two things for **equality**? Well, the single `=` is already taken, it's used for **assigning** a value. Looking at the example below, It makes the demand "Let `myName` equal `"Mrs Pimplemouse"`."

``` cpp
string myName;
bool nameTestResult; // A new type of variable, it can only hold `true` or `false`

// Let myName equal Mrs Pimplemouse.
// Also means: store the value "Mrs Pimplemouse" in the box labelled myName. 
myName = "Mrs Pimplemouse";
```
For testing "is equal to" we use the _operator_ `==`, two equals signs. It asks the question "`is `myName` equal to `"Mrs Pimplemouse"`?" This returns `true` or `false`.

```cpp
string myName;
bool nameTestResult;

myName = "Mrs Pimplemouse";

// Is myName equal to "Mrs Pimplemouse"?
// It looks in the memory labelled myName and checks
// if it contains "Mrs Pimplemouse"
nameTestResult = (myName == "Mrs PimpleMouse"); 

// nameTestResult should contain the value `true`.
cout << nameTestResult;

// Outputs "1"
// (C++ thinks of false as 0 and true as 1)

```
{{% alert title="Challenge:" color="warning" %}}
The code above will **not run** because it doesn't have the `#include` statements or the `main` function. Could you make it work?

Could you make `cout` print bools as `true`/`false` (instead of `0`/`1`) with a bit of googling?
{{% /alert %}}

## Other Relationships

`==` evaluates the **relationship** between two things, in this case 'are they equal?' _C++_ and other languages have a family of them, known as...

{{< alert title="New Tool: Relational Operators" color= "primary" >}}
A _relational operator_ is something in _C++_ that checks how two variables/values relate to eachother and returns `true` or `false`.
{{< /alert >}}

{{< imgcard relational_operators Link "../resources/cpp_through_games_2.pdf" >}}
Click for the relational operators of c++. (Chap 2, p.38, of the textbook)
{{< /imgcard >}}

## Deciding The Next Action

{{< imgcard if_else_playerGuess >}}
How does this work?
{{< /imgcard >}}

Once we make a comparison, how do we decide our next action? Our relational operators returned `true` or `false`, so we have two paths available to us. How can we head down one of two different paths in _C++_?

{{% alert title="New Tool: The <b>if</b> Statement" color= "primary " %}}
Any code in the first _code block_ (the first curly braces) is executed when the comparison evaluates to `true`.

If the comparison resutls in `false`, the second _code_block_ after `else` is executed.
```cpp
  if ( a > b )
  {
    // Do things if a was larger
  } else
  {
    // Do things if b was larger
  }
```
{{% /alert %}}

### The Test In `if`

In the parentheses `()` we have the relational test `a > b`, but you can replace it with any test that returns `true` or `false`. You can even use a single `bool` because they can only be `true` or `false`.


### `else` is optional

You have two paths available when you make an evaluation. For example, you only need to display an error if something is wrong. When you **only want to act to true, leave off the `else`**.

```cpp
if (errorMsg != "")
{
  cout << errorMsg << endl;
}
```

## Homework:

* Rest of chapter one, read chapter two up to a **page 48**
* Create a project "Score Rater 3" and enter the source code on page 47.


Pay particular attention to these things in Chapter 1
## C++ Syntax

### `#Include` Statement

### Semicolons

easy peasy.

### Whitespace

Readability. Grab old week 1

### Capitalisation And Naming

Naming. Use of case.

Conventions! (grab from week 4 or 6 I think)