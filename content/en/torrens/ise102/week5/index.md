---
title: "5: Functions 1"
linkTitle: "W.5 Functions 1"
weight: 50
description: >
  Programs inside programs!
---

## Functions: Little Programs

Functions are like little programs within your program. You can define them to handle whatever job you need done, then call them whenever needed. You can hand them new data to work on each time, and grab their results to use or pass to other functions to get even more done.

They're easy to create because they have the same basic components as their parent programs: input, storage, processing and output.

### Making A Function

The function `twoTimes` takes a number and multiplies it by 2:

{{< imgcard function_two_times_1 Link "function_two_times_1.png">}}
Click to expand.
{{< /imgcard >}}

### Running A Function

Then, use `twoTimes` like a helpful program anywhere in `main()`!

* `main()` has been where we write our programs
* `twoTimes` is like a sub-program, and it runs when `main()` _**calls**_ it.

{{< imgcard function_main_2x_1 Link "function_main_2x_1.png">}}
Click to expand.
{{< /imgcard >}}

{{< alert title="Definition: Function" color= "primary" >}}
A section of a computer program that is defined only once but can be used when required at several different points in the program. They save space, reduce bugs and bring organisation and clarity by packaging up variables and code into handy, specialised tools.
{{< /alert >}}

## Exercise: Code Two_Times_Calculator

* Create a new project _Two\_times\_calculator_. 
* Enter the code below **including comments**
* Run it. Try a few other values.

{{< imgcard code_two_times_1 Link "code_two_times_1.png">}}
Click to expand.
{{< /imgcard >}}

### Structure Of A Function

Anything that is new to the program has to be declared.
* Functions are mostly _declared_ like a `variable`. 
* Tacked on the end are parentheses to tell C++ that this is a function. 
  * You can declare variables in these parentheses. These will receive any input the function can accept.

```cpp
int twoTimes ( int inputValue )
```

Then they have a body, a code block just like we've seen in `if`, `for`, `while`.  It can hold new variables (storage) and statements (processing) just like main.

```cpp
int twoTimes ( int inputValue )
{
  int outputValue = 0;            // Look, storage
  outputValue = 2 * inputValue;   // Look, processing
```

Finally, before the end of the code block, they support **output** using the special keyword `return()`. A value in the parentheses will be  _returned_ (output) to the calling function.
```cpp
  outputValue = 2 * inputValue;   // Look, processing
  return(outputValue);
}
```
{{< alert title="Synonyms: Function" color= "primary" >}}
We've been calling them functions, but they go by many names in many languages. Even within _C++_ you'll hear more than one. 

The most common are:
* method
* routine
* subroutine
* procedure
* subprogram
  
{{< /alert >}}

## Functions For Free

> Writing functions save you a lot of work. Using someone else's functions though, that's even better!

Places we get free functions:
* Packaged with _C++_, in the _**Standard Library**_
* Our work colleagues if you're at a company
* Your friends if you're making a game as a team (**not in this course**)
* _**Libraries**_ are downloadable collections of code and functions to do common tasks
* _**Game Engines**_ like _Unreal_ are written in C++ and expose lots of functions.
* _**APIs**_ are libraries written by organisations so we can use their service or device. Facebook, Arduino, PS4, Google all have _Application Programming Interfaces_

### The Standard Library

The keywords of the language give you the basic building blocks to make whatever you need.  That leaves out a lot of everyday things you might need though like:
* reading files
* generating random numbers
* rounding off numbers
* trigonometry and much more.

The Standard Library functions are spread out in a number of library files, but all use the same `std` prefix.
1: **include** the right **header** like `#include <cmath>`
2: Either use `std::` or `using namespace std` to access the function. Now you know what that really means.

> To find which header holds the function, google like so: for absolute values (turn a negative positive) google "absolute value C++" and click [abs - C++ Reference - Cplusplus.com](http://www.cplusplus.com/reference/cmath/abs/).

### Handy Math For Games

Here's Some very basic but very necessary math you don't want to have to code yourself.

| Function  | Header      | Description                                                   | Type            | Link |
|-----------|-------------|---------------------------------------------------------------|-----------------|------|
| **abs**   | cmath       | Takes a number, returns the **positive value**  (-2 becomes 2)    | int, float etc  | [docs](http://www.cplusplus.com/reference/cmath/abs/)     |
| **floor** | cmath       | Takes a decimal, returns **nearest lower** integer                | int, float      | [docs](http://www.cplusplus.com/reference/cmath/floor/)   |
| **ceil**  | cmath       | Takes a decimal, returns **nearest higher** integer               | int, float      | [docs](http://www.cplusplus.com/reference/cmath/ceil/)    |
| **srand** | cstdlib     | Takes a number, **seeds** random number generator                 | void            | [docs](http://www.cplusplus.com/reference/cstdlib/srand/) |
| **rand**  | cstdlib     | Generates a **random number** from 0 to RAND_MAX                  | unsigned int    | [docs](http://www.cplusplus.com/reference/cstdlib/rand/)  |
| **time**  | ctime       | **Time** in seconds since Jan 1 1970. Good seed for srand.        | time_t          | [docs](http://www.cplusplus.com/reference/ctime/time/)    |

{{< imgcard cplusplus_ref_floor Link "http://www.cplusplus.com/reference/cmath/floor/" >}}
Cplusplus.com reference for the <code>floor()</code> function
{{< /imgcard >}}

### Generating A Random Number

Using `srand` to initialise the random number generator, and `rand()` to create numbers.

{{< imgcard code_random_intro Link "code_random_intro.png">}}
Randoms in their default range, then in the range 0-10.
{{< /imgcard >}}

### Seeding The Generator

Computers are **designed to be extremely predictable**, to produce reliable results. Randomness and predictability don't go easily together, but algorithms and various inputs can be used to approximate randomness.

* You can make them more random by feeding them seed values.
* We used a very basic one: the time in seconds 1970. Every time we start the program that value will be different.
* In fact the `rand()` function in c++ will always give the same series of randoms unless you give it different seeds.

### Setting Your Own Range

`RAND_MAX` is already set in the _Standard Library_. To adjust the result of `rand()` to a **custom range** we have to use maths. One easy way: use the **remainder** of whole integer division.

{{< alert title="Modulus: The Remainder" color= "primary" >}}
**Dividing** one whole number by another gives us two results: the _**quotient**_ and _**remainder**_. 

_C++_ gives us the _quotient_ with the division operator `/`, and the _remainder_ with the modulus operator, `%`. Look at **10 divided by 3:**

![modulus_10_over_3](modulus_10_over_3.png)  

There are **3** (quotient) sets of 3 balls. **1** (remainder) is left over.

**In _C++_:**
```cpp
int quotient = 10 / 3;  // quotient == 3
int remainder = 10 % 3;    // remainder == 1
```
{{< /alert >}}

#### Remainder as range

The remainder of any number over 3 can only be 0, 1, or 2. This picture will help:

{{< imgcard modulus_11_over_3 >}}
There are <b>3</b> (quotient) sets of 3 balls. <b>2</b> (remainder) are left over.
{{< /imgcard >}}

We've had remainder 1, 2.. if we add another ball we'll have remainder 0. The rule then is:

```cpp
////  0, 1, 2 
number0To2 = number % (3);

//// 0,1,2,3
number0To3 = number % (4);

//// A pattern emerges..
number0ToRange = number % (range + 1);

```
## Exercise: Adding Functions

Upgrading _Randoms\_introduction_ with functions. I've written the structure, it's up to you to replace the missing code. The lines (__, _____) don't always match the length of the answer.

{{< imgcard code_random_functions_gaps Link "code_random_functions_gaps.png">}}
Click to expand.
{{< /imgcard >}}



## Homework

**Reading:** 
Chapter 5, Mad Lib.

[Chapter 5](../resources/book_cpp_through_games.jpg)

**Add to** _Two Times Calculator_:
* A constant for the multiplier (2)
* A function that asks the user for and returns the multiplicand
  * (A multiplicand is the second number in your multiplication)
* A menu item for viewing the credits (as in who made the game).


## Summary

This week we learned:
* Functions are like mini programs: 
  * input, storage, processing, output
* Creating and calling functions
* How functions make programming easier
* Ways to get more out of functions
  * Passing arguments
  * Descriptive function names
  * Returning values.