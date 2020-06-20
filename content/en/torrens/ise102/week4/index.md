---
title: "4: Exam Week Review"
linkTitle: "W.4 Review"
weight: 40
description: >
  Boolean logic, for loops, enums, literals, initialisation. Working through problems.
---



## Week 3 Recap And Homework

End of Chap 2, code.

[Week 3 Homework](../week3/#homework)

### How did we do with homework menu?

* Comprehension of the brief
  * Did you carefully read how the code should react in each situation?
* Execution of the brief
  * Examples of approaches
  * Common mistakes
  * Unusual mistakes
* How would I do it? CRISP, SIMPLE

## Exercise: Grab and start Sololearn

1. Jump to the [resources page](../resources/#sololearn-c-tutorial), install it along with the c++ tutorial.
2. In the C++ tutorial, jump into _Basic Concepts_
3. Complete _What is C++_ and _Hello, world!_
4. Type S for Sololearn in stream chat when you're done

## Chapter 2 FLESH OUT

## MORE ON BOOLEAN LOGIC
More on Boolean logic from chapter 2.

Add two or more cleaner, crisper examples of multiple conditions.

Truth tables!

## Initialisation _Part 1_

Before we look at `for` loops, we'll need to understand a more compact way of **declaring** and **initialising** a variable

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

#### Exercise: For Loop Age Code

1. Create a new `ise102_console` project, _You\_old_ 
2. Open main.cpp and enter the code below by:
   - First using the `while` loop style 
     - Enter everything except **lines 17-22**
     - delete the comment delimeters on **line 7** and **line 15**
     - `Debug -> Start without debugging`
   - Then using the `for` loop style
     - Put the comment delimeters `/*` and `*/` back in.
     - Add in **lines 17-22**

{{< imgcard code_you_old Link "code_you_old.png">}}
You old! Click for full size if hard to see (maybe you old)
{{< /imgcard >}}

### Breaking Down **_for_**

The parentheses `()` in the first line of the `for` loop are familiar, but, instead of a single test, those parens contain **3 lines of code**. The first two even have semi colons.
  
   1. Declaring and initialising a variable: `int age = 27;`
   2. Testing against that variable: `age <= 29;`
   3. Incrementing that variable: `age += 1`
   
{{< imgcard code_for_age Link "code_for_age.png">}}
3 lines inside the parentheses. This syntax is mostly only seen in the <code>for</code> loop.
{{< /imgcard >}}

#### Pros:

* You can understand the `for` loop by reading the first line (if true to its word).
* If the variable is defined in the first line, you don't have have to search the code for it, or check its value.
* The loop body is a bit simpler
* It helps you to remember to change the test variable, making infinite loops a bit less likely. 
* Great for simple iteration 
  
#### Cons:

* The syntax is less beginner friendly at first
* Only operates at the top of the loop (no `do.. while` equivalent)


### Exercise: Structure And Variations

Those 3 parts in the `for` loop parentheses can **vary their form** quite a bit, and some even **left out** entirely. 

**Open a browser** and visit [cpp.sh](http://cpp.sh/). Try each of the for loops below inside `main()`. Don't forget to add `using namespace std`.



```cpp
// The most common form of a for loop, using a variable called `i`.
// It's the one time a single letter variable name is okay.
// i is for "index", and it's what we call a simple
// counter that has no need for a proper name.
  cout << "I can count from 0 to 9" << endl;
  for ( int i=0; i<10; i++)
  {
    cout << i << ", ";
  }

// 1. assigning a new value to an existing variable, dogs,
//    rather than declaring a new variable
// 2. Notice it is testing that dogs is GREATER THAN 0, so we'll have 
//    to decrement or subtract from the variable so the loop will end.
int dogs = 2; 
for ( dogs = 6; dogs > 0; dogs = dogs - 2  )
{
  cout << "..who let those dogs out?? \n";
}

float height = 1.9f;
// No initialisation at all in ( )
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

Read on in [Capter 1 of the textbook](../resources/cpp_through_games_1.pdf), where Enumerations are discussed from **page 29**.

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
