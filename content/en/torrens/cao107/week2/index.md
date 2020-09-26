
---
title: "Week 2: Threads 1"
linkTitle: "2. Threads 1"
weight: "20"
description: >
  Using all the cores!
---

## Weeks 1-4 and assessment 1 update

| W | **Topic**  | Class and assessment  |
|----|-------------- |-------  |
| 1 | **Computer abstractions**, hello | PC arch. Build videos and textbook diagrams, forum intros |
| 2 | **Parallel processors: Intro threads.** | Threads in theory and in C++. Lab: quicksort multiple lists. Graphing. |
| 3 | **Threading challenges, sync** | lab: How would you sort 1 list with multiple threads. |
| 4 | **OS, Process/thread mgmt** | User vs kernel space, cost threads. Lab: thread pools. |

## Project downloads

Grab these two quicksort projects, you'll be reading through them today and using one for your assessment.

<a class="btn btn-lg btn-primary mr-3 mb-4" href="cao107_week2_projects.zip" target="_blank">Download cao107_week2_projects.zip<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>

## Class sections
Each concept needs an illuminating picture and a reading point in book.

## Processes
 A program can spawn other **processes**/programs, but they don't share your program's data and you can't easily communicate. Like kids who left the farm back in the days before australia post, they're off doing their own thing now and you're stuck with all the cows to milk.

## Threads

**Threads** are less like human children and more like minions: you can spawn them and give them jobs, and they'll go off to other cores, almost like a real process, but you have some control over them and you can communicate easily.


### EXERCISE Programming threads in c++
Creating, launching and joining back up with our threads.
Threads are basically functions given special treatment so they can run on their own, letting you keep doing what you're doing. 

Create a new visual studio project called _Baby\_threads\_journey_, make sure the solution and project are in the same folder (checkbox in create project window) and type in this code.

{{< imgcard code_baby_threads_1 Link "code_baby_threads_1.png">}}
caption
{{< /imgcard >}}

1. Even though threads let your functions go to another core and run in parallel, they can still see and edit variables and call other functions. Have our **threads call a busywork function** instead of just saying hello._show code for transcription_

1. **Good old Quicksort!** Refresher on QS.

1. **EXPLORE CODE: Timing/benchmarking and simple example**. Sorting one list and timing it. You would have done this in ADS subject for your sort algos._attach code_

2. Note on **new** keyword, explanation of **C arrays**.

1. **Sorting several lists, multi d quick sort**. What if we have several? How long does it take to sort 1? 2? 4? 8? Try it out 

1. Make a **line graph** of the results (y axis: lists count, x axis: overall sort time in milliseconds) using **WEBSITE?** _need website_

## Homework/assessment 1 lab 1.

{{< alert title="The reading" color= "primary" >}}
I've started this section with the exercise so you won't miss it, but make sure you **scroll down to the recommended reading**. There's not too much, and the extra understanding will help a lot with the lab work and understanding what's next.
{{< /alert >}}

## Sorting lists in Parallel

<a class="btn btn-lg btn-primary mr-3 mb-4" href="cao107_week2_projects.zip" target="_blank">Download cao107_week2_projects.zip<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>

### Complete this exercise
1. Make a **duplicate** of the *quicksort_multi_vec* folder in the week 2 example projects. Rename the folder *quicksort_threaded_multi* and work in this solution.
1. A `for` loop currently runs the quicksort function for each list, in sequence. **Run it for 1, 2, 3 and on up to 16 lists, collecting the total times** taken to sort them. 
1. Use the times to **create a line graph,** showing how sort time changes as the number of lists increases.
1. **Change the code** so that instead of calling the function directly, it creates a **new thread** to quicksort each list.
1. Next, call **`join()`** on all these running threads.
1. **Gather the time taken** to sort multiple lists starting at 1, 2, 3 and work your way up to 16, recording the times. Refer to the [threads_baby exercise code](#threads) we typed out in class for the code you need. **Note:** When you make a thread and have pass an argument to the function (quicksort's  vector<int>& numbers argument) you need to wrap it using ref() when making the thread. See [here](https://stackoverflow.com/questions/34078208/passing-object-by-reference-to-stdthread-in-c11) or [here](https://riptutorial.com/cplusplus/example/2329/passing-a-reference-to-a-thread)
1. Alternately, create a loop to do this for you. Keep in mind, you'll need to restore the lists to their randomised order before sort them again: quicksort's worst case is trying to sort a sorted list :D 
1. **Make another line graph** for these times, or add them as a second line on the same graph.

### Answer the questions below:
1. How does the performance of the threaded version of multi-list sort compare to the original version.
2. What CPU does your machine have? How many cores does it have? Does it support hyperthreading (google this for your cpu model if you don't know, or run Speccy on your computer).
3. Compare your graph to the total number of physical cores you have, and if you have hyper threading, the virtual number of cores (physical cores * 2).

Examples of line graphs (with dummy data). I used **Microsoft excel**
{{< imgproc line_graphs_1 Resize "400x" Link "line_graphs_1.png" >}}
Single vs multi core. Can you guess the core count of the cpu? Does it support hyperthreading?
{{< /imgproc >}}

### Submit your work
Zip up the *quicksort_threaded_multi* folder in which you completed the exercise. Upload it to a cloud sharing service like dropbox or your laureate onedrive space. Email the zip file, the line graph images and a text file or doc file of your answers to Danny's email address (available on discord and in announcements).

### Reading
Read more about parallel processing and threads. Don't be put off by the maths, go for the overall ideas.
> **6.1** Intro to Parallel processing  
> **6.2** Difficulty of creating parallel processing programs

{{< imgcard coad_cover Link "https://ebookcentral-proquest-com.ezproxy.laureate.net.au/lib/think/reader.action?docID=5376640&ppg=660">}}
_Computer organization and design_ chapter 6 on ebookcentral. You can download a pdf.
{{< /imgcard >}}

Read more about using threads in c++. Go up to and including 
> **intro and 2.1** Basic thread management.
> **2.1.1** Launching a thread. You can ignore the bits on function objects and lambdas.
> **2.1.2** Waiting for a thread to complete:
{{< imgcard cia_chap2_cover Link "ConcurrencyInAction_Chap2.pdf">}}
_Concurrency In Action:_ Download the chapter 2 pdf.
{{< /imgcard >}}


## Updated course description


<!--
## std::Vectors vs basic C arrays

c arrays are declared in straight line, they're basicly direct access to memory without any help. Dangerous, clunky, but with blistering speed.

You declare an array like this:

```cpp
// Basic c style array to hold the player numbers 
// of 11 soccer players
int playerNumbers[11];

// You can of course use a variable to set array size.
int scoresToKeep = 8;
int bestScores[scoresToKeep];
```
A basic c array is just a place in memory, and a data type, plus a promise that the next x bits of contiguous memory are available for you to use.

{{< alert title="Definition: Contiguous" color= "primary" >}}
Contiguous means all in a row. For arrays, that means that the memory addresses are all sequential: your data won't be scattered around in memory.
{{< /alert >}}

### Locality
Data locality.
Accessing stuff sequentially in memory is fastest, because 1. all the computer has to do is add (1*data size) to the address and read what's there.

Image of memory with integers in it.

{{< alert title="The `new` keyword" color= "primary" >}}
`new` makes sure your new array or other object is declared in a part of your program's allocated memory called "dynamic" or "heap" memory. This can expand and shrink pretty easily.

The "stack" on the other hand, where your regular variables go, can _overflow_ if you put too much on it. That's bad. Thus the "stack overflow" website :D
{{< /alert >}}

-->

<!--<img src="link_warp.gif" width=640 />  
<br />
_Awesome effect or suspicious stalling? Both!_ -->