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


## Week 1 Recap And Homework

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

{{< alert title="Definition: Operators" color= "primary" >}}
_Relational operators_ are just the operators in _C++_ that test relationships.

Operators are just **symbols** that tell the computer to **do some processing** on variables or values.

```cpp
int myDollars = 10;
int yourDollars = 5;

// `+` is a math operator that performs addition.
int ourBudget = myDollars + yourDollars;
```
There are operators for arithmetics (`+`,`-`,`/`), input/output (`<<`,`>>`), assignment (`=`), logic (`&&` is _and_, `||` is _or_) and more.
{{< /alert >}}

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

### `if` With Arithmetic Operators

You can combine arithmetic operators with relational operators in your tests:

```
  if ( myMoney + yourMoney > priceOfMilk)
  {
    teaColour = "black";
  } 
  else 
  {
    teaColour = "white";  
  }
```
{{< alert title="Definition: Conditionals" color= "primary" >}}
_Conditional logic_ or _branching_ is code that lets us choose our next code.
Operators are just **symbols** that tell the computer to **do some processing** on variables or values.

```cpp
int myDollars = 10;
int yourDollars = 5;

// `+` is a math operator that performs addition.
int ourBudget = myDollars + yourDollars;
```
There are operators for arithmetics (`+`,`-`,`/`), input/output (`<<`,`>>`), assignment (`=`), boolean logic (`&&` is _and_, `||` is _or_) and more.
{{< /alert >}}


## The Power Of Names

One of the most **important parts of learning** is putting names to things. Naming a thing or concept gives us power over it: we can **discuss** it, **theorize** about it, **question** it. It becomes a manageable idea, you can **combine** it with other ones.

Think about the power of the word _**choice**_ as you grow up. In your family life, at school, at work. Imagine life without the ability to think about and demand the right to make choices. **Would your parents ever have suggested** nutella toast and clan raids at 1am Sunday night?

We learned a few new and very powerful words today, and I don't want you to think of them as jargon or a pain to learn. These words might be the **biggest gift of a university education**. Todays words..

* Operators
  - Relational Operators
  - Arithmetic Operators
  - Assignment
* Conditional logic
  - branching
* Code block
* Literal (vs variable)

give you huge power because these are **common ideas in programming**. If you know how to look for these things in a **new language** you'll find them, and the language will open up very quickly.

### Exercise

Lets implement the same game in **_Flowgorithm_**, using our new understanding of programming ideas.

1. Grab _Flowgorithm_ from the [resources](../resources/#Flowgorithm) page.
2. Open it, it should start with a new flowchart (main -> end).
3. Click the arrow between (main -> end) and choose _declare_
4. Name the variable `secretNumber`, and set it to `integer` in the drop down.
5. Continue on to make the rest of Guessy Number.

{{< imgcard flow_guessy Link "flow_guessy.png">}}
Click if the flowchart is too small to read.
{{< /imgcard >}}


## Summary

Ths week we learned how to make comparisons between values, and then to decide what action to take. We matched the idea of **processing** and the use of **operators**.

We discussed the importance and power of names.

## Homework:

1. Read the rest of [Chapter 1](../resources/cpp_through_games_1.pdf) of the textbook, where you'll learn about arithmetic operators, data types and more.
    - Take notes
    - In a new Visual Studio project, **type and run** _Game Stats 2.0_ on **page 24**.
2. Read [Chapter 2](../resources/cpp_through_games_2.pdf) up to a **page 48**
    - Take notes
    - Create another project _Score Rater 3_ and **type and run** the code on **page 47**.
