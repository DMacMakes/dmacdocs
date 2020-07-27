---
title: "Week 8: Moving your level into the game engine"
linkTitle: "W.8 In-engine"
weight: 80
description: >
  Game assets belong in games! Let's move from Maya into Unity and add some lighting.
resources:
- src: "*krzysztof-maziarz*"
  params:
    byline: "Art: Krzysztof Maziarz (Artstation)"
carousel1: [slide1.png, slide2.png, slide3.png]
---
You've already done a solid job of modeling enviro assets.
What we're working toward is less like a shippable product and more the beginning of iteration, it's look dev and prototyping. We would do many passes on this and use what we learn as we go.

(Maaaybe, time allowing, how to add one or two textures to basic rectangles.)

## A2 Submission

**Reminder:** extended due date Wednesday July 29

General outline:
* Your unity project
* Some screenshots

<a class="btn btn-lg btn-primary mr-3 mb-4" href="../assessments/#final-week-8-submission" target="_blank">A2 Final Submission Details<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>

Details posted after today's class. 

## Lit Unity project

Grab the project below. It contains the default unity 3D+extras sample scene, which we'll explore, and a base scene you could use to import your level.

<a class="btn btn-lg btn-primary mr-3 mb-4" href="Maya_to_unity_dist.zip" target="_blank">Download Maya_to_unity_dist.zip<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>

## Summary
We'll learn how to:

1. Check our levels are ready to go in-engine
2. Drop our level models into Unity and update them
3. How to tweak materials to add metalness, smooth/rough, emmissive.
4. How to add lights
5. How to enable light baking on models, lights (static, generate lightmap uvs, baked) 
6. A little about baked light settings and progressive light mapping.

## Exporting

1. Select your level models.
2. Delete all history.
3. Click the <i>File->Export selected [ ]</I> menu item on the square for options, select fbx as the export format.

{{< imgcard maya_fbx_export_settings >}}
Settings for the <i>Maya</i> fbx export options dialogue
{{< /imgcard >}}

> Blockquote text
> looks like this.

3. Export it to the unity projects Assets/Hut folder
4. Rename the Hut folder to whatever your scene contains (Dungeon, HabboPad..)

## Into Unity, via Unity Hub
1. In the project view click _Add_, navigate to the folder you downloaded (it contains an Assets folder and more), and confirm.
2. Your project is now listed in the hub. Click its name to open it.

## Importing and lighting your model

### Level model import settings

The fbx file you import has some important settings that control its size and whether it can benefit from light baking.
1. Go to the project view, look in _Assets/YourAssetsFolder_ select the model you exported from Maya.
2. Don't let it convert units (Maya uses cm and unity uses meters, but we've modelled on the meter scale anyway).
3. Generate lightmap UVs: this tells unity to figure out how to unfold our meshes. Then it can add the baked light as a texture.

{{< imgcard unity_fbx_import_settings  >}}
1. The fbx you exported from Maya. 2. The settings to apply in the inspector.
{{< /imgcard >}}

Internally, Unity **unfolds your level** as though it were made of paper and arranges it in a square. Then it checks what light is hitting each part of your model, and **renders** it all to a square image, a texture it can apply later as an overlay to your materials. 

{{< imgcard baked_light_map >}}
Unity has broken up our mesh into rectangles it can lay out flat, then rendered the light that hits each
{{< /imgcard >}}

As you can imagine, if any lights or objects were to move in your game, the lighting in these textures would stay wherever they were put, and the whole thing would look very broken.

### Adding your model to the scene

1. Go to the project view, look in _Assets/YourAssetsFolder_ and drag your model into the Heirarchy view
2. Select it in the Heirarchy view
3. In the inspector, enable static. Hit _yes_ to enable on all children. This tells Unity your object won't move, so Unity knows it safe to bake lighting textures for it.
4. You're going to probably export the same model several times from Maya. When you do, any new additions will not be static. You'll need to unset and set the _static_ checkbox again each time to ensure all children receive baked light.


{{< imgcard set_static >}}
Click the checkbox to set objects (including a whole group) to <i>static</i>. Confirm <i>change children</i>
{{< /imgcard >}}

## Lights

Concepts: Baking light for unmoving objects. Setting static, setting light type to mixed baked. Extra uvs. A little tricky when people don't know what UVs are.

* Basic light bake with default sky
* Contains example spotlight and directional light
* Fog, post processing.

{{< imgproc light_settings_visualised Resize "250x" Link "light_settings_visualised.jpg" >}}
Contributors to our overall lighting
{{< /imgproc >}}

{{< imgcard viewport_check_bake  >}}
Viewport controls for checking baked lighting.
{{< /imgcard >}}

