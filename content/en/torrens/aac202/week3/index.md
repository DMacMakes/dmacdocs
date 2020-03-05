---
title: "3: Baking In Substance"
linkTitle: "W.3 Substance"
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
  * Game res model vs subdiv
  * UV unwrapping for a good normal map bake
  * Substance import/bake
  * Basic material application

### Download This Project

{{< imgproc joystick_high_low_maya Resize "600x" >}}
Blue is subdiv, pink is game resolution.
{{< /imgproc >}}

I pushed on with the arcade style joystick controller during the week. We'll look through it this week and I'll work on the box section to demonstrate the workflow.

<a class="btn btn-lg btn-primary mr-3 mb-4" href="https://laureateaus-my.sharepoint.com/:u:/g/personal/daniel_mcgillick_laureate_edu_au/ETZ9nYhG-4dKouOgkoFIvDcBiB5P5gzcmCGe1iREAwD-hA?e=oMkiD0">Joystick Project Zip<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>

## Week 2 Deliverables

Previously you submitted your choice of concept to the forum. This week, you submitted a plan and your subdiv and game res models.

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

## Off to substance and Bake

### Export FBX
* Object naming (high, low)
* Freezing scale/rotation
* Exporting subdivs with smoothing automatically applied
* Single material on game res assets
* Tangents and binormals

## Substance

* link coming for recent UI tute

### Import

### Applying a basic material

* Not impressive at first
* One featureless texture all over the object

### Baking

Generate all the high res model data we need.

* normals tangent/world space
* AO
* Color ID/Clown map
* thickness 
* world space normals
* curves etc

## Texturing

Mask by color selection.