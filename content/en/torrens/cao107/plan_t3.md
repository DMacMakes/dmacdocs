
## Assessments
A1: Threads: sorting in parallel
A2: Accessing OS features: Gui with threads, filesystem vs memory, loading images and sound
A3: Parallel programming with GPU, load balancing: programming Mandelbrot set.

## Weeks macro

| W | **New Topic**  | Class   | **Old Topic**   | Class |
|----|-------------- |-------  |----------------  |------|
| 1 | **Computer abstractions**, hello | PC arch. Build videos and textbook diagrams, forum intros | **Computer abstractions** | Recent history of **high perf computing** |
| 2 | **Parallel processors: Intro threads.** | Lab: quicksort multiple lists | **Memory heirarchy** | lab: matrix math cache opt |
| 3 | **Threading challenges, sync** |lab: sort 1 list multiple threads. | **Parallel processors.** | lab: matrix math threads  | 
| 4 | **OS, Process/thread mgmt** | User vs kernel space, cost threads. Lab: thread pools. | **Threading challenges, sync.** | lab: Thread pool (not taught) matrices |
| 5 | **Gui, multimedia coding** | dear imgui, sdl2 | **GPU Arch and design** | GPU compute sdks |
| 6 | **Input/Output. Pooled loading** |  load and playback graphics, sound, sdl2 | **Gen purp GPU programming** | Code in chosen GPU sdk |
| 7 | **Filesystems?** | Finalising Assess 2, testing thread counts | **Intro to OS** | Visualise/story board intro to OS |
| 8 | **GPU arch and Design** | GPU compute SDKs, download and hello world openCL | **Process management**, scheduler | Research diff process mgmt policies |
| 9 | **GP GPU Programming** | Writing openCL, intro Fractals, mandelbrot. | **Memory management** | Understand paging, virt memory  |
| 10 | **CPU, GPU** | More mandelbrot. Finding both CPU and GPU hardware resources (threads or kernels on cpu, kernels on gpu) | **File Systems** | Work on A3 |
| 11 | **A3 Finalise (due)** | Splitting the work over CPU threads and GPU kernels | **Input/Output** | Work on A3 |
| 12 | **Virtualisation** | Compiling class code on linux image | **Virtual Machine Tech** | Research virt desktop tech | 


## 1 - HELLO, OUTLINE

* **Installs:** - MS Visual Studio 2019. - Nvidia Cuda
* **Introduce** yourself (forum, video hello on Collaborate)
* **Subject** outline
* **Assessments** Super important: Give out 3brown1blue videos on **linear algebra, Matrices** because half of you haven't done the **prerequisite MAT102**. Give these videos out BEFORE  week 
* **HPC** - Intro to recent (90s-now) history of high performance computing. Videos, links.

Stuff HPC, these guys don't know what PCs are. Plus HPC in the old sense is just PCs now. We don't need a supercomputer to talk about threads with 12 core Ryzens under $500.

As transistors have gotten smaller, we're now having to feed in more power for less speed increase.

With speeds being capped around 5 GHZ, many-cored GPUS have been stepping in to move the 3D objects, draw the graphics, apply 2D effects, handle the physics, more and more of the work.

Now CPUs are starting to 

_Homework_
* Watch supplied videos on HPC, memory architecture.
* Watch refresher videos on linear algebra
* If you picked this without doing the prereq MAT102, you have to learn matrices and matrix math.

## 3. THREADS 1 Paralellism.

CODE:
READING:
HOMEWORK:

Revision: Program is a bunch of instructions, in a line, being dealt with by the cpu.

Operating system is in control.
Multitasking (aka multiprogramming): Multiple programs are getting slices of processor time, but it's so fast it feels like they're running uninterrupted.
Multiprocessing: Multiple processors or cores are able to literally do two or more things at once. It can run word on one processor, chrome on another, copy files over the networ on another core.
Multithreading: A single program can be split up into separate tasks, called threads, that can run on separate processors/cores. So instead of just running one program per core, you can split up work for a single program onto multiple cores. With 8 cores/threads you could get your work done in 1/8th time.
NEEDS DIAGRAMS!!!

You're doing all that work on one core. But you have four. You could be going 4 times as fast. WHY AREN'T YOU?

What problems can be split up parallel? Shuffling 1 deck of cards? Not easy. 20 decks of cards, absolutely.
10 women having 10 babies in only 9 months? Yes!
9 women making 1 baby in a month? Not that I'm aware of!

## 4. THREADS 2 Challenges      - A1 DUE
Threads happen deep in the secure bit of the operating system kernel, they're "system" calls. These are slow because going into secure mode involves red tape, it takes time. If we can do things in user space that's better.

Threads are great when they have a core to run on, otherwise they're just sitting around waiting or interrupting another thread, causing caches to get flushed, slowing stuff down. So even if we have 40 jobs, we might only have 4 cores and so only need 4 threads at a time. How do we gain speed?

The same way cityrail avoids buying 1000 trains to cover 1000 runs a day. A fraction of that number can just do multiple runs. You buy a small pool of trains, and when one is done on the penrith to Hornsby run, it can do Hornsby to Penrith, or Hornsby to Sutherland, whatever.

Same with threads. A pool of 4 threads can each finish a task, and when they're done processing some data and a core is free, that same thread can be given new data and put back to work.

## 5. GPU INTRO
## 6. GPU Coding
Not relevant to this assessment, better weeks 8-11?

## 7. OPERATING SYSTEMS         -A2 DUE (only 3 wks?)
Talk to Noman about whether they learned windows gui use, listenening to menus, creating text lists whatever.
How do they display all the images/sounds.

## 8. 


----

## Old 2. Memory heirarchy

As storage gets faster, it gets more expensive.
Caches are just the fastest, closest to the cpu registers.
It wasn't an issue in the 80s and before, but memory access times haven't improved nearly as much as cpu speeds. You can access memory in about 1/300th the time the cpu do something with the numbers in its registers, so you better have 300 things to do while you're waiting for the next bit of memory (spoiler, you don't)
So the best way to run your cpu at full speed and keep it busy is to access L1 cache, but that's only 32KB, the size of a small animated gif. Each line of the cache is a fraction of that.
If you can stay in the cache and not hit slow memory or glacial ssd/hdd, you have a chance to massively boost the speed of your program.
The best way to run fast is have your next couple hundred instructions acting on data that's already in the L1 cache, not needing new stuff from memory. After that it's L2. 
Times to access info:
4 cycles, 20, 40, 300, 10k, 1m+

Programmer then needs to a) know how they can control what's brought into the cache b) know how to avoid accidentally dumping and replacing that delicious cache data and c) build their algorithms to keep that balance always in your favour.

Look at quicksort/binary sort, something you already know how to do. 

Quicksort is pretty good at cache usage, why? Locality, spacial and temporal. Uses data close together in memory (a list of numbers say) and changes them in that same bit of memory without needing to send it elsewhere.

What about several collections of data in a 2D array? What could go wrong? How can we control it?
Row/Column major.
