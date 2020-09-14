---
title: "6: Hard surfaces with subdivs 2"
linkTitle: "6. Hard surf 2"
weight: 60
description: >
  Modelling our chosen props as smooth, very high resolution models, leveraging subdivision surfaces. Creating a game rez version.
resources:
- src: "*mp.*"
  params: 
    byline: "Art: Mary Palmer"
- src: "*jh.*"
  params:
    byline: "Credit: Joseph Harford"
- src: "*fc.*"
  params:
    byline: "Art: Felice Calchi"
- src: "*as.*"
  params:
    byline: "Art: Apratim Sarkar"
- src: "*javier_rodriguez*"
  params:
    byline: "Art: Javier Rodriguez (Artstation)"
- src: "*paul_chambers*"
  params:
    byline: "Art: Paul Chambers (Artstation)"
- src: "*krzysztof-maziarz*"
  params:
    byline: "Art: Krzysztof Maziarz (Artstation)"
- src: "concept_vs_technical_drawing"
  params:
    byline: "Art: Cape Horn Illust. (A), Krzysztof Maziarz (B), Mary Palmer (C)"
---

<!--
W2: 
  - Show examples of magnifying glass, get people to start with the blank and work up to where I was.
  - Or something else modelled in style of inspiration? Show how to create that style, how the bevels and curves and exaggeration work?
  - Should I give out a super rough block out of the scene for scale?
  - Give out a project folder with sub-folders, get people structured and using it from the start.
  - People have been asked how they'd cut up their models iirc, I should show my answers for that. Drawovers.
  - Students start on models.
  - More subD modeling and refining, finishing
  - Looking at problems people have
  - Fixing one or two meshes for people in front of class
  - Get it finalised. Name everything part1_subd, thing_subd.
-->
## Assessment 1

* Review the [updated Assessments page](../assessments/#assessment-1-high-poly-props) (and week1 notes from there)
* Look at our prop choices.

{{< imgcard retro_building_krzysztof-maziarz Link "retro_building_krzysztof-maziarz.jpg">}}
The concept
{{< /imgcard >}}

## Modeling To A Style

To model to a style we need to be able to analyze it first. In acr101 you (probably) looked at how to break down a 2D style into the elements that define it.
  * Use of colour, proportion, line quality
  * tone transitions, detail vs simplification
  * Technical drawing vs dynamic, off-form drawing to add movement and interest.

{{< imgproc static_dynamic_2d_1 Resize "1024x" Link "static_dynamic_2d_1.png" >}}
Environment sketch styles: both lines are dynamic, but one has a flat, static perspective.
{{< /imgproc >}}

Styles can communicate a lot, but one common dichotomy is conveying accurate information about a subject vs conveying the feel/experience of encountering a subject. Compare the concept I've supplied to the more technical drawings below. What do you think Kryzysztof's goal was when he drew the concept art, what might he want to convey to the 3D artist and eventual player?

{{< imgproc concept_vs_technical_drawing Resize "1024x" Link "concept_vs_technical_drawing.png" >}}
Is there more that sets apart image A and B than just perspective? Consider C.
{{< /imgproc >}}

### 3D style elements:

Breaking down 3D style is a similar process, once you define the qualities you'll be looking for
* Use of proportion (realistic, exaggerated, shifting)
* Dynamism: are shapes static and boxy, or dynamic and exciting? Maybe shambolic? Do you see a lot of parallel lines, mechanical looking lines? Or are there more dynamic shapes, with corners meeting at all sorts of angles and lines bending?
* How are transitions between surfaces/planes handled? Are outer corners sharp, or do they have a balooned look? Often it's a mix, and you need to look at a few edges in various situations to decide.

{{< imgproc plane_changes_fc Resize "900x" Link "plane_changes_fc.png" >}}
Look ath the difference between simplified planes of the face (A) and the variety of real transitions they present (B). Finally, how does the artist approach rendering each of these transitions (C) in pencil?
{{< /imgproc >}}

{{< imgproc style_chest_paul_chambers  Resize "600x" Link "style_chest_paul_chambers.png" >}}
Chest. Click to zoom.
{{< /imgproc >}}

{{< imgproc style_pancakes_paul_chambers Resize "600x" Link "style_pancakes_paul_chambers.png" >}}
Pancake breakfast. Click to zoom.
{{< /imgproc >}}

{{< imgproc static_3d_building_3 Resize "600x" Link "static_3d_building_3" >}}
Would Krzysztof sign off on this style?
{{< /imgproc >}}

{{< imgproc dynamic_3d_house_as Resize "600x" Link "dynamic_3d_house_as.png" >}}
How about this?
{{< /imgproc >}}

### Chest drawover demo

{{< imgcard chest_drawover_demo>}}
Drawing over to figure out style, topology.
{{< /imgcard >}}

**Style summary:** 
* Simple volumes 
* Round out and soften those perfectly sharp, computer generated corners.
* Get rid of 90 degree angles and parallel lines as much as possible.

## A1 base scene

I've provided a base scene with a rough block out of our building and the scale of a few props. Hopefully you'll find it's a fair bit easier than working in a big empty space.

There's also a copy of the concept image in the _front_ viewport for easy reference and checking. 
  * Keep in mind this is a 3/4 view so the side to side dimensions won't be perfect.

{{< imgcard a1_prop_base_maya Link "A1_props_base.zip" >}}
Click to download the zip file. Right click and open image in new tab to view full resolution.
{{< /imgproc >}}

{{< alert title="Fitting your prop to your game" color= "secondary" >}}
When you model for games your assets need to fit with everything else. On well organised projects it's handled at a few stages, including in your modeling tool and in-engine

1. **Get your asset in-engine**: place it in one of the game levels in your engine (Unity/Unreal) is a great early and often. The more you check, the better your outcome. Unfortunately for our project:
  * That level has to exist already
  * If you don't update and check it for a while you can get yourself into trouble

2. **Model from a starting scene with other assets**: Early on, like in the assessment, we can start with a common base scene with some assets already complete/blocked in. In the US games companies it's been referred to as an **_asset gym_**.
  * You can start out with **confidence** that you're on track.
  * Helpful for basic **silhouette** style matching - dynamic vs static, proportions etc
  * You can replace items in there as other people in your company complete work, importing ma or fbx files.
{{< /alert >}}

## Modeling demo

Separating out parts
Loops to define boundaries
Loops to support boundaries
Soft and sharp

## Week 2 submission details

Get these done and submitted before next class if you don't want to fail assessment 1!

[Assessment 1 Week 2 Deliverables](../assessments/#week-2-submission-details)


<!--
## OLD CONTENT

## Subdiv Learning

Learning subdiv modeling requires time, **concentration** and **repetition**. There are multiple techniques **specific** to certain types of models/problems.

For that reason, I'll be skimming several videos today, and leaving it to each of you to watch the ones in the order that works for your prop.

{{< alert title="Tip: Work Large To Small" color= "warning" >}}
Always work large to small. You don't know yet how many small details you'll need to get your point across, or how hard they'll be. Get the silhouettes, proportions and corners right first.
{{< /alert >}}

### Fundamentals

Ways to support corners:
{{< youtubetime HPrj4FbVnRM 122 >}}

* Bevels
* Fencing (or support loops)
* Creases
    - Appear to be the holy grail at first, but have real limitations.
 
### Working with cylinders

Some straightforward controlling of volume and end shapes:

{{< youtubetime iyZqmWf5x_c 223 >}}

But how do you add features to one small area without breaking the that perfectly circular cross section:
{{< youtubetime RCSijbeXujs 38 >}}

The first 10 minutes here show us how to break up the mesh without gaps and distortions.
{{< youtube ryPIKJkNzPI >}}

### More Complex

More by Elementza:

{{< youtube 0WZ8zfKOTr0 >}}

### Sharp Things, Hiding Triangles

One to subdivision modeling is that **pointy volumes** are naturally form **pyramids/triangles**: how do we handle those with quads?

{{< youtube "Z9wgKy-F1Rw" >}}

{{< alert title="Disaster: I don't know 3DS Max!" color= "danger" >}}
Relaxing. He's using 3DS Max, but he's using subdivision surfaces and **his solutions apply just as well in Maya**. The video's full of great techniques despite the weird tool names (turbosmooth = Maya's smoothed display, etc).
{{< /alert >}}

Another challenge he helps you manage: **adding details** means adding lots of edge loops. How do we **avoid a loopfest** that makes the model unmanageable and messes up curves?
* If we terminate those edges that'll make a triangle, right? Won't that mess up the surface?
  * First, there are **sneaky ways of shaping quads** 
  * Second, triangles and ngons  create bumpy artefacts on curved surfaces, but **flat surfaces handle bad geometry better**

## Retopology

The game model that receives the details from the subdiv model has different requirements, and we need different topology to suit. The missing detail will return in our normal map.

{{< imgcard topology_zombie_high Link "topology_zombie_high.jpg" >}}
The subdiv (or sculpted) mesh doesn't have perform well on a player's PC, just the artist's.
{{< /imgcard >}}

{{< imgcard topology_zombie_low Link "topology_zombie_low.jpg" >}}
The in-game mesh has to animate well (characters) and support the silhouette/volumes.
{{< /imgcard >}}

..
https://www.youtube.com/watch?v=8OADBBgk7oM
..
{{< alert title="Definition: Topology" color= "primary" >}}
A cylinder is just an idea, it can be constructed lots of ways. The curved surface can have 8 faces, 16, 17, 28, whatever; more faces just make it more precise.
The same can apply to a human head: there are infinite ways triangles can be rearranged to produce, to our eye, the same head.
**The topology of a surface is the collection of points, edges and faces currently used to represent it.**
{{< /alert >}}

### Supporting Baked Details

We need enough geometry to support the silhouette and believable normal map details.

We can 
1. Start with a copy of the model that is being subdivided
  - Delete the support loops
  - Scale loops to look more like the smoothed silhouette
  - Add more geo for curves etc
2. Start with the smoothed version
  - It's too dense to easily clean up
  - We can, though, make it a 'live' surface that geometry sticks to
  - Use that stickiness to draw all our new quads right onto it.

### Quad Draw And Live surfaces

{{< youtube xpDWta5O3n8 >}}
These guys can jibber jabber but they do share great skills.

{{< youtubetime 3L8eZAwmG2E 100 >}}
Danny Mac (I know). Does some head retopo here in 3D Coat, showing nice techniques for sharpening and smoothing the transitions between planes.

## Deliverable This Week

1. Add another post to your Prop Concept thread in the [Module 1 Discussion Forum](https://laureate-au.blackboard.com/webapps/discussionboard/do/forum?action=list_threads&course_id=_83852_1&nav=discussion_board_entry&conf_id=_133461_1&forum_id=_804652_1). Describe your plan of attack for this model.
   * What key modelling will you need for the silhouette while staying under 2000 polygons.
   * Where will the subdivisions help (for smooth clean, mechanical looking shapes).
   * Where do you think you'll need control loops?
   * What do you think can be added in normal maps?
   * It's probably easiest if you draw over and annotate your concept with some planned topology 
2. Continue modelling your prop using the style, ideas and techniques we discuss in class. 
   * Post images of your model
     * Smooth shaded with wireframes and ambient occlusion turned off, from a few angles
     * A shot or two without wireframes.
3. First attempt at the game resolution model.


-->