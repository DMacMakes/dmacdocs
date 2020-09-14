---
title: "5. Hard surface modelling with subdivs"
linkTitle: "5. Hard surf 1"
weight: 50
description: >
  High resolution modelling in Maya with Subdivision Surfaces. 
  Links to resources to study at home
resources:
- src: "*krzysztof-maziarz*"
  params:
    byline: "Art: Krzysztof Maziarz (Artstation)"
- src: "*lulemero*"
  params:
    byline: "Art: Lulemero (Instagram)"
- src: "*javier_rodriguez*"
  params:
    byline: "Art: Javier Rodriguez (Artstation)"
- src: "*paul_chambers*"
  params:
    byline: "Art: Paul Chambers (Artstation)"
- src: "*alexander-shevchuk.jpg"
  params:
    byline: "Art: Alexander Shevchuk (Artstation)"
- src: "*lauren-duke.jpg"
  params:
    byline: "Art: Lauren Duke (Artstation)"
- src: "spanner.jpg"
  params:
    byline: "Art: Uncredited"
    
---

NEW CONCEPT WITH objects that better show smooth to sharp etc.
SIMPLE enough to model, retop, and then get to substance.

## AAC202 Overview

Welcome back and hello new people!

* Modern, current-generation 3D graphics.
* Learning Maya, ZBrush, some Substance.
* Immerse yourself in modeling. Practise always, just like drawing.
* Get your hands on a wacom or other drawing tablet! From week 5 we'll be using it every class and for homework.
* Assessments.

## Join the Discord server

Join the Torrens class discord server if you haven't already. Follow the instructions there to receive roles for each subject so you don't miss news/updates.

<a class="btn btn-lg btn-primary mr-3 mb-4" href="https://discord.gg/a87M8dr" target="_blank">Torrens Class Discord Server<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>

### Recap

ACR103: 
  - Low poly modeling
    - Blocking out
    - Detailing
  - Rendering
  - UV unwrapping
  - Hand painted textures

## High detail modeling

This semester we're going to be working towards current-gen assets, with techniques that apply to both cartoony and realistic models.

{{< imgproc klaayas_room_wireframe_javier_rodriguez Resize "600x" Link "klaayas_room_wireframe_javier_rodriguez.jpg">}}
Round vs sharp, countour control!
{{< /imgproc >}}

Last trimester our goal was to make **low surface detail** props, using **hundreds of triangles**. To make up for the lacking geometry, we'd use [diffuse](https://docs.unity3d.com/Manual/shader-NormalDiffuse.html) textures, flat hand-painted images. Something like you see here:

{{< imgproc barrels_low_poly_textured Resize "500x" >}}
Low poly cartoony barrels.
{{< /imgproc >}}

**High detail** meshes can be made many ways and are **defined differently** depending on whether you're making games or film, whether the year's 2005 or 2020 and so on. Then those high poly details are brought into games using some tricks that we'll worry about that later.

{{< imgproc destiny_gun_1 Resize "900x" Link "destiny_gun_1.jpg" >}}
caption
{{< /imgproc >}}

{{% alert title="Why more polygons?" %}}
The end goal of adding polygons is to support **smoothly curving surfaces** and **fine details**.
{{% /alert %}}

More barrels can be found on my [aac202 Pinterest board](https://www.pinterest.com.au/dmacdraws/aac202/).

You could work toward high detail assets using our low poly process but.. on its own it would take a looong time. 

### New methods

ZBrush. We'll be covering weeks 5-12.
Subdivision modeling, which takes a low detail model as input and uses an algorithm to divide up each polygon into several, while smoothing the whole mesh.

## Subdivision surfaces

{{< imgcard subdivision_cube_wikipedia >}}
Subdividing a cube three times - wikpedia
{{< /imgcard >}}

#### Subdivision: 
* Take a square, draw a vertical and horizontal line through the middle. 
* You've subdivided it into 4 squares.

#### Smoothing

Once your mesh is subdivided and has lots more edges and verts, a smoothing algorithm is applied. In it's simplest form, it's kind of averaging out the space between all the vertices on the model, averaging out the area of all the faces, averaging out all the angles. It eventually leads to a sphere.

Imagine you can sew:
* You get some soft, elastic fabric, cut out the shapes of the polygons in your model, and sew them together.
* Fill it with little foam balls (bean bag beans)

{{< imgproc cube_cushion Resize "500x">}}
Cube cushion
{{< /imgproc >}}

Or just imagine your model as a baloon:
{{< imgproc jett_balloon Resize "500x">}}
The Super Wings?
{{< /imgproc >}}

{{< alert title="Further Reading" color= "primary" >}}
Wikipedia: <https://en.wikipedia.org/wiki/Subdivision_surface>
{{< /alert >}}

## Exercise 1: Maya Subdivisions

<!--Open scene with cube and magnifying glass good topo, mag bad topo, in layers, only cube visible.-->
Grab and open this Maya Project (unzip to a folder, set project, open scene):
[week1_subdivs_maya.zip](week1_subdivs_maya.zip)

### Preview Subdivisions

1. Enable wireframe-on-shaded in your viewport
2. With cube selected, try 1, 2, 3 on keyboard.
Maya is applying subdivisions in memory and showing you the result, without changing your model.

### Real subdivisions

1. Duplicate the cube, call it cube_smooth
2. Move it to the right of the original cube so you can see them both.
3. With cube_smooth selected, press 1.
4. Open the mesh smooth dialogue: Mesh->Smooth [] (you have to click the square for the dialogue)

### Magnifying Glass


## Assessment 1: High Detail Props

Choose and create prop for the provided environment.
Particulars on the [AAC202 Assessments page](../assessments/#assessment-1-high-detail-props).

### The Environment Concept 

{{< imgproc retro_building_krzysztof-maziarz Resize "1024x" Link "retro_building_krzysztof-maziarz.jpg" >}}
Cartoony building design with lots of toony props.
{{< /imgproc >}}

{{< imgproc lineworks_krzysztof-maziarz Resize "1024x" Link "lineworks_krzysztof-maziarz.jpg" >}}
Linework for extra object information
{{< /imgproc >}}

### Style Help

Detailed subdivision modelling is way beyond the scope of this subject. Instead, we'll use them to add **charming roundness** and **light catching** chamfers to our props.

To do that in a cohesive way we'll use style reference.

#### Close Up: Paul Chambers

He's an artist who works at SuperCell.

{{< imgproc style_pancakes_paul_chambers Resize "1024x" Link "style_pancakes_paul_chambers.png" >}}
Pancake breakfast. Click to zoom.
{{< /imgproc >}}

{{< imgproc style_chest_paul_chambers Resize "1024x" Link "style_chest_paul_chambers.png" >}}
Chest. Click to zoom.
{{< /imgproc >}}
 
{{< imgproc style_big_breakfast_paul_chambers Resize "1024x" Link "style_big_breakfast_paul_chambers.png" >}}
Big breakfast. Click to zoom.
{{< /imgproc >}}
 
 
#### Zoomed out: Lulemero

Nice rounded softness in this scene gives us an idea of how to approach our modeling.

{{< imgproc klaayas_room_javier_rodriguez Resize "1024x" Link "klaayas_room_javier_rodriguez.jpg">}}
Everything looks sanded off, smooth to touch. Click to zoom.
{{< /imgproc >}}

Here's a scene with a tiny bit less rounding/bevelling, but full and smooth volumes.

{{< imgproc bathroom_lulemero Resize "1024x" Link "bathroom_lulemero.jpg" >}}
Bathroom. Click to zoom.
{{< /imgproc >}}

Look at the chair, pillow and blanket. Imagine the pc and furniture with more rounded off edges, or large soft chamfers.

{{< imgproc bedroom_tech_ninjas Resize "1024x" Link "bedroom_tech_ninjas.jpg" >}}
Bedroom. Click to zoom.
{{< /imgproc >}}

### Method

Here's a wireframe to discuss

{{< imgproc klaayas_room_wireframe_javier_rodriguez Resize "1024x" Link "klaayas_room_wireframe_javier_rodriguez.jpg">}}
Mostly hitting corners. Leaves and cacti use more even geometry. Click to zoom.
{{< /imgproc >}}

### Photo Reference

This week you’re going to grab reference for the other sides of your chosen concept. Back ports of computer? Back of arcade unit etc. fan for aircon?

{{< alert title="Homework Is Critical" color= "danger" >}}
This is a second year course, and the material is too complex to learn in class. The homework you are given is:
1. A part of your assessments
2. To flesh out what you learned in class
2. To build the required base for next week's work.

Each week you'll be working along with me **using things you made and collected for your homework**. I will help people with issues they've had but we won’t be holding back class to finish the homework or to explain at length concepts you didn't learn during the week.

Each week you are expected to put at least 10 hours into this subject, including the 2-3 hours we spend in class. That's at least 7 hours at home.
{{< /alert >}}

## Learning Resources

Flipped Normals how to model curved hard surfaces.
https://www.youtube.com/watch?v=U7HG6XJsKoQ


{{< youtube okaC2_NxPYQ >}}
_Reviewing: Maya Interface tour_

### Subdiv Learning

Learning subdiv modeling requires time, **concentration** and **repetition**. There are multiple techniques **specific** to certain types of models/problems.

For that reason, I'll be skimming several videos today, and leaving it to each of you to watch the ones in the order that works for your prop.

{{< alert title="Tip: Work Large To Small" color= "warning" >}}
Always work large to small. You don't know yet how many small details you'll need to get your point across, or how hard they'll be. Get the silhouettes, proportions and corners right first.
{{< /alert >}}

#### Fundamentals

Ways to support corners:
{{< youtubetime HPrj4FbVnRM 122 >}}

* Bevels
* Fencing (or support loops)
* Creases
    - Appear to be the holy grail at first, but have real limitations.
 
#### Working with cylinders

Some straightforward controlling of volume and end shapes:

{{< youtubetime iyZqmWf5x_c 223 >}}

But how do you add features to one small area without breaking the that perfectly circular cross section:
{{< youtubetime RCSijbeXujs 38 >}}

The first 10 minutes here show us how to break up the mesh without gaps and distortions.
{{< youtube ryPIKJkNzPI >}}

#### More Complex

More by Elementza:

{{< youtube 0WZ8zfKOTr0 >}}

#### Sharp Things, Hiding Triangles

One to subdivision modeling is that **pointy volumes** are naturally form **pyramids/triangles**: how do we handle those with quads?

{{< youtube "Z9wgKy-F1Rw" >}}

{{< alert title="Disaster: I don't know 3DS Max!" color= "danger" >}}
Relaxing. He's using 3DS Max, but he's using subdivision surfaces and **his solutions apply just as well in Maya**. The video's full of great techniques despite the weird tool names (turbosmooth = Maya's smoothed display, etc).
{{< /alert >}}

Another challenge he helps you manage: **adding details** means adding lots of edge loops. How do we **avoid a loopfest** that makes the model unmanageable and messes up curves?
* If we terminate those edges that'll make a triangle, right? Won't that mess up the surface?
  * First, there are **sneaky ways of shaping quads** 
  * Second, triangles and ngons  create bumpy artefacts on curved surfaces, but **flat surfaces handle bad geometry better**

## Summary

This week we
* Learned about high detail modelling using sub division surfaces
* Tried some basic techniques and learned about the challenges
* Covered our first assessment
* Introduced resources you'll need to learn from
* Have homework to do!

## Homework

1. Watch videos provided, take notes about some of the techniques and challenges of subdivision/hard surface modeling that you discover.
2. Consider what techniques you think will solve your problems.
3. Draw over the concept in photoshop/krita to show pieces, and again to show ideas of edges/topology
4. Document your answers in **your own new thread** in the module one forum. [See my post for instructions](https://laureate-au.blackboard.com/webapps/discussionboard/do/message?action=list_messages&course_id=_89547_1&nav=discussion_board_entry&conf_id=_152757_1&forum_id=_866553_1&message_id=_2124709_1).

<!--
## NEW APPROACH

Biggest cross-subject problem right now: assignments are due on a sunday, not 1 week after the class.

W1: 
- Do not teach about the game mesh or painter yet! Introduce once this first idea is rock solid.
- Leave out "high" and "low" poly where possible. Use "unsmoothed" and "smoothed", "subdivided".
- Pic an object from the provided concept in first hour.
- Demo of SubD modeling. Understanding that the subd mesh has two views/states.
- Together we model something step by step
- They start on their model. Forget the whole planning angle, was too confusing. People mixed up all the meshes and though they thought they grocked the normals, it was usually misinterpreted.

W2: 
  - More subD modeling and refining, finishing
  - Looking at problems people have
  - Fixing one or two meshes for people in front of class
  - Get it finalised. Name everything part1_subd, thing_subd.

W3: 
- Describe goal: lets make a game mesh that is as close as possible to our subd in smoothed mode.
- You can start with a new mesh, or with a duplicate of the subd with all the supports removed.
- Call parts part1_game, thing_game.
- Key challenge? How do you model something in the same space as another model (the subd) and compare them?
  - Using layers with R turned on
  - Making objects visible/invisible
  - game res prefers staying inside the high res.
  - approximating smooth curves with minimal geometry (use example both big curves and tight curves)
Our game res model is going to have texture maps generated from the geometry of the smoothed subdiv!
Use always: Freeze modifiers, delete history! Especially important in UV.
- Uv unwrapping game model.
  - Recapping the unwrap process
  - How to set up our normals:
    - In edge mode, uv editor -> select -> select texture borders. Harden edges.
    - Inverse edge selection. Soften edges.
Has to be finishd this week. Post to journal.

W4: 
  - Work together demo: download and open painter demo scene. (maybe download all demo assets start of trimester?)
    - scene has a baked button in it when opened
    - edit -> project configuration, import a diff game meshes
    - Texture Set Settings -> Bake Mesh Maps, select diff subd meshes
    - Hit bake, see results.
    - Explain that the game res  mesh is our true mesh, and the new normal maps we just got are generated from the high res.
      - Diagram showing how it looks in front and behind, then uses angle of surface for x,y,z (r,g,b) values. 1,0,1 for purple.
  - Do it with theirs, debug what's not working.
Open painter sample scene
-->

