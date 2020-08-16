
---
title: "Week 2: The Memory Heirarchy and fast matrices"
linkTitle: "W1: Memory"
weight: "10"
description: >
  Refining our models, UVs.
---

## Memory

Memory is just anything that keeps information in the computer. Programs only care how fast each one is. You also worry about if it holds information after the pc powers off.

How is speed measured?
 - Access time: How long from my first request to the first data received
 - Bandwidth: How much cames in over what time


**_Fastest_ to _slowest_**
Registers
Cache
DRAM (your DDR4 rgb _HyperWolf Ninja King_ ram)
Solid State Drive (ssd)
Hard Disk Drive (spinning rust)
Cloud Drive folder


## Oh look, Matrices

Row, row, row your matrix,  
gently through the cache.

$$ \begin{bmatrix} 
    2  & 8  & 5  \\\\ 
    11 & 1  & 56 \\\\
    34 & 1  & 14 
    \end{bmatrix} $$