---
title: "Week 1: Low Poly Props"
linkTitle: "W.1 Low Poly Props"
weight: 10
description: >
  Welcome, let's make low poly props.
resources:
- src: "image_of_art.png"
  params:
    byline: "Art: Person Person"
---

## Hello!

**Me:** Danny McGillick. Computer Science @ UTS, Web dev, Creative technologist in advertising (flash/actionscript, unity), 2D and 3D artist for Torus, Halfbrick, Blowfish studios. Keyboard enthusiast, bits maker.

https://cargocollective.com/dmac/ - Flash/Unity 
http://www.artstation.com/dmacdraws/ - game art

**You:** The next makers with long futures.

## This week

* Get into modelling in Maya 2019!
* Won't into the course too much
* Links to resources to study at home

![barrel concept](barrel_simple_solo.jpg)
_We'll model a similar barrel to this, designed by Alvaro Vera_

## What is Maya?

Quick tour.
* Open
* Open a model
  - pic of dagger or chest -
* tumble, pan, zoom.
* Space bar, views
* Workspaces and resetting the worspace if you can't find something.
  
> **Go deeper:** 
>  [Maya Interface Tour on YT](https://www.youtube.com/watch?v=okaC2_NxPYQ&list=PLD8E5717592CF5C26&index=10)

## Our first model

Let's model a very basic table, something like this:

![simple coffee 1](coffee_table_simple_01.jpg)

### Make a table top 
First, we'll make it from primitives. We'll make several boxes, then move and resize them until they look like a table top and legs.

> Primitives are basic 3D prisms. Cube, pyramid, cylinder.

![create cube](table_create_cube.png)
_Create primitives from the toolbar or menus (Create->Polygon Primitives_

### Transforming objects in Maya
Move and scale the table top.

**QWER:**
* **Q:** Select an object with the cursor
* **W:** Display object moving handles
  - [Moving objects lesson YT](https://www.youtube.com/watch?v=1n89UOtMI_Y&list=PLD8E5717592CF5C26&index=7)
* **E:** Display object rotation handles
  - [Rotate Objects lesson YT](https://www.youtube.com/watch?v=BvsN5GzxoHo&list=PLD8E5717592CF5C26&index=8)
* **R:** Display object scaling handles (expand, shrink)
  - [Saling objects lesson YT](https://www.youtube.com/watch?v=Kmuf2M9Nvp0&list=PLD8E5717592CF5C26&index=9)

![cube default](table_move_cube.png)
_The default cube appears in the floor. Move and Scale tools can help_

![four view](table_four_views.png)
_Tap the spacebar while hovering over the 3d view. Multiple views help when modifying a shape_

#### Duplicate an object

1) Select the top, hit ctrl-d to duplicate the box. 
2) Now you can move and scale it to make a leg.
   
![dupe](table_duplicate.png)

#### Mirror objects
Create remaining legs in the right position.

_**Mirror settings 1.**_
* copy
* x axis (left right)
* don't combine

![Duplication](table_mirror_options.png)

_**Mirror settings 2.**_
* copy
* z axis (front back)
* don't combine


![Table done](table_simple_done.png)

> **Go deeper**
> * Add thin top stretchers 
> * Add thick bottom stretchers
> * Make a table using edge loops and extrude (after barrell)

![table go deep](table_go_deeper.png)

---

## Make a Barrell

![barrel solo](barrel_simple_solo.jpg)

### Create cylinder.

Need loops/edges around body.

![edge mode](barrel_maya_edge_select.png)

### Editing edges with scale to create barrel belly.
  - edge mode. Try scaling.
  - undo
  - enable z symmetry
  - scale.
  ![planar scale](barrel_maya_scale_belly.png)

### Creating rings with insert edge loop

  - turn on y (up down) symmetry
  - click Toolkit - Tools - Multi-Cut
  - hover over a vertical edge in upper barrel, hold ctrl.
  - click to cut. Enter to complete tool.
  ![cut](barrel_maya_multi-cut.png)
  
### Extruding rings

![face loop](barrel_maya_loop_faces.png)

1. Enter face mode
2. Select face loop. Click first face, shift-double-click adjacent. 
3. Extrude.

### Adding top and base indent

1. Select top of barrel. 
2. Inset with extrude tool.
3. Now extrude inwards.
![top](barrel_maya_top.png)
![basic](barrel_maya_done.png)

> **Go deeper**
>- Tilted lid
>- Round or Square plug
>- Ring made from another cylinder primitive.
>- Toonify by making edges less regular/symmetrical

![toon](barrel_maya_toon.png)

![barrels](barrels_simple.jpg)

## Homework

Model more things this week! If you want to be a 3D modeller and you just made two whole objects in class, you'll be keen now to go home and create **at least 2 more**.

![Home 1](home_concepts_1.jpg)
![Home 1](home_concepts_2.png)
![Home 1](home_concepts_3.png)
![Home 1](home_concepts_4.jpg)