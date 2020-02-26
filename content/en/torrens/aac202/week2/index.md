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
---


## Assessment 1

* Review the [updated Assessments page](../assessments/#assessment-1-high-poly-props) (and week1 notes from there)
* Look at our prop choices.

## Subdiv Learning
Videos in Class

### Working with cylinders

Some straightforward controlling of volume and end shapes:

{{< youtubetime iyZqmWf5x_c 223 >}}

But how do you add features to one small area without breaking the that perfectly circular cross section:
{{< youtubetime RCSijbeXujs 38 >}}

The first 10 minutes here show us how to break up the mesh without gaps and distortions.
https://youtu.be/ryPIKJkNzPI
{{< youtube ryPIKJkNzPI >}}

### More Complex

More by Elementza:

{{< youtube 0WZ8zfKOTr0 >}}

### Sharp Things, Hiding Triangles

One to subdivision modeling is that **pointy volumes** are naturally form **pyramids/triangles**: how do we handle those with quads?

{{< youtube Z9wgKy-F1Rw >}}

{{< alert title="Eh? He's Not Using Maya?" color= "primary" >}}
Though he's using 3DS Max, the model's built with subdivision surfaces and **his solutions are applicable to Maya too**. The video's full of great techniques and the tools are familiar despite different names (turbosmooth = Maya's smoothed display, etc).
{{< /alert >}}

Another challenge he helps you manage: **adding details** means adding lots of edge loops. How do we **avoid a loopfest** that makes the model unmanageable and messes up curves?
* If we terminate those edges that'll make a triangle, right? Won't that mess up the surface?
  * First, there are **sneaky ways of shaping quads** 
  * Second, triangles and ngons  create bumpy artefacts on curved surfaces, but **flat surfaces handle bad geometry better**

## Model Our Prop

## Game Rez Model

### Supporting Baked Details

We need enough geometry to support the silhouette and believable normal map details.

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

## Modeling To Match Our Style

Looking at the style.
Where and how to use those control edges.
Staying simple but removing those impossibly sharp, computer generated corners.

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