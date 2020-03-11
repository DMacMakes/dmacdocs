---
title: "W.4: Bake, Texture, Present"
linkTitle: "W.4 Present"
weight: 40
description: >
  Turning 3D art into playable game assets means exporting to a real time **game engine**. Today we'll learn how to move our models from Maya and Painter into Unreal/Unity. From there you can light and screenshot them for your **final deliverables** of Assessment 1.
---

## Productive Class Time

 
We're here learning to do something extremely hard, in week 4 of a second year subject. The amount of knowledge and ability you need to have any chance in game art now is higher than it's ever been. 

The people already in the industry share a few qualities. They are:
* self reliant
* self critical
* super driven

The only way I can get you guys there is by directing your focussed, hard work. Right now, that's not happening enough.

### How To Get There

| Productive                          | Not Productive                            |
|------------                         |----------------                           |
| Building on what we learn in class and bringing the results to the next class    | Having nothing ready to go when class starts.                |
| Examining and working through problems. Double checking previous lecture notes and trying the application help/web help.   |  Asking for the solution or giving up before you've tried.                         |
| Working along with the class and asking questions about the new material | Getting lost and asking to cover old material because you haven't read the notes, watched the videos or taken part. |
| Getting distracted but **recovering**. Centering during breaks so you're focussed again. | Sharing your distraction in class. Committing to giving up and spending 3 hours chipping away at the whole room's chance of getting into a flow. |
| Knowing its on us to get better every day.   | Hoping 3 hours a week will do much beyond showing us what work there is to do, and what to learn at home. |

{{< alert title="Be Where You Need To Be" color= "primary" >}}
Remember, since you're not at school, you can just _take a break any time_. We don't confine you like a school. If you're disconnecting and you can't wrestle it back in here, walk out, find somewhere you can: that's on you to solve now as an adult. If you're done, go sit in the sun with a coffee, or go to level 1 and watch videos somewhere you won't be shooshed. 

It's just.. _confusing_ and weird when you rebel in here, because I'm literally the only person here who actually gets in trouble if I bail. 
{{< /alert >}}

If you don't succeed in seeing and take those opportunities yourself, you will be asked to.

## Finalising Models And Exporting

Open your Maya projects. We're going to try to resolve any problems you're having exporting your files for baking in Painter.

First, if you:
- Don't know what meshes to make or what to export, then it's very possible you haven't carefully read through the updated week 3 notes that were mentioned in the announcement sent out on Saturday: 
  - Read those (don't skim), and check if your question was already answered.
    - Grab and examine the updated Maya project.
  
  https://dmdocs.netlify.com/torrens/aac202/week3/#how-it-all-works
  
Other problems we'll look at:
  - Fixing any weird subds and smooth preview errors
  - Errors stopping Maya unfolding/laying out your game mesh.
  - Everything looks to be set up right.. but the bake is failing/has errors  
  - It's baking but the result still looks low poly

### Updated Arcade Stick Files

These also contain the baking project you'll use today to import your model.

<a class="btn btn-lg btn-primary mr-3 mb-4" href="https://laureateaus-my.sharepoint.com/:u:/g/personal/daniel_mcgillick_laureate_edu_au/ETl9ulaSrI9LlLCR05OObgoBjILw7NO0KUpV_aFLyMV66w?e=HFsDQb">Arcade Stick V2 Maya<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>
<a class="btn btn-lg btn-primary mr-3 mb-4" href="https://laureateaus-my.sharepoint.com/:u:/g/personal/daniel_mcgillick_laureate_edu_au/EbGYxoT6oiNLlvRKy42Gt-gBla0ZvIzXG04Akn0MG_GzLA?e=SsJOGf">Arcade Stick V2 Painter<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>

## Substance

First, looking through the updated arcade stick scene.

{{< imgcard arcade_stick_baked_painter Link "arcade_stick_baked_painter.png">}}
Wireframe over normal mapped game mesh, normal mapped game mesh, roughly textured game mesh.
{{< /imgcard >}}

### Starting With Configured Scene

I've created a _Substance Painter_ project you can use for baking.  The settings are already tweaked for our workflow and for checking the quality of the baked maps. There are a few straightforward steps to using it:

First, in _Maya_ (as in week 3 notes):
* Append _game to the end of all your game mesh names (as above)
* Append _subdiv to the end of all your subd mesh names (as above)
* rename the material on your game meshes to game_meshes_mat
* Ensure your UVs all fit within 0-1 uv space (the default square in UV editor)
* export all subd meshes together as a single file (eg `joystick_parts_subd.fbx`)
* export game meshes together (eg `joystick_parts_game.fbx`)

In _Painter_:
* Open the `firstname_lastname_baking.spp` scene.
* Click _Edit -> Project Configuration_ (image below)
* Click _Select_
* Choose your `thing_parts_game.fbx` file
* In the _Texture Set Settings_ panel click _Bake Mesh Maps_ and then the tiny document icon beside the _High Definition Meshes_ list.
* Choose your `thing_parts_subd.fbx` file.
* Click _Bake game_meshes_mat Mesh Maps_

<!-- Video later -->
{{< imgcard baking_project_configuration Link "baking _project_configuration.png">}}
The baking project has a button and its trim. You'll replace the meshes with your own.
{{< /imgcard >}}

### Baking

Next we'll click _Bake Mesh Maps_ in _Texture Set Settings_

{{< imgcard texture_set_pre_bake Link "texture_set_pre_bake.png">}}
The texture set dialogue before you bake anything. 
{{< /imgcard >}}

{{< imgcard painter_bake_settings Link "painter_bake_settings.png">}}
In the Joystick scene I used 2048, start with your resolution at 512 or 1024 for a quicker test.
{{< /imgcard >}}

{{< imgcard texture_set_post_bake Link "texture_set_post_bake.png">}}
If your bake succeeds, Painter connects all the new textures.
{{< /imgcard >}}

### Reference: Map Types

|  Map Type           |  What It Contains              |
|-------------------  | ----------------------------------------------------------------------|
| Normals             |  Info about where a polygon was facing at this point on high res mesh |
| World Normals       |  The same info, relative to the worl (not the given game mesh poly)   |
| Ambient Occlusion   |  Results of any bounced (indirect) light (soft and blurry)            |
| Color ID/Clown map  |  In this case, a different colour for each subdiv object that was separate in maya. |
| Curvature           |  White where the subd was convex, black where it was concave          |
| Position            |  Location in the world of every triangle in the smoothed subd         |
| Thickness           |  White means subd was thick, black means thin. Good for candles, skin etc |


### Environment settings (show wires, rendering quality, studio lighting, rotate environment)

We'll step through these.

## Texturing

Mask by color selection.

## Presenting Our Results

* Real time rendering.
* Screenshots
* Environments
* Post effects
  * Don't go overboard on these. It's a rabbit hole, and won't fix mesh problems :\

### Week 4 deliverables

Images:

  * Painter
    * Mesh with baking complete and wireframe over the top
    * Mesh unbaked
    * Mesh with baking complete, no wireframe.
   
Substance file
If substance doesn't work out: Maya project.

### Summary
1. Finalising models
2. Exploring updated Arcade Stick files
2. Importing meshes and baking high res details to texture maps.
3. Exploring lighting.


