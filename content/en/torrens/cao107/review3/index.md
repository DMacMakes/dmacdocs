
---
title: "Review 3: Threads at war"
linkTitle: "Review 3"
weight: "230"
description: >
  Why are threads so unkind?
---

## Lab 2

Lab 2 involved:
1. adding threads to the cinema seats program and seeing what happened.
2. Describing what happened
3. Writing out potential solutions, using what you learned from _Concurrency In Action_, in plain English and then pseudocode.

### What did you see?

What kinds of problems did you see?

### Why did you see it? 

Threads are wild animals who only care about getting their own job done. Knowing that isn't enough though: we need to know in what way that leads to problems.

Battling for resources? Interrupting eachother?

### Simple, similar scenario

Two cooks go into a cold room one after, and on their way out, see there are no artichokes left. 
Cook 1, Yenny, figures 15 artichokes will tide them over. Cook 2, Jorge figures 20 is good. Each places an order an order at the same time, without checking with the other.
Neither thought 35 was a great number, but that's how many they have now. 10 end up going bad in the next week, wasted.



## Your solutions?

What sort of solutions can we implement to the problem? Describe the problem first in the context of sales of a limited resource, and overlapping work by the cashiers. Where are the exact moments it all goes to hell?

If you can't visualise the scenario, start drawing customers and registers on paper, draw seats, make a visualisation! Generals, in the days before computers, didn't plan troop movements solely in their heads, they laid things out on a table so they could _see_ the problem. Multiple things happening in parallel is tricky to solve in any realm, so learn to use any problem solving tools you can.



Temporary hold and release of seats? Waiting for other cashiers to do entire transaction? Waiting for part of the transaction? 

How would that look 
