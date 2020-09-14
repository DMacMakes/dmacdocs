---
title: "11. Environments"
linkTitle: "11: Enviro 3"
weight: "110"
description: >
  Polishing our models, rendering for art director review. Submission!
---

### Reviewing week 10 work

I saw people have commented. If you haven't updated your discussion post with your pier/wharf bits all added and polished, do it now!

[Wharf/Pier discussion thread](https://laureate-au.blackboard.com/webapps/discussionboard/do/message?action=list_messages&course_id=_89547_1&nav=discussion_board_entry&conf_id=_152757_1&forum_id=_866562_1&message_id=_2100668_1)

## Homework due next week

After feedback this week:  

{{< alert title="" color= "primary" >}}  
1. Go ahead and **finish+place** your remaining wood/stone elements to wrap up the **main structures**.  

2. Using Maya+GoZ, or directly in ZBrush, create the quad-based geometry for **other items in the scene**: the heat pipes and vent on the side of the wharf, or the lifesaver+mussles+tin can+wavey water of the pier.  

3. Do some **first pass refinement** on them but don't go ham until you have some feedback 👍  
{{< /alert >}}

This homework is basically _recommended progress_, so you'll be ready for next class and on track to finish the  assessment. it isn't a marked deliverable in itself. 

Still I'd like you all to take screenshots and post it to the discussion 🙏

<a class="btn btn-lg btn-primary mr-3 mb-4" href="https://laureate-au.blackboard.com/webapps/discussionboard/do/message?action=list_messages&course_id=_89547_1&nav=discussion_board_entry&conf_id=_152757_1&forum_id=_866563_1&message_id=_2254758_1" target="_blank">Week 11 progress thread<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>

### What we're doing next week

Next week we'll look at how to render them in passes and post-process in photoshop, as you would if presenting to an art director/client for feedback.

## Refining

* Anything that's too repetitive?
* Silhouette too broken up, too organic?
* Last bits of story?


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

