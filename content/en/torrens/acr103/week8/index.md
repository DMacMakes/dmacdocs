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

## Lit Unity project

Grab the project below. It contains the default unity 3D+extras sample scene, which we'll explore, and a base scene you could use to import your level.

<a class="btn btn-lg btn-primary mr-3 mb-4" href="Maya_to_unity_dist.zip" target="_blank">Download Maya_to_unity_dist.zip<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>

## Summary
We learned how to

1. Check our levels are ready to go in-engine
2. Drop our level models into Unity and update them
3. How to tweak materials to add metalness, smooth/rough, emmissive.
4. How to add lights
5. How to enable light baking on models, lights (static, generate lightmap uvs, baked) 
6. A little about baked light settings and progressive light mapping.

## Exporting

1. Delete all history.
2. Export selected as FBX.
**SETTINGS DIALOGUE PIC HERE**
3. Export it to the unity projects Assets/Hut folder
4. Rename the Hut folder to whatever your scene contains (Dungeon, HabboPad..)

## Into Unity
1. In Unity project "Add", navigate to the folder
2. Open the project
2. 

## Lights

Concepts: Baking light for unmoving objects. Setting static, setting light type to mixed baked. Extra uvs. A little tricky when people don't know what UVs are.

* Basic light bake with default sky
* Contains example spotlight and directional light
* Another option: emissive materials
* Setting static, 

##