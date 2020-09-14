---
title: "cao107 Assessments"
linkTitle: "Assessments"
weight: 5
description: >
  Assessment dates, briefs, deliverables etc.
---

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

# Assessment 2: Multi threaded loader

Load, in parallel, and then display/play multiple images and sounds. Display the time taken to load and display/begin playing the files.

Base given out: windows app with _File_ and _Exit_. _File - Load Image_ and _File - Load Sound_ each open a file browser. Uses Visual Studio gui bits, `rc` resource file.

Windows?
How do you display 100 images and play 100 sound images. IMGUI

Noman: It's about the windows context and callbacks. Not what they're taught.
Did you have to teach windows programming during those weeks 5-7? Yes he did.


# Assessment 3: Cuda + Cpu threads Mandelbrot

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

