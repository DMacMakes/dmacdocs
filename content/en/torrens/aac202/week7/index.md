---
title: "7. Game ready topology"
linkTitle: "7. Retopology"
weight: 70
description: >
  Preparing models for substance, baking maps to feed into the texturing process.
resources:
- src: "barrel_alvaro_vera.jpg"
  params:
    byline: "Art: Alvaro Vera"
---

## Last week's deliverables
How far did people get with subdivs?
* Did everyone watch the vid with alex?
* Looking at images delivered
* Checking out comments
    
### Progress?
* How much fixing do we need to do? 
* When it's done we can move on and look at retopo 🎉

## How is this useful?

These meshes don't make sense for games. 

**Unsmoothed subd models** have all these weird edges purely for the smooth algorithm. No good in games, too much pointless geometry, and they can be really far from the final silhouette.

{{< imgproc mug_smoothing_xray_comparison Resize "850x" Link "mug_smoothing_xray_comparison.png" >}}
Different: the subdiv mesh's pre- and post-smoothing silhouettes
{{< /imgproc >}}

**Smoothed subd models** look good but are too high poly for game engines. They might be 200K polys where we want say 2K or less.

### Something in between

What if we had something in the middle? 
  * a totally new, hand made, mid weight mesh (say 2K)
  * It has a silhouette that looks more like the smoothed subd mesh than the unsmoothed one, but it's still faceted.
  * It could somehow steal the smoothed subd mesh's skin, then wear it like a suit (creepy) but still run fast (really useful). 
    * More on how to do this next week.
    * A bit like skinning a wolf and wearing it as a cloak. You look way hairy but you actually have a very simple, smooth surface.
  
{{< imgproc subd_vs_game_mesh Resize "800x" Link "subd_vs_game_mesh" >}}
1. A subd mesh without smoothing | 2. A game ready mesh | 3. The subd mesh again smoothed.  
_(Just an illustration: don't move meshes side by side or duplicate your smoothed subd)_
{{< /imgproc >}}

## What's a game ready mesh?
  
A game ready model is one that will look as much like our prop as possible but is light enough (in triangles and textures) that it won't slow our frame rate down too much or eat up all the memory.

{{< alert title="Definition: Topology" color= "secondary" >}}
Consider a cylinder with a height of 2 units and a diameter of 1 unit. It's an ideal volume, an idea of perfect roundness with perfect flatness at the top and bottom. Our model isn't that though, it's a bunch of triangles that only _approximate_ it. It could use 100, 1k or 1m triangles. 

_**The arrangement of polygons currently representing that ideal cylinder is our model's topology.**_

It's the same with the models in our game. When you play on Ultra graphics, Tracer (a character in Overwatch) might have say 20k triangles. Run on Low graphics and maybe she has 4k. The same character, just represented with different _topology._ If you squint, they even look the same.
{{< /alert >}}

## Making the game ready mesh
  
**Goal** Produce a mesh that:
1. Has a triangle count that fits in a given range (say 1000-2500 polygons). (defined by certain production and hardware realities)
2. Provides a silhouette closely matching that of the smoothed mesh, though more faceted.
3. Sits at the same point in space and is the same size, which will be important later.

### Download
Grab this [breakfast mug maya project](week3_breakfast.zip)

### How's it possible?
There are a few ways to do it, but they all involve making a game-resolution mesh in the same space as the smooth reference model so you can match them as close as possible.
This takes organisation and some Maya knowledge, because otherwise you're going to not be able to see or select the game mesh half the time!

{{< imgproc object_shared_space_problem Resize "500x">}}
When objects need to share space, how do you model?
{{< /imgproc >}}

Tools:
  1. **XRay modes!** Xray the scene or individual meshes
    * In a viewport enable `Shading -> X Ray`. I've hotkeyed to alt-x for now.
    * X Ray one object in _Modeling Toolkit's_ `Object` menu.
  2. **Freeze (template) toggle!**
      * It does what the T (template) mode for a layer does, but for an object.
      * It's in _Modeling Toolkit's_ `Object` menu.
      * I've hotkeyed it to alt-shift-f (in the hotkey editor you need to search for _template toggle_).

### Get set up
<!-- Make a duplicated, 1-2x smoothed version of the subd mesh (maybe 30K+ polys). Give it a layer of its own. subd_heavy This is ANOTHER mesh needed.
* Hide the original subd (can be edited later if need be) -->
* Give the subd meshes the suffix `_subd`, as in `body_subd`
* Add a bright red material to the subds so we can tell them apart.

{{< imgproc game_model_prep Resize "600x" Link "game_model_prep.png" >}}
The three meshes with a the `_subd` suffix and red material. (body_game and handle_game are hidden)
{{< /imgproc >}}

### Modeling the new mesh

Whichever way you go about modeling them, give the game meshes the suffix `_game` and a blue material to stand out from the subd ones.

**Model from scratch**: slap down a new primitive and start modeling again, around the subd, trying to match the silhouette.

_or_

**Duplicate the unsmoothed subd mesh**, call that the game mesh, then heavily** modify it**:
  * Reduce the poly count
    * Remove loops that don't affect the silhouette. Support edges mostly don't.
    * Remove edges that do support the silhouette but won't be missed too much: eg reducing a cylinder from 16 to 8 sides.
  * Move points/loops/edges around until you approximate the smoothed model but with less polys

_or_

**Duplicate and smooth the subd mesh** using `edit mesh -> smooth []` with `level=1` and then **modify/optimise** that mesh.

_or_

**mix all those approaches**!
<!--2. Trace the mesh using live mode and quad draw.
* Make subd_heavy a live mesh
* Start quad drawing on it.
* turn off live, make other changes.-->
{{< imgproc subd_and_game_mesh_intersecting Resize "500x" Link "subd_and_game_mesh_intersecting.png" >}}
Game meshes (blue) occupying the same space as the subd meshes (transparent red). Contrasting materials make life a lot easier.
{{< /imgproc >}}

 Table showing the four meshes and their use.

## Homework

1. Apply feedback to and finalise your subd models. Give them the suffix _sub, ie: `screenGlass` becomes `screenGlass_subd`
2. Create game ready meshes for each element using what you learned in week 3 about retopology. Suffix them with `_game`, as in `screenGlass_game`
{{< imgproc naming_meshes Resize "800x" Link "naming_meshes.png" >}}
How to name your meshes. (DO NOT move your meshes side by side, this image only demonstrates naming)
{{< /imgproc >}}

3. **Uv unwrap** all your game ready models (_not_ the subd models) and use layout to pack them all into the same UV space (see final video of week 3 class for review of uv unwrap).

[Reply to this thread on Blackboard](https://laureate-au.blackboard.com/webapps/discussionboard/do/message?action=list_messages&course_id=_89547_1&nav=discussion_board_entry&conf_id=_152757_1&forum_id=_866555_1&message_id=_2100661_1) and post:
1. Your concept image
2. Images of your finished subd meshes with smooth preview on and:
   * with wireframe onshaded on
   * then off.
3. An image of your your checkerboarded models next to finished UVS.

{{< imgproc mug_uvs Resize "800x">}}
All mug parts selected, uv checkerboard on, image > dim on
{{< /imgproc >}}
