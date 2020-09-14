---
title: "10. Environments 2"
linkTitle: "10. Enviro 2"
weight: "100"
description: >
  Turning parts into structures.
---

## Detailing: Fixes/improvements to parts we did

Your progress:

[Week 10 Discussion](https://laureate-au.blackboard.com/webapps/discussionboard/do/message?action=list_messages&course_id=_89547_1&nav=discussion_board_entry&conf_id=_152757_1&forum_id=_866561_1&message_id=_2243100_1)

* Polygon density!
* Style
* Repetition

## Finishing Our Assets

{{< alert title="PSA: Ask Michael" color= "primary" >}}
Each of you will be facing different challenges now and need to go deeper. Since I can't cover it all in class, it's time to spread your wings and start learning what you need to. 

To do that, your primary source should be [this playlist](https://www.youtube.com/playlist?list=PLkzopwqcFevbxxNfZtq1ae09h1dht4S6M) by Michael Pavlovic.

<a href="https://www.youtube.com/playlist?list=PLkzopwqcFevbxxNfZtq1ae09h1dht4S6M"><img src="pavlovic_zbrush_basics.jpg"></a>
{{< /alert >}}


### Modules

Consider how you could break up the larger form into Modules to save time/resources
(drawover)

### Dupe And Flip

 Dupe Subtool: Tool > Subtool > Duplicate 

* Methods for duplication
  
* Mirroring
  * Axis
  * Local symmetry

### Subtools Vs Polygroups Again

Gizmo: duplicating within a subtool

{{< youtube F8O8gq2l4LE >}}

* Splitting to sep subtools, using solo/xray mode (performance upside too)
* Working with many meshes in one subtool
  * Only do this when close to done
  * Make sure your subdivision levels match (example: 5 levels in all meshes)

### Moving Subtools Alone Or Together

Gizmo!

{{< youtube ECzbIVoVHOI >}}

### Modeling for reuse

**Demo**

It's tricky to model pieces that:
* Repeat without being too samey or too different
* Have plenty of style without standing out
* Serve the role of unique piece without being too unique!

## Homework
Build out the asset using the parts you made last week.
Differentiate them without losing your silhouette.
Block in some other bits.

## Making The Other Bits
You've got the main piece sorted. Now add the features and props to give it character. Arrow in the wood? Oysters? Crab?

### Model In Maya, Import

Importing fbx files.
Decimating and exporting to Maya .

{{< youtube "PmymBtiO9tw" >}}

### ZBrush Primitives

Ways to make primitives in ZBrush.
1. Primitives + init + make polymesh3d
4. Intermediate: Using the Gizmo cog.

Creating starting shapes using _primitives_
{{< youtube "wkBo64Ciapc" >}}

Turning a primitive into a usable, sculptable _polymesh3D_
{{< youtube "2cFUMTjGz6I" >}}

### ZBrush Poly Modeling 

Start with a cube (or other _polymesh3D_), use **ZModeler** brush.

1. Start with a 2x2 cube by clicking the button in my UI's right tray.
   * Select the cube it appended to the end of your subtool list
   * Turn on solo: **alt-shift-s**
   * Turn on polyframe: **shift + f**
2. Select the ZModeler Brush: **b, z**
3. Hover over an edge
5. Click and drag on any edge to insert a loop.
4. Hover over an edge
5. Hold `space` to see all edge tools. 

{{< imgcard zmodeler_insert_loop >}}
A whole new wooorld.
{{< /imgcard >}}

Watch this great demo and explanation by Michael Pavlovic. You can 100% learn ZBrush to an industry level from this guy's tutorials.

{{< youtube "UJ1-UfKfzh0" >}}

### Creases And Subdivision

With no subdivisions we can use dynamic subdivisions. This is the same as hitting 3 in Maya.

You can use support edges to make corners, like we did in Maya, but then when you subdivide you'll end up with a lot of density there. In ZBrush you can mostly get there with creases.

1. Create a 2x2 cube.
2. Click **Dynamic** in the right tray, or hit `d`.
3. You can toggle it on and off with `d`, `shift d`. 
4. Try setting _SmoothSubdiv_ to 3, 4, 5 in righ tray.
2. Select _ZModeler_ brush.
3. Hover over an edge and choose _crease_ and _edge loop complete_
4. Set CreaseLvl to 3. Click an edge to crease it. 

{{< imgcard crease_edgeloop >}}
{{< /imgcard >}}

{{< imgcard dynamic_subdivs_creases >}}
Crease level 3 means the crease will only hold till the 3rd subdivide. Afte that it starts to smooth the edge.
{{< /imgcard >}}


### GoZ

Another Maya option where you can go back and forth


