---
title: "7: Slots, Debugging, Conventions"
linkTitle: "W.7 Debugging"
weight: 70
description: >
  X-Ray vision: looking at your program as it runs
---

## What Is Our Program Doing?

We have total mastery over the writing of our code. We can plan it, write it out line by line, put things in functions. We can step over it and check that.. if I'm not missing something, it should do what I want.

**But then.. we compile it.** It becomes binary, it moves into the computer's world, **it's become a closed box.** We can't see the values changing, or the execution jumping around.. **We have to guess**, from the terminal output, all the things that are going on inside. How can we improve on this?

### The Harsh Interrogation Method

NEEDS EXAMPLE

If all we have is output, the next step we can take is to force our program to talk. Make it tell us what's happening at every stage. Basically we call `cout` a lot, so we can see values before and after they are changed.

### What Would Be Better

Seeing inside, stopping it, slowing it down from billions of lines per second to 1, or less?

## The Debugger

The debugger gives you a birds eye view of your code executing. You can see where it's jumping to, and you can stop/step through at your own pace.

(skip to 2:40 for visual metaphor) 

{{< youtube "CaE4rzfEgQ0?t=171" >}}

### Lets Step Through

* Step through simple program.
* Watch locals changed
* Watch an if statement

### Slot Machine Step Through

Step through skeleton 2
Step through Danny's answer to homework.

## More Slots
Add more basic features. Add more fake functionality.

## Coding Conventions

Agreeing on a style of code formatting and capitalisation.
(Grab from old week 6)
https://dmcgits.github.io/mds/ISE102/week6_notes.html

Link to resources, step through conventions there.



