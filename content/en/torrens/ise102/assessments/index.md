---
title: "ISE102 Assessments"
linkTitle: "Assessments"
weight: 5
description: >
  Assessment dates, briefs, deliverables etc.
---


## Assessment 1: Exam

**Due:** End of week 4

Click for the [Assessment page and PDF brief on Blackboard](https://laureate-au.blackboard.com/webapps/blackboard/content/listContentEditable.jsp?course_id=_90315_1&content_id=_8948578_1&mode=reset)

Testing your understanding of the **ideas in programming**, along with knowledge of C++ **data types**, **operators**, **evaluation** and more. 

### Deliverable

An online exam you will complete **on Blackboard**. The exam will be available to start at any point from Friday of week 4 **until Sunday end of week 4**. 

* Once started, you have to complete it the time specified.
* You can **return** to the exam **during** that time if your machine/internet goes down, but **not after**.
* If a serious technical issue stops you from returning to it, please contact me. 
    * The uni will require a legitimate reason, so make sure that when you sit down you have time to complete it without interruption from family/friends/responsibilities.  

{{< alert title="Preparation" color= "secondary" >}}
You will need to have 
1. Attended and/or watch recordings of **ALL of EVERY class**, and worked through the **exercises and homework**
1. Carefully read and understood the **first two chapters of the textbook** (available on the resources page)
1. Work through sololearn.
1. Reading and quizzes won't get you far on their own: for these principles to stick you need to have written, **tested and experimented/played with code** from the textbook and the weekly lectures. 

Coding is like any other craft or science: if you don't practise, if you don't break it apart and put it back together, if you don't switch it around to see what happens, you won't learn it.

**#1 tip:** If you think you really understood the example you typed out and toyed with, close the project, create a new one and **rewrite it from memory.** If you don't get anything wrong first go, it's not a hard enough exercise!
{{< /alert >}}

## Assessment 2: Slot Machine
**Due:** End of week 8

We'll make a text based slot machine using the `ise102_console` template. A _prompt and response_ game loop.

[Slot Machine Brief](https://laureate-au.blackboard.com/bbcswebdav/pid-8547440-dt-content-rid-36256223_1/xid-36256223_1)

### Deliverable 

You'll deliver a zip file containing your Visual Studio solution. Work through the steps shown in the video carefully: if your submission is bloated, missing important files or misnamed it will cost marks.

{{< youtube H44emolQCz4 >}}

{{< alert title="Where Is My Project Folder?" color= "primary" >}}
With your project open in Visual studio:
  * Tight click the project in the _solution explorer_
  * Click _Open folder in file explorer_. 
  * You'll see several files there, including your `main.cpp`.
{{< /alert >}}

### What You Should Delete
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


## Assessment 3: Realtime Game

Playing at a constant frame rate and reacting to input.

### Deliverable

Your **entire** Visual Studio solution must be zipped and submitted on Blackboard.

## Delivering Code Assessments

Coming shortly:

* Locating your solution on disk.
* How to delete those large cache directories. (wth: 200MB slot machine??)
* Naming your zip file.
* How not to stuff up your solution (don't rename or move things!)