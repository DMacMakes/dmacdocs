---
title: "Week 3: Refining Your Model"
linkTitle: "W.3 Refining"
weight: 30
description: >
  Finding your forms.
---

**----- NEEDS MAYA SCENE FILES INCLUDED -----**

## Assessment 1 continued

Over the week you've worked on your blockouts. Let's detail them.
1. Assess and tweak our blockouts.
2. Add detail
3. Import into first render scene

### Adding in edges after Booleans

Booleans create polygons with a lot of faces (n-gons). We can **clean them up** with:
* multi cut, adding edges manually or 
* Use _Mesh -> Cleanup.._ geometry.

![](ngons_cleanup.png)
Set it to _Cleanup matching polygons_ and, under _Fix by Tesselation_, target _Faces with more than 4 sides_.

> 'Tesselate' means to add in edges until we have no more ngons or quads, just triangles.

### Bevel a vertex

Beveling a vertex is just lopping off a corner:

![](bevel_vertex.png)

You end up with weird **rendering errors** because the new edges have been set to **soft**. It's a shading trick used on cylinders, spheres etc to make them look less faceted.

> Soft edges only render well on big obtuse angles, like 170 degrees.You can't fake a round edge on a 90 degree turn!

![](edge_harden_normals.png)
**We can fix it easily:**
1. Select the edges
2. _Mesh Display -> Harden Edge_


### Go planar, edit, extrude

Sometimes, rather than fussing with so many surfaces (bottom, side, top) it's easier to just:
1. Delete the walls and top
2. Cut away at our base
3. Extrude it back up to the old height
4. Reverse normals if it's black.
_remember to regularly edit > delete by type > history_

![](edit_plane_extrude.png)


## Working faster with Marking Menus

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


## Render Scene

I've created a basic render scene for you guys to work in. It'll help when we start looking at shading/rendering next week.
1. It'll be supplied to you soon.
1. It uses the packaged-with-Maya Arnold renderer.
2. The lighting is a free hdr image from the web (Maxine Roz).
3. You'll be able to import your scene into it, and scale your object up to around the size of mine (for consistent lighting).
4. Hit render to see a pretty picture.

![](render_scene_table.png)

> **Note**: the scene above uses **NVidia** machine learning technology to remove noise from the image. If **you don't have an Nvidia card**, there's another version. You'll be able to remove the noise with your cpu by turning up the 'samples', it'll just take longer.

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

## Fixing garbage groups and history

The object history feature in Maya is powerful, but causes problems and a lot of housework. How to fix?

### Turn it off

The slash and burn approach is to just turn it off completely. I'm trying out working this way at the moment.

![](history_button.png)
That blue button in the menu next to the render icons? **Click it to disable history**.  If you can't see the button, click a vertical divider in that area, see if it expands.

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

### Holes in cloth

Very easy, because we did it with cutting chunks. 

1. Draw out cloth
2. Add edges for holes
3. Select and delete faces where the hole goes
4. Extrude cloth.

_remember to regularly edit > delete by type > history_

_r t r e > dbt > h_

[Arnold sky](https://docs.arnoldrenderer.com/pages/viewpage.action?pageId=40111029)