---
title: "8: Polish"
linkTitle: "W.8 Polish"
weight: 80
description: >
  Working clean: subtools, automasking, base meshes, remeshing.
resources:
- src: "*patri*"
  params:
    byline: "Art: Patri Balanovsky (Artstation)"
---

## Discussing Week 7 Sculpt

What was good? What was tricky?

## New ZBrush Resource Pack

Download the [week3 zip](Zbr_wk3_resources.zip)

## Refining The Sculpt

We're still using a small subset of ZBrush's features, and some areas remain difficult to work with.

* How can I work cleaner with last week's tools?
* What new tools will help?

### Demo Project

Grab [Week8_hand.zip](Week8_hand.zip)

### Masking: Revision

The masking The shortcuts below will be your main way of creating and editing masks in ZBrush.

| Command           | Shortcut                              |
|-----------        |------------                           |
| Activate masking    | `ctrl`                                          | 
| Draw mask on mesh   | `ctrl + left drag (mouse)`                      | 
| Erase mask on mesh  | `ctrl + alt + left drag`                        | 
| Clear mask          | `ctrl + left drag` on canvas                    | 
| Invert mask         | `ctrl + left click` on canvas                   | 
| Blur mask           | `ctrl + left click` on mesh                     | 
| Sharpen mask        | `ctrl + alt + left click` on mesh               | 

There's also a helpful _Masking_ subpalette in the _Tools_ palette, which is on the right side of ZBrush by default.

## Colour

Perfectly visualising the final product before it's painted is hard even for a seasoned sculptor.  Applying colour early can:
* help you better compare your model to the character.
* reveal issues with the eyes and get them solved quicker.
* save on oversculpting, uncertainty and noodling.

Enable colour/polypaint
Fill object
Custom brush DM_FlatHardPaint
Polygons = pixels, so subdivide.
Good materials for polypainting
Hiding/showing the paint job
Eyelids: creasing to keep the eyelid forms. 
  - Crease by angle (crease level 3)

### Exercise: Colour Character Head

If you didn't get it done, borrow [Callum's](Long_head_joe_CA.zip).

## Assessment 2: Character Bust

Jump to the my [assessment page](http://localhost:1313/torrens/aac202/assessments/#assessment-2-high-poly-character).

## Topology

A soccerball is always the same general **_form_**: a sphere. The panels that make up the surface can vary enormously. The layout of these panels is the ball's _**topology**_

{{< imgcard topology_footballs>}}
Some of the many panel layouts.
{{< /imgcard >}}

{{< alert title="Definition: Topology" color= "warning" >}}
The shape, number and layout of polygons that make up the surface of your model.
{{< /alert >}}

{{< imgcard topology_cubes>}}
A cube's topology can vary infinitely while remaining a cube.
{{< /imgcard >}}

### Character Topology

We started with a lower density mesh, made of quads, and the quads flowed fairly well with the forms.

{{< imgcard brice_head>}}
Our starting point, the brice head.
{{< /imgcard >}}

The polygon _density_ was fairly consistent on a lot of the surface, with extra density in areas like the features of the nose, the edges of the eyelids, the ears. We **increased the density** across entire subtools of the mesh by _subdividing_ (ctrl-d).

{{< alert title="Definition: Polygon Density" color= "warning" >}}
The number of polygons making up a given area of a mesh. It can change from location to location on the mesh.
{{< /alert >}}

### Continuity

The Brice head is separated over multiple subtools, so **it's not a continuous mesh**.

## Combining And Polishing

### Merging Subtools

* You've shaped and moved individual subtools
* At some point it becomes more pain than benefit having them separate

**Pro:** You can run a brush along the palm and onto a finger now, making it easier to sculpt the joints.
**Con:** Now you risk messing up nearby fingers while you sculpt.

It's easy to **merge** the subtools:
1. Pick the top subtool
2. In _Tools->Subtools->Merge click _MergeDown_.
3. It'll ask if you're sure. Click yes + don't ask again.
3. Continue merging down.
4. If you enable polyframe (the button next to finger1 and finger2 in the image below) you'll see it on all the parts you've merged.

{{< imgcard 1_hand_subtools Link "1_hand_subtools.jpg">}}
Left: Multiple subtools with polyframe on. Right: After <pre>MergeDown</pre> applied to subtools.
{{< /imgcard >}}

### Topological Automask

Work on a finger without masking or hiding its neighbours.

_Brush->AutoMasking->Topological_. I've also added it to the custom UI.

### Polygroups: Together, Alone

If you don't have polygroups visible, hit `shift-f`.

Auto groups, group visible (custom ui, _Tool->Polygroups_).

In _Brush->AutoMasking_ there's a slider for Mask By Polygroups. 
* Turn it up to 100 and it works just like Mask Topological for our hand subtool.
* It's more powerful because you can have multiple polygroups on a single mesh with unbroken topology.

### Hiding And Showing

Hiding parts of meshes or polygroups makes it a lot easier to work in the spaces between things. If you don't have Polygroups visible, hit `shift+f`.

| Command           | Shortcut                              |
|-----------        |------------                           |
| Activate hiding    | `ctrl-shift`                                     | 
| Hide part of mesh   | `ctrl + left drag (mouse)` a rectangle over it  | 
| Invert hiding       | `ctrl + left drag` on canvas                    | 
| Show all            | `ctrl + left click` on canvas                   | 
| Solo a polygroup    | `ctrl + left click` on mesh                     | 
| Hide a polygroup    | `ctrl + alt + left click` on mesh               | 


## Fusing and Remeshing with Dynamesh


It'll be hard to see, but Brice merges everything with around 0:25. After that, you'll see the seams and cleanup. He's meticulous.
{{< youtube "-ElecAWzP_Y" >}}

### What Did We Just See

Dynamesh completely recreates your model with the same form, as well as it can, with new topology. Your separate meshes are joined where they meet, somewhat like melting wax or plastic together, or welding metals.

{{< imgcard brice_tao_dynamesh Link "brice_tao_dynamesh.jpg">}}
Captured frame where he looks at the new topology. Teeny tiny quads with no apparent flow.
{{< /imgcard >}}

The new topology **has no flow**, but makes up for it with **quite high density** to match the smallforms and folds.

| Command           | Shortcut                              |
|-----------        |------------                           |
| Enable Dynamesh   | Click the _Dynamesh_ button inthe _Tools->Geometry->Dynamesh_ subpalette. |
| Re-Dynamesh       | `ctrl + left drag` on canvas (like clear mask, so be careful) |
| Project           | Button in the _Dynamesh_ subpallette. |
| Change resolution | Slider in _Dynamesh_ subpalette. |

### Easier Dynamesh With Ryan's Tools

| Command           | Shortcut                              |
|-----------        |------------                           |
| Enable Dynamesh   | Click the _Dynamesh_ button inthe _Tools->Geometry->Dynamesh_ subpalette. |
| Re-Dynamesh       | Select a density (1-10) where 1 is coarse and 2 very fine |
