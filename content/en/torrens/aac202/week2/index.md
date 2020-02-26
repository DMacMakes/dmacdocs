---
title: "Week 2: High Res And Game Rez Modeling"
linkTitle: "W.2 High/Game rez"
weight: 20
description: >
  Modelling our chosen props as smooth, very high resolution models, leveraging subdivision surfaces. Creating a game rez version.
resources:
- src: "barrel_alvaro_vera.jpg"
  params:
    byline: "Art: Alvaro Vera"
- src: "*zombie*"
  params:
    byline: "Art: David Jankes"
- src: "*javier_rodriguez*"
  params:
    byline: "Art: Javier Rodriguez (Artstation)"
- src: "*paul_chambers*"
  params:
    byline: "Art: Paul Chambers (Artstation)"
- src: "*krzysztof-maziarz*"
  params:
    byline: "Art: Krzysztof Maziarz (Artstation)"
---


## Assessment 1

* Review the [updated Assessments page](../assessments/#assessment-1-high-poly-props) (and week1 notes from there)
* Look at our prop choices.

{{< imgcard retro_building_krzysztof-maziarz Link "retro_building_krzysztof-maziarz.jpg">}}
The concept
{{< /imgcard >}}

## Modeling To Match Our Style

We'll need subdivs, but it shouldn't get too technical. The style was chosen so we'd get a long way by focusing on just corners: the smart use of fencing, bevels and maybe some creases.

{{< imgcard style_pancakes_paul_chambers Link "style_pancakes_paul_chambers.png" >}}
Pancake breakfast. Click to zoom.
{{< /imgcard >}}

{{< imgcard klaayas_room_wireframe_javier_rodriguez Link "klaayas_room_wireframe_javier_rodriguez.jpg" >}}
Klayaas Room subdiv wires
{{< /imgcard >}}

{{< imgcard klaayas_room_javier_rodriguez Link "klaayas_room_javier_rodriguez.jpg" >}}
Klayaas Room 
{{< /imgcard >}}




**Style summary:** Simple volumes but without those impossibly sharp, computer generated corners.

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

### Deliverable This Week

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

### Paintovers

Modelling is slow and destructive, not great for quick iterations.

**Screenshots from Orb's artstation, show how he detailed his library assets.**

Painting:  
  1. Take greyscale screenshots
  2. Do a rough linework layer if needed
  3. Paint basic light planes with 3 or 4 tones to create your new form
  4. Refine, try multiple options
  5. Assess what needs maya modelling, what can be done with stamping/normal maps (embossed text, panels)
  5. Implement modelling changes in maya
  6. Next week we'll look at stamping.

**SCREENSHOTS OF STAMPING TOO**

Can also be used to plan things we'll add with stamping.

## Topology Help

It can be very tricky coming up with ways to use only quads, or hide a couple triangles. Help is out there:

* [My Topology Pinterest board](https://www.pinterest.com.au/dmacdraws/topology/)
* [Polycount thread about high res modelling problems](https://polycount.com/discussion/56014/how-the-f-do-i-model-this-reply-for-help-with-specific-shapes-post-attempt-before-asking/p127)  


## UV Maps

We'll need UV maps for painting and baking.

### Review UV unwrap.
Discuss how it's different (if it is) for higher res.

### Extra uv unwrap tips.

Er..