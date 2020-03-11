---
title: "W.4: Bake, Texture, Present"
linkTitle: "W.4 Present"
weight: 40
description: >
  Turning 3D art into playable game assets means exporting to a real time **game engine**. Today we'll learn how to move our models from Maya and Painter into Unreal/Unity. From there you can light and screenshot them for your **final deliverables** of Assessment 1.
---

<!--## Productive Class Time

 
It's week 4 of a second year class, and we're here learning to do something very difficult. The amount of expertise you need to have any chance in game art is high: the people already in the industry are self sufficient and super driven. 

The only way I can help you guys get on that path is through focussed hard work.  Here's how we can get seriously productive in class:

| Productive                          | Not Productive                            |
|------------                         |----------------                           |
| Building on what we learn in class and bringing the results to the next class    | Having nothing ready to go when class starts.                |
| Examining and working through problems. Double checking previous lecture notes and trying the application help/web help.   |  Asking for the solution or giving up before you've tried.                         |
| Working along with the class and asking questions about the new material | Getting lost and asking to cover old material because you haven't read the notes, watched the videos or taken part. |
| Getting distracted but recovering, chilling during breaks so you're focussed | Sharing your distraction mid class.                  |
| Knowing its on us to get better every day.   | Hoping 3 hours a week will do much beyond showing us what work there is to do, and what to learn at home. |

{{< alert title="Manage Your Class Time" color= "primary" >}}
Remember, since you're not at school, you can take a break *any time*.  If class is too much, take a break, wander outside, it's up to you. 
{{< /alert >}}


If you don't see and take those opportunities yourself, I'll ask you to.
-->
## Finalising Models And Exporting

Errors:
  - If you haven't read through updated week 3 notes, you're behind.
    - Read those (don't skim), before asking any questions.
  - Fixing any freaky smooth preview behaviour
  - Can't unfold/uv game res because errors

Exporting:

Checklist:

## Substance

* link coming for recent UI tute
* Look through Joystick scene
* Download demo scene I've prepared. White, then with maps, then textured, then with textures but no maps

### Starting With Configured Scene

I've created a _Substance Painter_ project you can use for baking.  The settings are already tweaked for our workflow and for checking the quality of the baked maps. There are a few straightforward steps to using it:

First, in _Maya_ (as in week 3 notes):
* Append _game to the end of all your game mesh names (as above)
* Append _subdiv to the end of all your subd mesh names (as above)
* rename the material on your game meshes to game_meshes_mat
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


