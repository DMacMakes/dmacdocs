---
title: "4. Painting characters in ZBrush"
linkTitle: "4. Polypaint"
weight: "40"
description: >
    Dynameshing, seam removal, rendering passes, compositing.
---

## Review Of Progress

Week 7 detail sculpting:

<a class="btn btn-lg btn-primary mr-3 mb-4" href="https://laureate-au.blackboard.com/webapps/discussionboard/do/message?action=list_messages&course_id=_89547_1&nav=discussion_board_entry&conf_id=_152757_1&forum_id=_866559_1&message_id=_2226714_1" target="_blank">Week 7 Progress Thread<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>

Stuff that was **easy**? Stuff **less easy** than expected?

## A2 extension and delivery.

**Delivery:** Wednesday, July 29 (as discussed last week).

We're going to **push our model over to Painter**, which is different to last trimester's students
* I'll be **updating the deliverables** in the next few days.
* It'll be a combination of working files and screenshots. 

## Baldy in parts

<a class="btn btn-lg btn-primary mr-3 mb-4" href="https://www.dropbox.com/s/zd70nryct1p600y/Baldy_zb_to_painter.zip?dl=0" target="_blank">Download The Baldy Project<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>

He’ll have skull, lids, eyes, nose, ears, jaw.
* No teeth or pipes.
* His lips will be together and mouthbag deleted
* pieces will have real subdivisions, not dynamic

## Polypaint along review
* Enable polypaint
* Provide soft paint brush (just fix focal)
* show how to pick colours 

<!-- 
Me prep: Add polypaint to him and see if can get it through the process. Bake as id map and duplicate texture
-->
## Activity: paint your character a bit.
<a class="btn btn-lg btn-primary mr-3 mb-4" href="https://laureate-au.blackboard.com/webapps/discussionboard/do/message?action=list_messages&course_id=_89547_1&nav=discussion_board_entry&conf_id=_152757_1&forum_id=_866560_1&message_id=_2226746_1" target="_blank">In Class Painting Thread<i class="fas fa-arrow-alt-circle-right ml-2"></i></a>

## Can I Add extra bits using Maya?

There are a few easy ways to do this. You can use regular exporting and importing, or you can use the GoZ plugin.

{{< alert title="Method 1: Manually" color= "primary" >}}
This is simplest way in that it doesn't require learning new tools beyond the fbx exporter. It's laborious though.
1. Export an obj or fbx file from zbrush at a low subdiv
2. Import it into zbrush, model around it to add your new bits. Work in quads: it'll be subdivided.
3. Export those bits from zbrush into a new fbx
4. Import that into zbrush.
5. If it's a blocky mesh (say, a box) try adding creases by normals.
{{< /alert >}}

{{< alert title="Method 2: GoZ" color= "primary" >}}
GoZ makes a connection between Maya and Zbrush. It's initially a bit harder because it requires a little setup and learning, and some testing on something unimportant to figure out the quirks.

In the long run it's the much better process. It's fast and automated, removes any fussing around with scale and names, and more information makes it back and forth (creases and more).

1. Trigger GoZ install into Maya
1. Set Maya (and its path) as GoZ destination
1. GoZ your mesh from ZB to Maya
1. Model bits around it
1. In the Maya GoZ shelf, push your mesh back to ZBrush.
{{< /alert >}}

##  merging, easymesh, clean up seams

1. All joins should be good as can get while meshes not joined. Fix his nose so it doesn’t have gaps near face. Show this so everyone checks.
3. remove all lower subdivs all subtools
	1. Some have 4, 3, whatever. 
	2. Find this in a plugin: subtool master, clean tool master? Ryan’s?
	3. Merge all except eyes.
	4. TIP: none of your meshes on uour own model should be over 1 million points. Del higher if u have this.
1. Polygroups set up for uv later: one for ears, and keep eyelid groups that sep group for in, out, cut.
2. Copy head skin into new subtool
3. Use easymesh on it at level 7
	1. (Figure out polypaint and groups keep?)
5. Name it headSkin_high
6. Go back to other tool, repeat process for eyes (in same tool as the headskin), eyes_high
7. Short demo of seam fixing. 
8. Export skin and eyes in baldy_high.fbx

##  low poly auto
8. Duplicate each tool, give _low suffix
9. Decimate skin to 8k
10. Decimate eyes to .5k
11. Weld, fix mesh, test integrity
12. Export fbx of head, eyes baldy_low.fbx

##  Maya quick uvs
1. Import into new maya scene
2. Dont mess with position
3. Mesh cleanup->fix manifold.
4. Create auto uvs
5. Unfold
6. Layout
7. Soften/harden by texture borders
8. Delete history
9. Export fbx again

## Painter:
1. New file from low fbx
2. Bake normals from high on 1024
3. If it works go 2k and bake all maps except colour id
4. Try colour id from vert colours
5. Dupe id map and add to fill layer
6. Celebrate.


<!-- 

## Rendering How

Turning on and tuning **shadows**
* Shadows
  * Change direction to match material?
* Ambient Occlusion
* Filling with material:
    * Making some things glossy (eyes), some matte
    * Wax/subsurface scattering
* Subpixels (sampling)

### Rendering What

* Angles
  * EXAMPLES 
* Closeups
  * EXAMPLES

## Render Passes

Making passes and exporting to photoshop/Krita for more editing.

### Photoshop Method

* In the _Zplugin_ menu you'll find ZBrush To Photoshop CC. Select passes like shadow, bpr, AO, lights, and _Send To Photoshop CC_.
    * It will ask where the photoshop executable is on your hard drive. Browse to it. (probably `c:\program files\adobe\Photoshop\Photoshop.exe` or similar)
    * It will take a while and do a lot of stuff in zbrush, turning subtools on and off etc.
    * Click yes when photoshop asks if you want to run a script.

{{< imgcard zbrush_to_photoshop Link "zbrush_to_photoshop.jpg">}}
Click the passes you want, let the plugin automate the exports.
{{< /imgcard >}}


### No Photoshop Method

* Ensure shadows, ambient occlusion are on in _Render \> Render Properties_
* Make a BPR render in zbrush (shift R or click the button)
* Look _Render -> BRP RenderPass_: click on a pass to download it as an image. Default type is single layer PSD, but it also has TIFF.

{{< imgcard zbrush_bpr_renderpass Link "zbrush_bpr_renderpass.jpg">}}
Click individual passes to export.
{{< /imgcard >}}

## Using Render Passes

Here's a render with some a bit of quick processing/painting over
  - rim lighting painted in
  - right light pass added
  - shadows purpled up
  - eyelashes, gloss on lips, scar quickly dropped in
  - radial gradient behind, cool colour photo filter on top
  - Camera raw: quick add grain, sharpen, individual hues adjusted, vignette

{{< imgcard izzy_comp_passes Link "izzy_comp_passes.jpg">}}
Left: Render passes exported to photoshop  Right: With some editing
{{< /imgcard >}}

-->