---
title: "ISE102 Assessments"
linkTitle: "Assessments"
weight: 5
description: >
  Assessment dates, briefs, deliverables etc.
---


## Assessment 1: Exam

**Due:** End of week 4

Click for the [Assessment page and PDF brief on Blackboard](https://laureate-au.blackboard.com/webapps/blackboard/content/listContentEditable.jsp?content_id=_8948578_1&course_id=_90315_1)

Testing your understanding of the **ideas in programming**, along with knowledge of C++ **data types**, **operators**, **evaluation** and more. Reading the textbook, testing out _C++_ statements in a coding environment and working through _SoloLearn_ will make all the difference in this one.

### Deliverable

An online, 90 minute exam you will complete **on Blackboard**. The exam will be available to start at any point from Sunday end of week 3 **until Sunday end of week 4**. 

  * The exam will be made available on the Friday of week 8 on the ISE102 _Assessment 2_ page on _Blackboard_.
  * Once started, you have to complete it within **90 minutes**.
  * You can **return** to the exam **during** those 90 minutes if your machine/internet goes down, but **not after**.
  * If a serious technical issue stops you from returning to it, please contact me. 
  * The uni will require a legitimate reason, so make sure that when you sit down you have time to complete it without interruption from family/friends/responsibilities.  

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