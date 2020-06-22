---
title: "4: Exam Week Review"
linkTitle: "W.4 Review"
weight: 40
description: >
  Boolean logic, for loops, enums, literals, initialisation. Working through problems.
---


## Week 3 Recap And Homework

[Week 3 homework in the notes](../week3/#homework)

### Review Chap 2 

You read from page 48 on. We'll skim those before going over the homework.

Chapter 2: 

| Topic  |  Details | In the exam? |
| ----- | ---- | ---- |
| Truth, Branching | `if..else`, covered in week 2. | YES |
| Switch | Similar to a long `if..else if..else if..else` with special properties. | YES |
|`while` Looops | covered week 3 in class | YES |
|`do` loops | flipped while loops | YES |
|`break`, `continue` |  leaving loops early (danger!) | YES |
| Logical operators | Testing multiple things `||`, `&&`, `|` | YES
| Random numbers  | How to generate them. Useful for Assessment 2. | NO |
| Guess My Number | Game loop of guessy game. Including flowchart | YES |


### How did we do with homework menu?

You made changes to the textbook code.

* Comprehension of the brief
  * Did you carefully read how the code should react in each situation?

* Execution of the brief
  
  Write it in English first.. Pseudocode.
  Here are the comments from my code. I'll translate them to a kind of Psuedocode.

  ```
  /// START PlayAgainMenu
	/// `again` was fine for a yes/no answer, but i want to have numbered choices.
	/// I'll use an int to store the user's input, and call it their `choice`
	/// 0 is a good starting value, because it's not in the menu.
    // enter loop
    /// print you played, Play again??
    // print menu
    /// The user needs to know it's their turn now. Help them along by explicitly 
    /// asking for 1 or 2. The `>` symbol points to the cursor to get their attention.
    /// If they enter a 1, continue. Anything else that isn't `2` to exit.. continue.
    /// Therefore while their choice isn't (is not) equal to 2, continue.
  /// They quit. Say goodbye.
  /// END
  ```
* Questions before I show answer?
* How would I do it? 
  * **Visual Studio step through**
  * As flowchart?

{{< alert title="Continuing on NOT equal??" color= "secondary" >}}
It can seem strange at first to continue a loop by testing that something isn't equal, or isn't true. 
```cpp
while ( choice != 2 ) // Keep showing menu
while ( doorOpen == false ) // knock on door.
while ( !playerIsDead ) // keep playing
```
Remember though, `while` loops continue whenever the whole _expression_ in the parentheses is true. Ask yourself: 

**Is it true that _expression_**

> Is it true that ( their choice isn't 2)?
> Is it true that ( doorOpen is false? )? Is it true that ( door is not open )?
> Is it true that ( player is NOT dead )?
{{< /alert >}}

### Truth tables

When your head can't hold it all or get it straight, write it down in a table! Like Einstein said, 'my pencil and I are smarter than I am.'

**Our brief was:** "1 continues, 2 exits. If they don’t input 1 or 2, continue the loop."

The table shows us `(choice != 2)` is a useful test for this.

| `choice` value | `choice != 2` | `while` loop.. |
|----|----|---- |
| `1` | `true` | continues |
| `2` | `false` | ends  |
| `3` | `true` | continues |
| `4` | `true` | continues |
| `5` | `true` | continues |

How about `( !playerIsDead ) // keep playing`

| `playerIsDead` value | `!playerIsDead` (_not_ player is dead) | `while` loop.. |
|----|----|----|
| `true` | `false` | ends, game over |
| `false` | `true` | continues |



## Exercise: Grab and start Sololearn

1. Jump to the [resources page](../resources/#sololearn-c-tutorial), install it along with the c++ tutorial.
2. In the C++ tutorial, jump into _Basic Concepts_
3. Complete _What is C++_ and _Hello, world!_
4. Type S for Sololearn in stream chat when you're done

## Initialisation _Part 1_

> In the Textbook: [Chapter 1](../resources/cpp_through_games_1.pdf), pp22.

To understand the syntax of (way you write) `for` loops, we'll need to understand the more compact way of **declaring** and **initialising** a variable on one line:

{{< alert title="Definition: Initialise" color= "primary" >}}
Setting the <i>initial</i>, or first value of a variable. The simplest and oldest way to do this is by assigning a value with `=`. So far, we've usually done this on a new line.
{{< /alert >}}

```cpp 
temperatureInCelsius = 25.4f;         // Perhaps a setting for a thermostat
playerConnected = false;              // Your connection dropped.
```


{{< alert title="Definition: Declare" color= "primary" >}}
<i>Declaring</i> a variable is asking C++ to create one for you. You provide the _data type_ and _variable name_. You can also, optionally, make it a _constant_ and/or _initialise_ it.
{{< /alert >}}

```cpp 

// Declaration looks like:
//  type name;
int customersAge; 
string customersName;  
bool shopIsOpen;  

// Initialisation as part of declaration
bool isClassOnSunday = false;  

// Again, and also setting it as a constant
// Also, using tab to align your = signs vertically makes a bunch
// of initialised variables easier to read.
const float POTTERS_HEIGHT_IN_METERS    = 1.65f;
bool harryPotterPlaysBasketball         = false;        // He may learn.

/// His chance of growing gets smaller every year. So small we need
// a `double`, or double precision (64 bit) floating point number to store it.
double chancePotterWillGrow	= 0.000000000000000000000000000000000000000000000002;

// Declaring and initializing multiple variables on one line.
// Don't do it. It's hard to read, a recipe for bugs.
int age = 20, numberOfLungs = 2, instagramFollowers = 11;

// You can start a variable with an underscore or a letter.
// Cannot start with a number. Also, don't use dumb names.
float _aVar1ABL_3233Barf = 233.2f;
```

## For loops

We defined useful loops by three features. They let you:
- **Enter** the loop
- **Repeat** the code in the loop
- **Exit** the loop when we want to, resuming sequential execution.

What made that possible in `while` loops? 

{{< alert title="Example: Old Bashir" color= "warning" >}}
Bashir is a 27 year old guy who thinks he's already old, but really he's just ageing. Then he hits 30 and, uh, yeah.. he's super old now.
{{< /alert >}}

1: We **enter** loops with a test: an expression in `( )` evaluates as `true`
```cpp
  int age = 27;
  while ( age <= 29 )   // Definitely true the first time
  {
```

2. We **continue** looping if we pass that test repeatedly
```cpp
  while ( age <= 29 )     // Still true after first loop
  {
    cout << "You ageing.. ";
    age += 1;             // Age a year every time through the loop.   
```

3. We **exit** by failing that test. Which means our tested variable must **change** value
```cpp
    cout << "You ageing.. ";
    age += 1;            
  }
  // At 30 we fail age <= 29
  cout << "\n You old. \n";
```

### All requirements in one place

The **_syntax_** of a `while` loop doesn't refer at all to the creation or changing of variables. It's left to you.

A for loop puts them all together, at the start of the loop.

#### Exercise: While Loop Age Code

1. Create a new `ise102_console` project, _You\_old_ 
2. Open main.cpp and enter the code below
3. Run and test it. Try different starting and ending ages.
   
{{< imgcard code_you_old_while Link "code_you_old_while.png">}}
You old! Click for full size if hard to see (maybe you old)
{{< /imgcard >}}

#### Exercise: While Loop Age Code

1. Comment out everything inside `main` except `return(0);`
2. Type in the `for` loop version of the loop. 
3. Run it. If there are any errors, can you guess what's causing them?

{{< imgcard code_you_old_for Link "code_you_old_for.png">}}
You old! Click for full size if hard to see (maybe you old)
{{< /imgcard >}}

4. Change the the line where `age` is causing the error: replace `age` with `OLD`.
5. Try running it again.

### Breaking Down **_for_**

The parentheses `()` in the first line of the `for` loop are familiar, we've seen similar parens in `if` and `while`. This time, instead of a single test, those parens contain **3 lines of code**. The first two statements even have semi colons, like the end of a line of code.
  
   1. Declaring and initialising a variable, `age`: `int age = 27;`
   2. Using `age` in a **test**: `age < OLD;`
   3. Ensuring that `age` changes `age += 1`
   
{{< imgcard code_for_age Link "code_for_age.png">}}
3 lines of code are contained in the <code>for</code> loops parentheses <code>()</code>.
{{< /imgcard >}}

#### Pros:

* You can understand the lifecycle of the `for` loop by reading the first line (if the body of the loop doesn't change the same variable).
* If the variable is defined in the first line, you don't have have to search the code for it, or check its value.
* The loop body is a bit simpler
* It helps you to remember to change the test variable, making infinite loops a bit less likely. 
* Great for simple iteration 
  
#### Cons:

* The syntax is less beginner friendly at first
* Only operates at the top of the loop (no `do.. while` equivalent)

### Exercise: Structure And Variations

Those 3 parts in the `for` loop parentheses can **vary their form** quite a bit, and some be **left out** entirely. 

**Open a browser** and visit [Jdoodle's online C++ IDE](https://www.jdoodle.com/online-compiler-c++17/). Try each of the `for` loops below inside `main()` (delete the contents of `main` first).

```cpp
// The most common form of the `for` loop, declaring and using a variable called `i`.
// It's one of the few times a single letter variable name is okay.
// `i` (probably) stands for "index" or "iterator", something we can count with.
  cout << "I can count from 0 to 9" << endl;
  for ( int i=0; i<10; i++)
  {
    cout << i << ", ";
  }

// 1. assigning a new value to an existing variable, dogs,
//    rather than declaring a new variable
// 2. Notice it is testing that dogs is GREATER THAN 0, so we'll have 
//    to decrement or subtract from the variable so the loop will end.
// 3. `dogs` starts at 10 but how many woofs to we print? Why?
  int dogs = 2; 
  for ( dogs = 10; dogs > 0; dogs-=2  )
  {
    cout << "woof!\n";
  }
 
  cout << "Who let.. those dogs out?? \n";

float height = 1.9f;
// 1. Look, no initialisation in the parentheses. Still need the semicolon.
for ( ; height < 2.0f; height += 0.01f)
{
  cout << "You grew a tiny bit. \n";
}
cout << "You're tall now: " << height << " meters";

// If you can work out why the result is 2.01 you're a universe brain.

```

## Enum

Imagine you have 21 heroes in a game, and you need check thousands of little details about them every frame - their health, location, who they're blasting and so on. You'll need a variable for each kind of hero so you can do things like:
```cpp
  if( player1.hero == ZENYATTA ) {
    // things
  }
```

You _could_ use `string`, like  but strings use a fair bit of memory, and checking against them is quite slow (at least to the dizzyingly high standards of your cpu). It has to step through each letter and compare.

```cpp
const string ZENYATTA = "ZENYATTA"; // Nope, too slow.
const string ORISA = "ORISA";       
``` 

It's much faster and more efficient to use an integer, or `int`. It's so useful that integers are used for this all the time.

```cpp
const int ZENYATTA = 0; // Nope, too slow.
const int ORISA = 1;
const int MERCY = 2;
const int DOOMFIST = 3;
...
const int SOMBRA = 21;       
``` 

You can imagine with more than three or four of these it becomes a lot of typing and hassle to hand number a whole list, define each one as `const int`, change all the numbers if you add one in the middle, etc. That's where we use `enum` to save work.

```cpp {linenos=inline}
enum Heroes {
  ZENYATTA,
  ORISA,
  MERCY,
  DOOMFIST,
  JUNKRAT,
  TRACER      //  and so on
}
  
```

### Numbering And Use Of Enums

When you start initialising some of the constants and not others, you might not expect what happens. Read on in [Capter 1 of the textbook](../resources/cpp_through_games_1.pdf), where Enumerations are discussed from **page 29**.

## Literals

Review them! If I can create an integer value out of thin air with `0` or a string with `"hi"`, how do I do it for:
  * float
  * char
  * double (double precision float)
  * scientific notation float
  * bool

## Summary

This week we:
* Learned `for` loops.
* Reviewed

## Homework:

1. Read the beginning of [Chapter 3](../resources/cpp_through_games_3.pdf) (up to **page 82**) until you really understand for loops, even nested ones.
    - Take notes
    - Write small code tests to check your understanding!
    - Keep at it till you totally get `for` loops, even nested ones.
2. Keep at the _SoloLearn C++ tutorial_. You can stop at _arrays_.
3. Take your exam!
