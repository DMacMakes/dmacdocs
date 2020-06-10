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

## Delivering Your Assessment Files

Work through the steps shown in the video carefully: if your submission is bloated or misnamed it will cost marks.

[Ise102 Assessment 2 Delivery instructions on dmdocs](../assessments/#assessment-2-slot-machine)

## Add Colour With Termcolor

What does it achieve, and how do can you add it?

{{< imgcard output_termcolor_menu Link "Termcolor_sample.zip">}}
Menu with some basic colour added.
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

<!--
## Intro to Objects
  * Learning and adding functions, vs spoon feeding answers. We can do that now!
  * Cin functions
  * Catching alpha numeric input (in demo code, not spoon feeding)
  * String object functions
-->