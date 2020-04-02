

---
title: "7: ZBrush 2"
linkTitle: "W.7 ZBrush 2"
weight: 70
description: >
  Working clean: subtools, automasking, base meshes, remeshing.
---

## Last Week's Homework

Madballs: 2 hours of try-harding.

Q&A
1. What was easy to do on Madballs in ZBrush?
2. What was hard to do in zbrush?
3. Got stuck in a weird mode?

Today we'll learn to do things that were hard with the basic subdividing workflow.

(Doing stuff close together, clean work with crisp transitions, eyeballs and eyelids!)

## Assessment 2: Character Sculpt
Look at assignment brief

## Beyond Pushing Clay

More than just adding and removing clay. Now we take advantage of digital tools.

### New  Resources

Exit ZBrush and, in explorer, open the `C:\Program Files\ZBrush 2020\` folder.

<a class="btn btn-lg btn-primary mr-3 mb-4" href="Zbr_wk2_resources.zip">Download Zbr_wk2_resources.zip<i class="fas fa-arrow-alt-circle-right ml-2"></i>
</a>

**ZTools:**
  * Copy whole `BaseMeshes` folder into `C:\Program Files\ZBrush 2020\ZTools`
  * Low poly, quad based **character blockout** with good, mixed gender topology. Broken up into parts.
  * One file for **whole character**, another with **head + body**, one with **just eyes** near world origin (x,y,z = 0)

{{< imgproc res_ztools Resize "650x">}}
Stylised human basemeshes.
{{< /imgproc >}}

**Brushes:**
  * Copy files into `C:\Program Files\ZBrush 2020\ZStartup\BrushPresets`
  * _DM_ClayBuildMushy:_ Like Clay Buildup with softer, rounder shape.
  * _JACCut_A:_ Like a combo of Dam Standard and Pinch. Sharp creases, edges.
  * _Orb_Cracks:_ Great crack-in-stone brush.
  * _SK_ClayFill_ Fill in cavities with less cleanup required than clay buildup.

{{< imgcard res_brushes>}}
New brushes this week.
{{< /imgcard >}}

**Materials:**
  * Copy files into `C:\Program Files\ZBrush 2020\ZStartup\Materials`
  * _IJ_Clay:_ Bright with rimlight, good for exaggerating form.
  * _mah_modelling:_ Great all round modelling brush, like grey_matcap.
  * _zbro_EyeReflection_ellipse:_ Glossy eye material
  * _zbro_Viewport_Skin4:_ Change your colour to a skin tone for a decent realtime skin.

{{< imgcard res_materials>}}
New materials this week.
{{< /imgcard >}}

### How To Add Eyeballs And Eyelids!

Sometimes having everything in one mooshy, continuous mass makes life hard. Consider eyes:

* **Eyeballs**, apart from a bump on the front, are **perfectly round**, glossy balls. 
    * Maintaining perfect shapes is hard in sculpting.
* **Eyelids** criss cross them at strange angles depending on expression and genetics.
    * Humans are sensitive to the slightest movement of eyelids and brows.
    * As a modeller you need to change them constantly.

To freely modify one while leaving the other perfect, **we need different surfaces**.

### Tools and Subtools

To access the new files in _ZTools_ we'll start ZBrush and use the _lightbox_. It usually opens when ZBrush starts. If it doesn't, hit comma `,` or click the _lightbox_ button, top left.

{{< imgproc lightbox Resize "800x">}}
Projects, models, materials, brushes that don't load with ZBrush can be loaded from the lightbox.
{{< /imgproc >}}

A Tool can have multiple subtools. While you're in a ZBrush project you can load in new ones or save them out.

{{< imgproc subtools_jaw Resize "800x">}}
Jaw is a subtool of our character tool. Note the ear subtool has two meshes.
{{< /imgproc >}}


| Category |  Definition/Place              |
|-----|-----|
| Tools | Objects in the Tools palette.     |
| Subtools | Objects in the Subtools list   |
| Meshes   | Shells of contiguous polygons. Found inside subtools. |

#### Importing Subtools

{{< alert title="Definition: Subtools" color= "primary" >}}
A bit like objects in Maya. Can have multiple meshes.
{{< /alert >}}

1. Download My Madball Demo File
2. Unzip, it contains `madball_demo.zpr` and `eyes.ztl` files. 
3. Open `madball_demo.zpr`
5. Click Madball in `Tool` palette and choose the **star** (polymesh3D)
6. `Tool->Load Tool`: browse to and choose the `eyes.ztl` file I provided.
    - Star is replaced with eyes and eyelids
7. Return to our Madball. Click `tool->subtool->append` and choose the eyes.
   
#### Moving With The Gizmo

The  gizmo is like the Maya transform manipulators.
* Press `w` to use it (or `e` or `r`)
* Press `q` to return to brushing
* If you see a weird line with circled ends instead of gizmo, press `y` to switch.
  
Gizmo tool moving things
	* Individually
	* As a group
	* Locking/unlocking and changing the gizmo pivot `alt` or gizmo edit widget (like `d` in Maya`)
	* Back to center of visible objects
	* Can scale/rotate also.
* Modifying eyes
	* Deforming with gizmo
	* We have one subtool for eyes and eyelids. How work on eyelids without messing up eye
	* Move tool `b, m, v`
		* masks!
		* With automask polygroup (in brush menu)
			* View popugroups with shift F
		* automask topological
		* masking with ctrl
		* Now try Move Elastic `b, m, e`

#### Find Short Tute Video Of Eyes

### Exercise: Madball Eyes

Re-do them on your model.

## Modelling From Existing Blockout

A blockout is what we saw last week: a whole made out of smaller, simpler pieces.
- don't have to worry about joining and topology
- can edit pieces safely without messing up neighbouring anatomy.

Open and show Brice Laville base mesh.

Watch Tai Pao 1.

Do a little of it live. Reiterate masking.

Show video 4 dynamesh and clean.

Then I’ll dynamesh (give settings) and start cleaning up with sculptris (give settings).

## At Home:

Required, this will be part of assignment marking. 

###  Ways To Generate/Merge Geometry

Show girl face vid by follygon, then the brice saville one.
Approaches: 
Follygon: traditional clay, very steoke intensice
Brice: digital realm specific: block out low and clean, minimal final sculpting

### To Do
Using simple Character designs i’ll provide.

Block out, merge, continue. 
* watch folygon video send me questions.
* I can make a video covering q&A
* Model something at home from a base mesh: give them a head base mesh.
	1: use move tool and other brushes along with auto masking to create character block out
	2: dynamesh all but eyes and eyelids into single form, trying to keep detail without too much geo.
	3: clean up some details with sculptris.

Week 8 we’ll use goZ to add stuff in maya and begin work on our final charcter. Learn material fill.

Week 9 polypaint and solve people’s problems workshop.