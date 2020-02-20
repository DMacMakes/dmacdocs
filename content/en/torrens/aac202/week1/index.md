---
title: "Week 1: High Poly Props"
linkTitle: "W.1 High poly props"
weight: 10
description: >
  High resolution modelling in Maya with Subdivision Surfaces. 
  Links to resources to study at home
resources:
- src: "barrel_alvaro_vera.jpg"
  params:
    byline: "Art: Alvaro Vera"
- src: "*alexander-shevchuk.jpg"
  params:
    byline: "Art: Alexander Shevchuk / Artstation"
- src: "*lauren-duke.jpg"
  params:
    byline: "Art: Lauren Duke / Artstation"
- src: "spanner.jpg"
  params:
    byline: "Art: Uncredited"
    
---

## Welcome Back

{{< imgproc welcome_back Resize "700x" >}}
Good holiday?
{{< /imgproc >}}

## AAC202 Overview

## This week

* 3D Creation pipelines, strategies

1. In Class: 3d asset pipeline activity.
1. Class/Home: design breakdown
1. Assessment progress: Design Sheet

## Assessment 1

Assessment 1 roadmap has a picture of normal mapped (from v high res), pbr textured high res models in a game engine with post processing.  

1. Game prop. week 4 showcase.  
2. 2000 triangles and 1 material, multiple textures per prop (**query**: Need at least albedo, smooth/metalness for PBR, normals for shape)  

* Model props that can go in a level. 
* That we can present in an assessment 3 environment.  

## A2 and A3

2: Character workflow in ZBrush
3: Upgrade some chosen ACR103 levels.

## Planning? 
Planning and then modelling high res object. 

First you need to know what that means in production terms. What is a high poly model?

What tools and techniques are used to make current-gen quality models? What are the tradeoffs at each stage? When do we model poly by poly and when do we cheat? 

## High Poly?

Last trimester our goal was to make **low poly** props, using **hundreds of triangles**. We'd then create and apply [diffuse](https://docs.unity3d.com/Manual/shader-NormalDiffuse.html) textures, something like you see here:

{{< imgproc barrels_low_poly_textured Resize "500x" >}}
Low poly cartoony barrels.
{{< /imgproc >}}

**High poly** meshes can be made many ways and are **defined differently** depending on whether you're making games or film, whether the year's 2005 or 2020 and so on. Then those high poly details are brought into games on **mid poly** meshes! We'll worry about that later.

{{% alert title="Why more polygons?" %}}
The end goal of adding polygons is to support **smoothly curving surfaces** and **fine details**.
{{% /alert %}}

More barrels can be found on my [aac202 Pinterest board](https://www.pinterest.com.au/dmacdraws/aac202/).

## Method 1: Adding Polys And Texturing.

Make lots of polygons, then add stuff into the normal map

{{< imgproc sf_barrel_gameanax_1 Resize "800x" Link "https://www.artstation.com/artwork/NAZg5" >}}
Barrels in space
{{< /imgproc >}}

{{< imgproc sf_barrel_gameanax_2 Resize "800x" Link "https://www.artstation.com/artwork/NAZg5" >}}
Revealing the geometry
{{< /imgproc >}}

You use a bunch of pre made normal map stamps to add surface detail.

{{< imgproc stamp_normal_map_dave_wilson Resize "800x" >}}
Revealing the geometry
{{< /imgproc >}}

[Video tutorial of the above](https://www.youtube.com/watch?v=KTxiKaIzG_c)

## Method 2: Sculpting

You:
1a. Make a barrel with **many millions** of polygons in say, ZBrush.

1b. Make a barrel in Maya and import into, say, ZBrush to add **many millions** of polygons.

2. Trace a model over it that can run in a game engine, maybe 2K-15K polygons.
3. Bake over the high res details to the low ad a normal map.

{{< imgproc barrel_high_lauren-duke Resize "750x" Link "https://www.artstation.com/artwork/QzxBEl">}}
High poly stylised barrel <i>(with normal map)</i>
{{< /imgproc >}}

We all know ZBrush is tasty.. but that's for assessment 2.

## Method 3: Subdivision Surfaces

{{< imgproc maya_subdiv_edge_cgi Resize "640x">}}
Control loops and subdivisions</i>
{{< /imgproc >}}
Need better picture. Link to wacom pen tute, kukri tute.

1. Model in quads, with certain rules.
2. Let the computer multiply the polygons with smoothing, and you can have smooth curves and sharp corners.

You might this thing, with these many polys, then subdivide. That cuts each quad across opposing edges, making it into 4 quads. It's like doubling the size of an image, you end up with 4 times the pixels.

**Needs examples**

You could divide it 2 times, 10 times, this count goes up and things get smoother.

Then you have the option of:
1. Applying the smoothing as real polygons, if the resulting count isn't too high.
2. Creating a very highly divided output (50k+ polys) and then baking the details to a normal map on a mesh that can hold the silhouette pretty well.

{{< imgproc pistol_subdiv_janis_eidins Resize "700x" Link "https://www.artstation.com/artwork/968qv" >}}
Clean subdivision model</i>
{{< /imgproc >}}

{{< imgproc pistol_mapped_janis_eidins Resize "700x" Link "https://www.artstation.com/artwork/968qv">}}
Details projected onto model with maps</i>
{{< /imgproc >}}

**ADD PICTURE OF WIRES** and a link to the 3d viewer on artstation: 
https://www.artstation.com/artwork/968qv

Pros
- You can change long sweeping curves with a single edge move (like a bezier curve)
Cons
- Very laborious, difficult to achieve seemingly simple outcomes.
- It can quickly get very tricky to achieve some forms.

Flipped Normals how to model curved hard surfaces.
https://www.youtube.com/watch?v=U7HG6XJsKoQ

{{% alert title="More info" %}}
Created at **Pixar**<br />
Maya allows you to **preview** the smoothed form without increasing your polygons.<br />
Can be exported to FBX in smoothed, high density form while remaining low density in Maya.
{{% /alert %}}

** More Youtube guides **
<!--  [Maya Interface Tour on YT](https://www.youtube.com/watch?v=okaC2_NxPYQ&list=PLD8E5717592CF5C26&index=10) -->
<!-- {{< youtube okaC2_NxPYQ >}} -->

## Exercise

First, demo of curvey cube.

Next, we make some of it.

## Back to my High res stuff

Blizzard cards

Look dev of motorcycle gal. Later: metal gadget, reference boards.

## Breaking down spanner

{{< imgproc spanner Resize "600x" Link "spanner.png" >}}
What forms of this would be 1. high res  2: game res  3. normals 
{{< /imgproc >}}

### Breakdown
1. Target resolution?
2. What method?
3. What are it's dimensions in the game's reality? 10cm cubed? 10m?
4. Is it on your player's wrist, or will it be 30 feet above your head in dim light?
5. Draw over in photoshop to figure out Topology

{{% alert title="Definition: Topology" %}}
The layout of vertices, edges and faces that you will create to make your model. How will the edges flow? How will you avoid triangles?
{{% /alert %}}

### Setting up
1. Have reference in pureref
2. Set up Maya project
3. Set up grid units in Maya to make sense for object
4. Get a primitive in there right away for scale. Box, cylinder, whatever.
5. Save scene as maya ascii in spanner.001.ma (numbering supports incremental saving)
6. Ensure autosave is turned on in preferences.

### Model some spanner

## Choice Of Prop

Level pictures.