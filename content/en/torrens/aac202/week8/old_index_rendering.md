---
title: "Polish again, render, deliver."
linkTitle: "W.8 Render"
weight: "80"
description: >
    Dynameshing, seam removal, rendering passes, compositing.
---

## Review Of Progress

1. Looking through the discussion:
[Assessment 2 Progress Thread](https://laureate-au.blackboard.com/webapps/discussionboard/do/message?action=list_messages&course_id=_83852_1&nav=discussion_board_entry&conf_id=_133461_1&forum_id=_804660_1&message_id=_2037897_1)

Stuff that was **easy**? Stuff **less easy** than expected?

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