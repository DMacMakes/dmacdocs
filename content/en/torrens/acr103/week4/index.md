---
title: "Week 4: Rendering"
linkTitle: "W.4 Rendering"
weight: 40
description: >
  Delivery, rendering.
resources:
- src: "*krzysztof-maziarz*"
  params:
    byline: "Art: Krzysztof Maziarz (Artstation)"
- src: "*lulemero*"
  params:
    byline: "Art: Lulemero (Instagram)"
---

## Assessment 1

<a class="btn btn-lg btn-primary mr-3 mb-4" href="../assessments/#week-4-submission-details">Assessment 1 Final Deliverables<i class="fas fa-arrow-alt-circle-right ml-2"></i>
</a>

#### Marking covers three components:
You've already covered the first: week 2 block/discussion is worth 40.
Remaining:
  - Detailed modelling: **30**
  - Shading: **30**

## Detailed Modelling
* How you applied the techniques taught in class
* How successfully did you capture the details and evoke the feel of the concept art
* How much control did you achieve over the tools.

### Reducing poly count and squashing n-gons

Seb asked how he could reduce the number of polygons in his scene and deal with n-gons. 

This kind of work sees us using **Multicut, Target Weld and Delete Edges** a lot. Maya can easily produce weird, hard to solve geometry corruptions with these tools, so I cover ways to use them safely. There's also **combining meshes** cleanly, getting rid of **zombie groups** and mass renaming. Witness  the power of these tools combined with **good Maya hygiene**.

{{< youtube 7cDK5cD90V8 >}}  


Did you make say 20 bolts and move/rotate them all into place? Did you figure you'd fix the high poly count later? Here I show Seb how to use **Match Transforms** combined with **good pivots** to avoid all that repositioning. 

Never forget, Freeze your scale transforms and delete your history regularly!

{{< youtube zIYSE1JcRKg >}}

## Shading

Lighting the model and positioning the camera to see its forms.
Creating, selecing, applying and changing materials to make enhance your model.

### Intro to Rendering with Arnold

Arnold is what's called a "Ray Tracing Renderer". 

> **Arnold paints your scene** (rendering is a word often used for painting or drawing), using your polygons, lights and materials to figure out the colour of each pixel.

**Ray Tracing** means it trys to figure out when rays from your lights would bounce off the surfaces and hit the camera. The results can be pretty convincing:

![](groot_arnold.png)
_Groot in Guardians 2, rendered with Arnold. See more Arnold renders [on the Arnold website](https://www.arnoldrenderer.com/gallery/)_

### Pre made arnold rendering scene

Grab the **scene file** with placeholder cube [here](prop_maya_arnold.zip)

![](arnold_render_scene.png)
_Our Arnold render scene with placeholder cube_

#### Opening the render view

At the top of Maya, beneath the menu bar and toolbar, you'll find the _shelf_. It's tabbed, and contains several different shelves including one for Arnold.

![](arnold_shelf_render_button.png)


**To start a render:**
1. Select the Arnold shelf (by its tab)
2. Click the render view button: it looks like a youtube icon.
3. It should render whatever is in your perspective view. It might wait for you to update the scene, so if it remains black try tumbling or zooming in and out of the perspective view a little.

#### IPR on/off

Interactive rendering is really useful, but also taxing on your machine. 

- enable/disable with the playStop button in Arnold viewer.

### HDR lighting

  - the image lighting your scene
  - Rotating it
  - using other hdr images

### Materials

![](arnold_balls.png)
![](arnold_materials.png)
![](subsurface.jpg)

Arnold Materials use the Arnold Standard Surface Shader, which has a bunch of handy settings to simulate all kinds of real world surfaces.

![](material_types.png)
_Material types described in the [Standard Surface help](https://docs.arnoldrenderer.com/display/A5AFMUG/Standard+Surface)_


Controlling it:
![](arnold_shader_controls.png)


## More on PBR

Physically based rendering.