---
title: "cao107 Assessments"
linkTitle: "Assessments"
weight: 5
description: >
  Assessment dates, briefs, deliverables etc.
---

## Assessment 1

Three coding, observation and analysis tasks (referred to as labs) in which we'll explore the challenges of writing code that executes in parallel.

> We won't be working from the Blackboard brief for this. See the instructions below.

### Lab 1

Complete.

### Lab 2

Download the following zip file, containing the _cinema\_seats_ source code. The task **instructions are** written in comments **at the top of the main.cpp** file. You will need to **read** sections _3.1.1, 3.1.2, 3.2, and 3.2.1_ of _Concurrency In Action_; grab chapter 3 from [the resources page](../resources/).

<a class="btn btn-lg btn-primary mr-3 mb-4" href="cinema_seats.zip" target="_blank">Download Project: cinema_seats<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>

{{< imgcard comments_instructions>}}
The <b>instructions for this task</b> are at the top of main.cpp
{{< /imgcard >}}

**Deliver to:**  
Danny via email (available on Discord or auto completing in outlook).  

**Due before:**  
Attempt to complete it **before work review** (Tuesday's 4pm). Final submission by email due **end of Wednesday**, week 4. 

I won't be giving answers at the work review: it'll be a chance to answer questions you have from _reading the textbook_ and your attempts to collect data. The work review answers won't mean a lot if you haven't done the reading.
  
{{< alert title="What to submit" color= "primary" >}}  

A **zip file** containing:

1. The Visual Studio project folder (NO cache folders, size < 100KB) of your multi-threaded cinema_seats program.
2. Screenshots of anomalies you discover in the threaded version.
3. A plain text (txt) or markdown (md) file with Answers to the questions, including your pseudocode.

<i>If you don't know how to delete the cache files, watch week 3's class recording.</i>
{{< /alert >}}

### Lab 3

Implement the peaceful version of threaded cinema. Use what you learned from chapter 3 and the week 4 lecture.

<!--
Xs and Os, noughts and crosses assessment 4.
What would have been marked as the solid approach?
Everyone went the cheap way with 2 dimensional arrays.
Bare minimum: randoms
Better: Go through a list of win states and see if we can head to one

Tree structures? Heaps?
Sounds like most won't have a solution that scales up.

We need:
Cache line optimisation
Threading

What have they done and understand well enough to apply those?



**A3 part 3:** thread pool may be too brutal, a trap. Mutexes, race conditions. 
Design pattern they would have to understand really well.
Get back to Noman week 4.

# Assessment 1: Labs

Optimising matrix math performance via:
  - memory access / cache hits
  - threading
  - thread pooling
Good: They should have complexity analysis from ADS
Bad: Many don't have the MAT102 for matrices 

Vectors in space 2d. atan2? Swarming. Boids type thing?

Sample, deliberately inefficient algorithm provided. If you don't know the theory it won't mean much. Single letter vars related to formula/complexity analysis etc

### Look at third assessment q2:
Figure out which number of threads per number of sortable elements. When to cap threads? When to start using threads?
Binary min heap, max heap by inserting numbers
Binary search tree, keeping left hand side higher than root node, right side lower.

**3 Deliverables:** Weeks **2, 3, 4.**

-->

# Assessment 2: Multi threaded loader

Load, in parallel, and then display/play multiple images and sounds. Display the time taken to load and display/begin playing the files.

<!-- 
Base given out: windows app with _File_ and _Exit_. _File - Load Image_ and _File - Load Sound_ each open a file browser. Uses Visual Studio gui bits, `rc` resource file.

Windows?
How do you display 100 images and play 100 sound images. IMGUI

Noman: It's about the windows context and callbacks. Not what they're taught.
Did you have to teach windows programming during those weeks 5-7? Yes he did.

From another version of my notes on laptop (oops):
They should leverage the threadpool class from A1. Work with a fixed number of threads, not just create one per file.
User can configure the fixed number of threads, load, and see how long it took. (Can see at what point threads stop helping)

**From Learning Outcomes:**
_Identify how operating systems bring the computer system components together to work cohesively._

**How does this match lectures?**
> * They'll need to add a display area for the timing results.
> * How will they display a bunch of diff images if they don't fit in the space?
> * Playing all the sounds at once will be a noisey mess, play them in sequence. Maybe a list box of some sort can be added to each side.
> * Given they've already used threads in A1, this seems like a windows api/windowing exercise partly. Thus tying in to OS side of things? 
> * Are we using windows api calls for loading or raw c++ file io?
> * Seems like the threads are mostly going to be i/o limited, so it's going to be less about cores and more about things like DMA and buses?

-->

# Assessment 3: Cuda + Cpu threads Mandelbrot

Mandelbrot fractals using the CPU and GPU together.

* Build your program on the base provided, built with imgui and SDL2.

<a class="btn btn-lg btn-primary mr-3 mb-4" href="" target="_blank">Base link will be here.<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>

More info soon. 

<!-- 
Look at GPR202. Also maybe noman slides from weeks 8-11.
Try to give them a base that lets them test it. Show knowledge not so much by writing their own cuda code but instead testing and choosing the write amounts of data to distribute across the right amount of threads. If they can do a good job of picking ranges of numbers to test, and come out with ones that optimize it well, then they're showing enough understanding.

Notes incoming from noman when he looks through ICG and GPR202.

* Cuda example fits all the criteria! Use imgui to compare how it uses 
* Make the subject about how you write guis to explore and measure these system capabilities, not understanding them in and out.
* What matters is showing you can test difference between CPU and GPU, finally how to use both.

Look for available resources: Cpu cores and Cuda hardware on a capable Nvidia Gpu. Create an interactive image of the mandelbrot set using these resources.

Zoom in and out.

Split work appropriately between available resources to maximise speed.

**Qs**
** What windowing/multimedia library? SFML? SDL2?
-->

