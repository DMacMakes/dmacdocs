---
title: "8. Bake, Texture, Present"
linkTitle: "8. Baking maps"
weight: 80
description: >
  Turning 3D art into playable game assets means exporting to a real time **game engine**. Today we'll learn how to move our models from Maya and Painter into Unreal/Unity. From there you can light and screenshot them for your **final deliverables** of Assessment 1.
---

<!-- ## Productive Class Time

 
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
-->

## Assessment 1 progress

Where did you get to?
[Week 3 Homework in the notes](../week3/#homework)

### Reviewing and helping

* Alex poly count
* Lucas multi cut errors.

## Transferring the details

Normal mapping!
Substance Painter!

{{< imgcard axe_zb Link "https://dmcgits.github.io/mds/workshops/painter/painter_notes.html">}}
Click here to open the Painter workshop notes
{{< /imgcard >}}

Requirements:

**Two collections of meshes.** Each collection can be saved into an fbx format file.

1. Very **detailed meshes** of the prop parts that look very nice but are too heavy for games. 
2. The **game ready mesh** with uv maps.
   * These should have hard edges wherever there are seams/texture borders in the uv map, and soft edges everywhere else.
   * Freeze any scaling (probably already done for uv unwrap)

**Magic software:** It **scans the surface** of the high detail meshes, tosses away the polygons, and **makes an image** from their skin that **the game ready mesh will wear** like a suit.

![](skin_suit.jpg)

### Our mug exports

![](mug_export_game_subd.png)

1. **mug_game.fbx**: The _game meshes of the mug body, handle and coffee. 
   * This is only about 50KBs.
   * Make sure they all have the same material.
2. **mug_subd.fbx**: The _subd meshes of the mug parts, but subdivided and smoothed for real. We'll use Maya to export the subd meshes and apply the smooth and subdivide algorithms along the way, producing tens or hundreds of thousands of real triangles.
   * This sounds backwards but you have to have _smooth meshes_ **un**selected when you export the subd meshes, or they'll export the unsmoothed versions. You got it right if the file will be megabytes in size.

## Baking your model in Painter

Grab these:

<a class="btn btn-lg btn-primary mr-3 mb-4" href="A1_bake.zip">A1 Painter Baking Files<i class="fas fa-arrow-alt-circle-right ml-2"></i>
</a>

Watch this:

{{< youtube v5b0z5FLXDk >}}

## Week 4 Final Submission details

<a class="btn btn-lg btn-primary mr-3 mb-4" href="../assessments/#week-4-submission-details">Week 4 submission details<i class="fas fa-arrow-alt-circle-right ml-2"></i>
</a>  
  
<!--- 
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
* Append `_game` to the end of all your game mesh names (as above)
* Append `_subdiv` to the end of all your subd mesh names (as above)
* rename the material on your game meshes to game_meshes_mat
* Ensure your **game mesh has been UV mapped** and unwrapped. The **subd mesh doesn't require a uv map.**
* Ensure your game mesh UVs all fit within 0-1 uv space (the default square in UV editor)
* export all `subd meshes` together as a `single file` (eg `joystick_parts_subd.fbx`)
* export game meshes together as another single file (eg `joystick_parts_game.fbx`)

In _Painter_:
* Open the `firstname_lastname_baking.spp` scene.
* Click _Edit -> Project Configuration_ (image below)
* Click _Select_
* Choose your `thing_parts_game.fbx` file
* In the _Texture Set Settings_ panel click _Bake Mesh Maps_ and then the tiny document icon beside the _High Definition Meshes_ list.
* Choose your `thing_parts_subd.fbx` file.
* Click _Bake game_meshes_mat Mesh Maps_


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

## Deliverable This Week

You'll create images and submit them in an archive with one of your scene files.

###  Painter images
Pic a 2 or 3 camera angles to show off your object. For each one, capture at least two images:

1: Object with normal maps enabled, using default white material.  
2. The same again with wireframes enabled.  
3. This time turn on any materials you’ve applied, and turn off wireframes.  

###  Maya Images
Hide your game meshes, unhide all your subd meshes. Pick two angles and take screen shots with `wireframe on shaded` enabled and:
1. Normal view enabled (press `1`)
2. Subd smoothing enabled (press`3`)

### Scene File
Do **one** of the following:

1: If you successfully bake your textures, submit your *Painter* `spp` file.
2: Otherwise submit your *Maya* `.ma` or `.mb` scene file

### Archive  
1. Gather your images and scene file in one folder. **compress** the folder with `.7zip` or `zip`
2. Name the archive:
   `firstname_lastname_A1_AAC202.zip`
3. Submit on Blackboards assessment 1 page.

If you have trouble with the large file size, upload it to a service like *Dropbox* and submit the link.

## Texturing

Mask by color selection.

## Presenting Our Results

* Real time rendering.
* Screenshots
* Environments
* Post effects
  * Don't go overboard on these. It's a rabbit hole, and won't fix mesh problems :\

### Summary
1. Finalising models
2. Exploring updated Arcade Stick files
3. Importing meshes and baking high res details to texture maps.
3. Deliverables
3. Lighting/materials
-->

