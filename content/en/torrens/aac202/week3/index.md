---
title: "3: Game Res and Exporting"
linkTitle: "W.3 Substance Prep"
weight: 30
description: >
  Preparing models for substance, baking maps to feed into the texturing process.
resources:
- src: "barrel_alvaro_vera.jpg"
  params:
    byline: "Art: Alvaro Vera"
---

## Overview

* Talking [week 2](../week2/#deliverable-this-week) homework
* Tips for modeling Challenges
* Learning how to go from modeling to baking and texturing
  * Looking through joystick files
  * Game res model vs subd
  * UV unwrapping for a good normal map bake
  * Substance import/bake
  * Basic material application

### Download This Project

{{< imgproc joystick_high_low_maya Resize "600x" >}}
Blue is subd, pink is game resolution.
{{< /imgproc >}}

I pushed on with the arcade style joystick controller during the week. We'll look through it this week and I'll work on the box section to demonstrate the workflow.

<a class="btn btn-lg btn-primary mr-3 mb-4" href="https://laureateaus-my.sharepoint.com/:u:/g/personal/daniel_mcgillick_laureate_edu_au/ETZ9nYhG-4dKouOgkoFIvDcBiB5P5gzcmCGe1iREAwD-hA?e=oMkiD0">Joystick Project Zip<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>

## Week 2 Deliverables

Previously you submitted your choice of concept to the forum. This week, you submitted a plan and your subd and game res models.

[week 2](../week2/#deliverable-this-week)

Let's have a look at the forum.

### Modeling Challenges We Encountered

Modeling is something that'll always present challenges, and you'll be forever improving.

### Topology Help

How do we stick to quads? We constantly reach areas that would be solved with a quick triangle. 
* How do other people handle these problems?
* Can we hide triangles? Ngons? 

Tens of thousands of artists have been out there there modeling every day for decades, lean on them:
* [My Topology Pinterest board](https://www.pinterest.com.au/dmacdraws/topology/)
* [Polycount thread about high res modelling problems](https://polycount.com/discussion/56014/how-the-f-do-i-model-this-reply-for-help-with-specific-shapes-post-attempt-before-asking/p127)  
* Google, Youtube, Gumroad!
  
#### Paintovers

Modelling is slow and destructive, not great for quick iterations.

Painting:  
  1. Take greyscale screenshots
  2. Do a rough linework layer if needed
  3. Paint basic light planes with 3 or 4 tones to create your new form
  4. Refine, try multiple options
  5. Assess what needs maya modelling, what can be done with stamping/normal maps (embossed text, panels)
  5. Implement modelling changes in maya

{{< imgcard commander_draw_over Link "commander_draw_over.png">}}
For the first pass a draw-over might be more in your comfort zone.
{{< /imgcard >}}

## How it all works

We create two sets of meshes in Maya, then take them to painter. One set survive as the game meshes, the others (subds) are just used to generate normal maps.

### Meshes in Maya

We create **two kinds** of meshes inside Maya. 
1. The **subd** meshes (button and trim) are in **blue**. 
2. The **pink** button and trim are **two new meshes**, which will go in the game.

**Note**: The same blue button and trim (outer ring) meshes **appear twice** in the next image: normal view and smooth preview.

{{< imgcard a_button_and_trim_meshes_all Link "a_button_and_trim_meshes_all.png">}}
Smoothed and unsmoothed views of the subd meshes (button and trim) and one view of the game meshes (button and trim)
{{< /imgcard >}}

1. **Subd meshes**
   * `a_button_trim_subd` and `a_button_subd`
   * We view them in normal mode (press `1`) and smoothed mode `3`. 
   * To **control** how it looks when smoothed, we **add** loops and edges to it.
   * It has more geometry than we need in the game, even when viewed in normal view, because of the extra loops and edges.
   * We try to stick to **quads** (rectangles) that **flow** around the model.
   * When _Maya_ **exports** this mesh it **subdivides** it several times, creating a very large number polygons.
   * These only exist to be **analysed and discarded** by _Substance Painter_ in the creation of normal maps, which will be applied to the game mesh.
2. **Game meshes**. 
   * `a_button_trim_game` and `a_button_game`
   * These are never smoothed
   * They have a similar silhouette to the smooth-view subd meshes
   * They have **fewer polygons** than their equivalent subd mesh (even unsmoothed). This **improves frame rate**.
   * Triangles are no problem
   * They will go in the game and use a normal map.

{{% alert title="Disambiguation: button and trim " color= "primary" %}}
The button and trim are two meshes used to create a whole button unit. Each has a subd variant and a game variant.

<img src="a_button_game_meshes.png" width="250" />

`a_button_game` and `a_button_trim_game` meshes shown separately.
{{% /alert %}}

### Meshes In Painter

We create a new project with the game meshes `a_button_game` and `a_button_trim_game` (the ring around the button), then bake normal maps for them by analysing and discarding the subd meshes.

{{< imgcard button_a_game_meshes_painter Link "button_a_game_meshes_painter.png">}}
Four views of the same two meshes in Painter, <code>a_button_game</code> and <code>a_button_trim_game</code>
{{< /imgcard >}}

{{< imgproc button_a_in_normals Resize "400x" Link "button_a_in_normals.png">}}
Here are some snippets of the normal map representing the button
{{< /imgproc >}}


## UV Mapping

We did a fair bit of this in ACR103:

1. Create starting UVs with Camera Projection
2. Select edges to create seams, delineate UV islands
3. Unfold (automated)
4. View checkerboard texture and uv distortion info to assess results
5. Repeat steps 2 through 4 to remove as much distortion in checkers as possible
6. Layout/Arrange islands to reduce wasted texture (part automated, part manual)

### Hard And Soft Edges For Normal Mapping

{{< imgcard texture_borders_hardened Link "texture_borders_hardened.png">}}
Soft inner edges, hard texture border edges.
{{< /imgcard >}}

{{< alert title="Definitions" color= "warning" >}}
<i><b>Texture Border:</b></i> Any edge of the model that has a uv cut/seam. The edges of uv shells/islands.
<i><b>UV Shell/Island:</b></i> Polygons fully separated from others by UV cut/seam. They'll remain together when unfolded in the UV editor.
{{< /alert >}}

## Exporting For Substance

### Export FBX

Before you export:
* Single material on game res assets
* Freeze scale and rotation on all models
* Select all _subd meshes and press 3 for smooth preview
* Two versions of each mesh: one ending in _subd, the other in _game

{{< imgcard mesh_naming_outliner Link "mesh_naming_outliner.png" >}}
Identical names with different suffixes
{{< /imgcard >}}

* export all subd meshes together
* export game meshes together

{{< imgcard maya_export_fbx_subd_painter Link "maya_export_fbx_subd_painter.png" >}}
Naming the two files: identical except for the <code>_subd</code> and <code>_game</code> suffixes. Note file sizes difference.
{{< /imgcard >}}

* Exporting subds with smoothing automatically applied
* Tangents and binormals
{{< imgcard maya_export_fbx_settings Link "maya_export_fbx_settings.png" >}}
These settings are for both subd meshes export and game meshes export.
{{< /imgcard >}}


