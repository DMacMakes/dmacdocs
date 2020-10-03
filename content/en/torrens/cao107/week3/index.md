
---
title: "Week 3: Threads at war"
linkTitle: "3. Threads 2"
weight: "30"
description: >
  Using all the cores!
---

## Weeks 1-4 and assessment 1 update

| W | **Topic**  | Class and assessment  |
|----|-------------- |-------  |
| 1 | **Computer abstractions**, hello | PC arch. Build videos and textbook diagrams, forum intros |
| 2 | **Parallel processors: Intro threads.** | Threads in theory and in C++. Lab: quicksort multiple lists. Graphing. |
| 3 | **Threading challenges, sync** | lab: threads racing for movie tickets? | 
| 4 | **OS, Process/thread mgmt** | User vs kernel space, cost threads. Lab: ? |

<!-- lab: How would you sort 1 list with multiple threads. | -->

## Assessment 1

3 "labs" essentially homework based on problems I provide in class.

1. Threads working together
2. Threads at war
3. ?

### Trimester 3 expectations - parent mode
Being tri 3 there are going to be things you need to have down, and since I haven't been your teacher on recent subjects, let's get through those real quick so you're good with submissions from here!

I'll engage full parent mode now so we aren't doing it for the rest of the trimester on Discord 1 on 1:

* **Talk to your teacher**
* **Sending large files** 
  - learn cloud file sharing now. For regular homework, you'll need it. 
  - For final assessment submissions, I can sort that with the Torrens LFS.
  - Looking at whether you guys can share from laureate accounts (permissions?)
* **Send the right files**
  - Delivering a solution: demo.
* Back up your work. 
  - This is something that is kinda accepted in first tri, but that's about the limit. Losing your work has never, in the history of the human race, been harder.
  - One principle: As you hit milestones where your code is working, BACK UP THAT WHOLE FOLDER, solution and all. Save it to another folder, to a usb drive, to the cloud whatever. Ideally, learn to use Github, it's the industry standard for most programming jobs.
* Attend class. If you can't attend, watch the recordings. Your questions and your assessments eventually reveal what you didn't watch, so.. watch!
* Communicate! Not checking Discord/Blackboard for several days == just not doing the work. If you go to work as a programmer and you don't do any tasks all week because you didn't check the board/email in the morning.. they'll yeet you out a window.

{{< alert title="Hard work is the baseline" color= "primary" >}}
I'm putting in a lot of hours on CAO107. I'll be understanding of people struggling with the material despite having done the reading, watched the videos, looked things up. That's what I'm here for. 

If you're putting in less work than I am though, expect to be pointed back to the material/lectures, and reminded of our chat today.
{{< /alert >}}

## How I did the homework!

Looking at the solution to lab 1.

Optionally, looking at your solutions and answering questions.

Extra learnings!

## Threads are not friends

Threads are wild animals who only care about getting their own job done. If you've ever played sports on a team or waited for preorders of a phone/game, you've experienced this.

{{< imgcard store_rush>}}
Black Friday SSD sale maybe? I remember having to queue for a box copy of WoW.
{{< /imgcard >}}

### Oversubscription

You might think 16 threads on a 2/4/8 core machine is fine. Four at a time, then four at a time, what could go wrong?

Let's look at at my lying drawing of threads being orderly.

Threads aren't doing that though. They all want in right now, and the operating system is all flustered and trying to serve them all at once. 

Load balancing means anyone waiting gets a shot unless they've been deprioritized. We don't have direct control over that without getting very cpu specific, so what can we do? Manage!

### Not our fault

Just like the customers going World War Z on release day, they're not going to be responsible when your store is wrecked and lawsuits come in from people who turned into surfboards. It's their nature. You let them charge through every door you had, you maniac.

**The store manager is in charge of opening those doors** and keeping the store from being wrecked/sued, so they need strategies. Let in x customers at a time, covid style.

### Managing the threads

1. Limit the number of threads.
2. Use them in blocks that equal the number of hardware threads you have access to.

How do we detect hardware?

This is something for you to learn about this week :D

1. How can we limit our threads?

## Project downloads

<a class="btn btn-lg btn-primary mr-3 mb-4" href="cao107_week2_projects.zip" target="_blank">Download cao107_week2_projects.zip<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>

## Homework

Complete lab 2 of assessment 1, _with the help of the reading_.

<a class="btn btn-lg btn-primary mr-3 mb-4" href="../assessments/#lab-2" target="_blank">Go To Lab 2<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>
