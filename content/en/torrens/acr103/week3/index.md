---
title: "Week 3: Refining Your Model"
linkTitle: "W.3 Refining"
weight: 30
description: >
  Finding your forms.
---

## DOWNLOAD

[Week 3 Maya demo project: Tweaking a table](week3_table_demo.zip)

## Last week's deliverable

How did we go completing last week's deliverables?
[Assessment 1 Week 2 Deliverables](../assessments/#week-2-submission-details)

### Looking over and reviewing: 
* Images supplied
  * Hitting brief
    * Right images with right maya settings
    * Stayed with blockout stage and minimal details
  * Matching feel of concept
    * Is the silhoutte in proportion to the concept?
    * Are the volumes natural and maybe dynamic, or geometric and static?
    * Is it easily changeable?
* Comments
  * Did you post 2?
  * Do they go deeper than compliments/generalities, and show insight and understanding of the topics we covered last week?
  * How to address that.

## Reducing triangle count

Low poly: think <1000 triangles.

* View the poly stats (heads up display)
* Deleting edge loops. 
* Starting with simpler primitives (8 edges instead of 16 or 32)
* Working with powers of 2
* Collapsing edges
* Target Weld.

## Modifying big shapes, volumes

How can we make the big shapess less computer generated? 
* Zoom out and compare the silhouette

**If you've kept your blockout basic:**
You can probably transform single verts or faces verts and change the silhouette.
You can add edge loops to allow convex and concave shapes.

**Once blockout has more edges and breaks in forms:**
Now moving individual verts or faces becomes less useful for big silhouette changes. We need transforms that **respect existing geometry** and **tools that affect areas**

### Respecting geometry with slide and pivot

Week 2 scene.

1. Look at end of notched table plank (topSlat2). Select it use viewport's isolate button  to hide others.
2. Select 3 parts of edge and bevel.
3. Now how could we make this less parallel? Rotating edges changes volumes (try).
4. With rotate enabled, three edges and rotate with slide (ctrl-shift-drag). Better but still bad pivot
5. Hit d, then drag along the far right bottom edge of bevel. Pivot is now at end point
6. Rotate slide again (ctrl-shift-drag)

Think of other ways to use slide with scale, rotate and translate. Change your pivot point.

### Soft select 

Soft select mode. With table slat in vertex edit mode and one vertex selected:
1. Select translate tool
2. Hit the `b` key to go into soft select mode. Yello means selected, red not, orange is in between.
3. Move around.
4. Undo.
5. _Press and hold_ `b` now and drag your mouse/pen to resize the area of influence.
6. Move it now
7. Undo
8. Holding down the grave/tilda key (`\`` / `~`) next to the `1` key click and drag on a different vertex. Now it's like an instant nudge or smudge tool.

### Lattice deformation

If you started out with a simple plank but now it has lots of detail, Maya (and other tools) can still treat it like that simple box.

Lattice deformers let you modify a simple shape, and that skews, warps and influences your mesh.

## Adding details

Bevels, notches we did those last week with multi cut.

### Cutting one mesh with another

Booleans. Cut a hole out of a table by subtracting a cylinder.

![boolean no ngons](boolean_no_ngons.png)

![booleans](menu_booleans.png)


### Adding in edges after Booleans

Booleans create polygons with a lot of faces (n-gons). We can **clean them up** with:
* First, _edit -> delete by type -> history_
* multi cut, adding edges manually or 
* Use _Mesh -> Cleanup.._ geometry.
* Aftwerwards always _edit -> delete by type -> history_

![](ngons_cleanup.png)
Set it to _Cleanup matching polygons_ and, under _Fix by Tesselation_, target _Faces with more than 4 sides_.

> 'Tesselate' means to add in edges until we have no more ngons or quads, just triangles.

## Combining and separating meshes

Good maya hygiene

Combinging and separating create some nasty history and unwanted groups.
  * Getting out of the group (shift p or middle drag in outliner)
  * Deleting the history then gets rid of the garbage group
  * rename.
  Don't put this off! The scene will corrupt or become too heavy or the modeling tools will become unpredicatble.

  SmartMesh Tools
   - This script offers buttons that automate the combine/separate cleaning, and let you better control the name/pivot outcomes.
   - Learn to download/install it.


## Thin stuff: cloth, straps

Lets make cloth, and straps/bands.

### Plane, extrude

Make a plane, move it to a surface, start extruding.

![](table_chunked_2.png)


### Quad draw

1. Make a surface live
2. Enter Quad draw
3. Draw and delete verts
4. Create faces with shift
5. Delete things with alt
6. Exit quad draw, turn off live surface.
7. Separate new geometry
8. Extrude bits
9. Finally, extrude the cloth (test this along the way with bigger/complex cloth, do and undo)

_remember to regularly edit > delete by type > history_


### Holes in cloth

Very easy, because we did it with cutting chunks. 

1. Draw out cloth
2. Add edges for holes
3. Select and delete faces where the hole goes
4. Extrude cloth.

## Extras

### Clean up the garbage groups

If you've used mirror, separate (shells) or extract faces, you've seen garbage groups in your _Outliner_. They are a butt pain. 

![](fix_groups_example_garbage.png)
The example above is a single metal bracket after I finished a few _mirror_ operations. It has two parents, both pointless extra transform thingies.

![](fix_groups_drag_select.png)
**To fix:**
1. **SAVE YOUR SCENE** just in case, before any big operation. To save incrementally and keep your old version, use _File -> Increment And Save_.
1. Drag in the _viewport_ to **select all the objects** in your prop. 
2. See that **they're hilighted** in the _outliner_ (shown above)
3. **_Unparent_ them all** by either **a)** clicking _**edit->unparent**_ in the menus or **b)** hitting the **shift-p** keyboard shortcut.
4. _File -> **Optimize Scene Size** -> Ok_.

![](fix_groups_optimise.png)

### Working faster with Marking Menus

**In maya we have 'marking' menus**. They're **like 'right click'** menus in other programs, but feature packed enough to deserve their own name.

![](marking_menu_basic.png)
Here's the basic marking menu that shows when you **right click a polygonal object**.

### There are many menus

There are many ways to access many marking menus. Right click, shift right click, hold space, hold w and left click, ctrl-right click, and more.

**The most useful for now:**
* Right click - **component and selection menu**
* Shift right click  - **polygon object or component menus** depending what selection mode you are in.
* Space - **full maya menu**

![](marking_polygon_object.png)
This menu appears when you **shift-right-click** a polygonal object in **object selection mode**;

![](marking_edges.png)
The edge context menu appears when you **shift-right-click** a polygonal object **with edges selected**. There's one for vertices, faces and more.

Explore the marking menus [in the Maya 2019 documentation](https://knowledge.autodesk.com/support/maya/learn-explore/caas/CloudHelp/cloudhelp/2019/ENU/Maya-Basics/files/GUID-8BA1A3AA-4C44-4779-8B22-0AAE3627E8EB-htm.html).

### Gestures
You can drag right past one of those options and it'll select when you release the mouse button. Do it really fast, that's a **gesture**.

**Try:**
1. In one smooth motion, with your mouse over an object, right-click-and-drag straight up. You're in edge mode.
2. Do the same, but down: you're in face mode.
3. Try it again, but to the 1:30 position on a clock, or North East on a compass. That's object mode.

> **Polygonal:** made of polygons. Pronounced **'poh-ligg-onal'**, like 'original' with a hard 'guh' g.