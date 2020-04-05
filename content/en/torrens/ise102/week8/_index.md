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

What files are needed for delivery? What can I delete?

Testing for user flow and clarity


## Delivering Your Assessment Files

{{< alert title="Where Is My Project Folder?" color= "primary" >}}
With your project open in Visual studio:
  * Tight click the project in the _solution explorer_
  * Click _Open folder in file explorer_. 
  * You'll see several files there, including your `main.cpp`.
{{< /alert >}}

### Cleaning up cache stuff
Your folder can be several hundred MB in size. The files you actually need are about 30-50KB in size.

In your solution/project folder (same thing for us) you can **delete all** of these folders:
* _.vs_ 
    * visual studio will probably have to be closed for this one
    * If you can't see it, turn on "hidden items" in Windows explorer's _view_ ribbon.
* _debug_
* _release_
* _x86_
* _x64_

{{< imgcard folder_cleaning>}}
Delete the folders.
{{< /imgcard >}}

### Zipping up the whole project

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


## Intro to Objects
  * Learning and adding functions, vs spoon feeding answers. We can do that now!
  * Cin functions
  * Catching alpha numeric input (in demo code, not spoon feeding)
  * String object functions


  - 


