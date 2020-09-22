---
title: "1: Outline, Computer Architecture"
linkTitle: "W1: Outline, PCs"
weight: "10"
description: >
  What is CAO107? Recent history of high end computing.
---

## Hellos

## You guys, and things you've done

Maths 101, Algorithms and data structures, ise102 (C++).
- Welcome back if you're my ise102 peoples

### Me, what I've done

Most of you I've had classes with before, but for those who haven't, I'm Danny. I like keyboards, character art, dogs and rockclimbing. I played a lot of games in the 90s and 20teens. 

Coder and artist in industry:
- Coded a lot of interactive work for brands: experience websites, interactive posters, games in banner ads
  - Augmented reality, webcam motion sensing, 3d engines in flash, old school 2d driving games, interactive video, wayfinding etc
  - Nissan, Sony, eBay, New Line Cinema, Roadshow, St.George etc
- Systems guy
  - Building/maintaining/networking high performance computing (HPC) systems for film/tv effects and editingin early 2000s: SGI, Mac, PC. Demoing and training Houdini, Avid products.
- Prop art and then character art for 2D and 3D games.
  - Photoshop, Maya, Zbrush, Substance Painter. High res, low res, pixel art.

Computer Scientist:
- B Computing Science UTS

Teaching:
  - Last few years here at Torrens.

## Blackboard

* 1 module per week
  - Modules contain slides, code, **requirements for reading and viewing** each week
* Assessment briefs and submission
  - 3 assessments, **week 4, week 7, week 11**
* Discussion forums
  - Places we'll post intros, some exercise results

<a class="btn btn-lg btn-primary mr-3 mb-4" href="https://laureate-au.blackboard.com/webapps/blackboard/content/listContentEditable.jsp?content_id=_9219104_1&course_id=_94382_1" target="_blank">CAO107 on Blackboard<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>

## Discord

<a class="btn btn-lg btn-primary mr-3 mb-4" href="https://discord.gg/a87M8dr" target="_blank">Torrens Class Discord Server<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>

## What will we learn?
How to write very high performance code that will make the most of the computer power you have available.  This won't have a lot to do with understanding C++ better, though that'll be needed too. We'll learn more about how the hardware itself works, what's super slow (by electronic standards), and basically what exploits we need to know to outperform other programmers' code.

### Hello: written introductions

<a class="btn btn-lg btn-primary mr-3 mb-4" href="https://laureate-au.blackboard.com/webapps/discussionboard/do/message?action=list_messages&course_id=_94382_1&nav=discussion_board_entry&conf_id=_170938_1&forum_id=_901594_1&message_id=_2315366_1" target="_blank">Discussion: Introduce Yourself<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>


### Programming is like race driving

Do you think a world class F1 driver for team Ferrari can get in his competitor's McClaren F1 and get close to his lap times?

{{< imgproc f1_renault Resize "1024x" Link "f1_renault.jpg" >}}
Cutaway of a Renault F1 from 1993
{{< /imgproc >}}

Can an olympic gold medal archer beat the bronze medal winner if she uses her competitor's bow? Even just her arrows?

{{< imgproc archer_1 Resize "1024x" Link "archer_1.jpg" >}}
Olympic level bow with doohickeys and whatnots.
{{< /imgproc >}}

**Spoiler:** No.

In those sports it's maybe half knowledge and craft, and the other half is intimately tying into and growing with your equipment.



<!--
 
Programming is a game. 

Think of programming as a game. Writing code is like inputting keypresses, mouse movements, d-pad and analogue stick movements. The hardware you're running on, whether it's PS4 or iOS or an intel PC, is like the game engine. You can only get so far practising the game based on what it gives you: you have to research way the game's been implemented to get to top tier.

Any extra info you can get about what's under the hood can be used to give yourself an advantage. In Ultra SF4 it was knowing the frame data of each individual attack, the hitboxes and hurt boxes, the order the input buffer handled things when you pressed 3 buttons at once. In Overwatch, you want to know the damage per second once reload times are included, the headshot multipliers, how armour decreases damage from beam weapons (tip: heavily because they are a sequence of small hits) vs how armour impacts single or spread projectile weapons. Then there's the nitty gritty of what animations you can or can't cancel to land combos, what the real head hitbox sizes are vs the models etc.
-->
### Specifically, what will we learn?

Speeding up programs by exploiting:
* the fastest bits of the memory heirarchy, 
* all the cores in our cpu
* the extra compute hardware in our gpu

Multiprogramming vs multiprocessing, caches, cores, threads.

**You'll be better at buying computer hardware for performance when we're done.**

## Classes and recordings
The goal will be to split up the new learning and the homework/assessment progress into separate blocks so we don't all die in 3 hour marathon classes.

Review/homework/assessment session will be on a Tuesday, we'll discuss the time. It'll be less structured, mostly around Q and A and coding. You'll benefit massively from coming, but you can also catch it on the recording.

I also expect everyone to attend the class streams. Almost none of us have the discipline to balance all this stuff at home and not skim things here and there, and the blocked out class each week gives you something concrete to organise your time around and is one less thing to stress about putting off/catching up on.

### Bosses will always boss
If you work, it's time to lean on your boss about getting 3 hours off to make the most of your cash investment! They'll always need more staff and more work from you than you can give, don't feel guilty. We're lucky, we have 3 years once in our life to push towards what WE want to do. Trust me, you'll still have a good 45 years of 5 day weeks to give to bosses who love the idea of your learning but just can't spare you on Thursdays :D

If you absolutely can't make it, the sessions will be recorded.


## What are computers?

A lot of things.

### What are PCs

Personal computers.

What's generally in the sort of PC we'll be programming?

Videos.

## The 3 assessments, briefly.

Taken from the [CAO107 Assessments page on Blackboard](https://laureate-au.blackboard.com/webapps/blackboard/content/listContentEditable.jsp?content_id=_7966071_1&course_id=_76813_1&mode=reset).

{{< imgcard assessments_all Link "assessments_all.png" >}}
All three assessments and their delivery weeks
{{< /imgcard >}}  

### Assessment 1: Programming labs

I'll refer to assessments as A1, A2 for brevity, or by their content: labs, multi threaded app, gpu app. 

A1 is a series of programming labs, done partly in class and at home. We'll take things you know how to do algorithmically, and make them run faster by knowing our PCs.
<a class="btn btn-lg btn-primary mr-3 mb-4" href="https://laureate-au.blackboard.com/webapps/blackboard/content/listContentEditable.jsp?content_id=_7966097_1&course_id=_76813_1" target="_blank">A1 on Blackboard<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>

{{< alert title="Mat102 Condundrum" color= "secondary" >}}
I'll be altering the 3 programming labs for this assessment to focus on sort and other algorithms. **Why?**

The labs aren't _about_ matrix math itself, but are built around the algorithms for them.
Matrix math is taught in _Mat102_, and looking through our class, well.. about half of us got loose and chose _cao107_ before the prereq _Mat102_. 

To make sure you guys get to learn the ideas and survive the subject, I'm reworking the material. Be careful not to grab the brief from Blackboard and push on or you'll a) freak out or b) waste a lot of effort in the wrong direction.
{{< /alert >}}

### Assessment 2: GUIs and load balancing

You know the basics of optimising your code for your hardware. There are a lot of moving parts though, and we can't just math and formula our way through it.

You'll build (on a base provided by your lecturer) a program that loads multiple sound and image files at once and starts playing/showing them in sequence. The key will be exposing some speed boosting/load balancing parameters to the user, then measuring and revealing performance (benchmarking) so they can tune the load times.

### Assessment 3: Fractals, the GPU, balancing.

Graphics and games use a lot of maths: picture trig class at school, figuring out coordinates in space and angles all day. Physics formulas in science class for bouncing balls etc. That's what it's doing half the time. So you won't be surprised to hear the GPU, under the hood, is basically like another CPU that does certain kinds of maths a lot faster. 

You probably will be surprised to hear you can use the gpu to run your own algorithms, not just send it 3D game graphics. We'll be using the cpu and gpu to calculate a weird set of math functions that create an infinite dive into surreal patterns known as Fractals.

{{< youtube PD2XgQOyCCk >}}

_This 1080p zoom took 4 weeks of calculation back in 2013_


## Homework

1. **Introduce yourself on the discussion forum if you didn't in class.** _(If you have to log in after you click, it won't take you straight to the discussion: try clicking the link again.)_

<a class="btn btn-lg btn-primary mr-3 mb-4" href="https://laureate-au.blackboard.com/webapps/discussionboard/do/message?action=list_messages&course_id=_94382_1&nav=discussion_board_entry&conf_id=_170938_1&forum_id=_901594_1&message_id=_2315366_1" target="_blank">Discussion: Introduce Yourself<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>

2. **Watch the videos below:**  

### SORTING

Revise sorting and Big O notation with visual help. Watch up to 7:15.  

{{< youtube rL8X2mlNHPM >}}
*more bookmarks: 39 Selection Sort (_n_^2). 4:29 Merge sort O(_n_ log _n_)*

{{< alert title="Too fast?" color= "secondary" >}}
These videos pack a lot into a short time, and she talks fast. **Slow down playback to 0.75x** if it helps!  

<img src ="youtube_speed.png" width=250 />>
{{< /alert >}}



### MULTITASKING 1

Jump to timestamp **3:14** to see how an old-timey supercomputer first did multiple jobs at once.

{{< youtube 26QPDBe-NB8 >}} 

## MULTITASKING 2 WITH JELLY BABIES

How a computer with a single CPU makes it look like multiple programs are running at once; switching super quickly between programs. **Demonstrated with jelly babies.**

{{< alert title="Words you might need" color= "primary" >}}
**Process:** A program, like word or spotify or battlefield.
**OS:** Operating system like windows or macos.
**waiting:** Our program has hit a line in its code that is taking time, and it can't get to next line. Maybe it's sent a message to your email server, for example, and it can't say "message sent" on screen until the server confirms the email was sent.
{{< /alert >}}

{{< youtube MB0yDMQj1lU >}}

## Extra learning

### MULTIWHAT?

Your computer does a lot at once but only has a single processor. How? You've heard about multitasking, multiprocessing and maybe multithreading. What do they all mean? Let Gary explain.

{{< youtube Tn0u-IIBmtc >}}
1:12 Multitasking - computer has different programs working at the same time.

{{< youtube "7ENFeb-J75k" >}}
Multithreading

### Want more Crash Course Computer Science? Here's the playlist.

https://www.youtube.com/playlist?list=PL8dPuuaLjXtNlUrzyH5r6jN9ulIgZBpdo

<!-- ## Mathjax test of Matrices

Can I haz matrix?
Row, row, row your matrix.
$$ \begin{bmatrix} 
    2  & 8  & 5  \\\\ 
    11 & 1  & 56 \\\\
    34 & 1  & 14 
    \end{bmatrix} $$

-->