---
title: "7: Debugging, Slots, Conventions"
linkTitle: "W.7 Debugging"
weight: 70
description: >
  X-Ray vision: looking at your program as it runs
---

{{< imgcard see_code_agents.jpg>}}
Hello, Mr Smith.
{{< /imgcard >}}

## Debugging: What's WRONG With This Code?

We have total control over the **_writing_** of our code. We can plan it, craft it carefully, line by line. We can tidy things into neat little packages, functions that promise to take what we have and give us what we need. We **mentally step over it**, imagining a user typing in responses, and see that.. yes, this will work very well, if I haven't missed something.

**Then.. you compile and run it.** It transforms in to a mysterious, shadowy thing living deep in the silicon brain of your computer. It's now binary 1s and 0s, expressed as real electrons slamming through copper at half the speed of light. 

And **yes, you have missed something.**

### Now What?!

We do what anyone does to fix a machine or process: calmly slice it down into some basic, manageable categories, then check them.

### Sources Of Bugs

First up, **you** are the source of all bugs. More specifically though, we want to know **what sort of error you made** to generate the bug. You'll find most of these fit into a small number of categories, which helps direct your debugging approach.

#### Design Error

* well coded, planned solution doesn’t actually solve problem
* eg: find volume of a cylinder: formula perfectly implemented in code.. but you looked at the wrong formula: this one is for a torus.
* Eg: guitarist in band playing a song perfectly, but band is mad: learned wrong song

#### Language Usage Error

* Solution was good but code implementation doesnt actually match your planned solution
* Spring from misunderstanding language
* Eg: you write a test for three of a kind and it’s well designed in psuedocode: but you misunderstand how to join up the tests (chaining `==` instead of using a combination of `==` and `&&`). It triggers for 3 of a kind  but also pairs.
* EG: the maths are right but answer us wrong. Maybe You aren’t accounting for the precision of floating points. Or you are adding integers and the result is larger than the variable can hold.

#### Library Usage Error
* Passing the wrong scale of value in (milliseconds instead of seconds)
* Thinking a return value implies success, when it actually means error.

#### Others

Thoughts?

## Debugging By Output

### User Testing

Imagine you're the end user of a product. You can't change the code in any way. You can only test by:

1: Trying different inputs
2: Observing the output. 

In some cases, if you test enough inputs and notice a pattern in the outputs, you might just figure out what's happening.

### Adding Debug Output

Relying on the program's existing outputs is quite limiting, and we have to infer what's happening. We have a degree of freedom the user doesn't have.. we can make the computer output what it knows at any point. 

{{< imgproc talk_pulp_fiction Resize "600x">}}
Encourage your program to tell you things.
{{< /imgproc >}}

This is called `debug output`, and like a gun in Samuel L Jackson's hand, it makes the program more _verbose_.

// example of adding cout to see the data

pros: 
* you can make lots of new information available: 
  * the state of your variables
  * the count reached by your loops 
  * whether the body of an if statement is ever reached, etc.
cons: 
* You have to add all the ouput manually.
* Since you're putting output where you think the bug might be, you're probably only finding the bugs you expect to find.

## Rubber Ducking

You've stepped through your code 20 times and can't see a problem. You ask someone for help, and as you start to explain your problem the realisation dawns: you've looked directly at the error 20 times and know exactly where it is. You've wasted their time.

{{< imgcard smokebomb>}}
There's nowhere to hide.
{{< /imgcard >}}

After a while a pattern emerges. Just the **attempt to explain the bug** helped you see it from a fresh perspective. You didn't need to invite anyone over, **you could have explained it to a rubber duck* and achieved the same outcome.

{{< imgcard rubberducking_trio >}}
We're listening.
{{< /imgcard >}}

## Digital God: The Debugger

The debugger is on a whole other level. It lets you see inside your program, to slow it down to human speeds, stopping and starting it at your command.

{{< imgcard neo_stopping_bullets >}}
Be like Neo. See the matrix, control the matrix.
{{< /imgcard >}}

It can:
* See the programs variables, their types and their contents
* Stop and start execution, line by line
* See what literals like `0.06` and `b` are being treated as (`double` and `char`)
* Critically, you can follow the execution path and see if areas of your program (inside functions, loops, ifs) are ever reached.

### Exercise: Breakpoints And Step Through

* Step through simple program.
* Watch locals changed
* Watch an if statement

Step through skeleton 2
Step through Danny's answer to homework.

## More Slots
Add more basic features. Add more fake functionality.

## Coding Conventions

Agreeing on a style of code formatting and capitalisation.
(Grab from old week 6)
https://dmcgits.github.io/mds/ISE102/week6_notes.html

Link to resources, step through conventions there.



