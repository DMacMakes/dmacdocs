

---
title: "7: ZBrush 2"
linkTitle: "W.7 ZBrush 2"
weight: 70
description: >
  Working clean: subtools, automasking, base meshes, remeshing.
resources:
- src: "*patri*"
  params:
    byline: "Art: Patri Balanovsky (Artstation)"
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

Exit ZBrush and, in explorer, open the `C:\Program Files\Pixologic\ZBrush 2020\` folder.

<a class="btn btn-lg btn-primary mr-3 mb-4" href="Zbr_wk2_resources.zip">Download Zbr_wk2_resources.zip<i class="fas fa-arrow-alt-circle-right ml-2"></i>
</a>

**ZTools:**
  * Copy whole `BaseMeshes` folder into `C:\Program Files\Pixologic\ZBrush 2020\ZTools`
  * Low poly, quad based **character blockout** with good, mixed gender topology. Broken up into parts.
  * One file for **whole character**, another with **head + body**, one with **just eyes** near world origin (x,y,z = 0)

{{< imgproc res_ztools Resize "650x">}}
Stylised human basemeshes.
{{< /imgproc >}}

**Brushes:**
  * Copy files into `C:\Program Files\Pixologic\ZBrush 2020\ZStartup\BrushPresets`
  * _DM_ClayBuildMushy:_ Like Clay Buildup with softer, rounder shape.
  * _JACCut_A:_ Like a combo of Dam Standard and Pinch. Sharp creases, edges.
  * _Orb_Cracks:_ Great crack-in-stone brush.
  * _SK_ClayFill_ Fill in cavities with less cleanup required than clay buildup.

{{< imgcard res_brushes>}}
New brushes this week.
{{< /imgcard >}}

**Materials:**
  * Copy files into `C:\Program Files\Pixologic\ZBrush 2020\ZStartup\Materials`
  * _IJ_Clay:_ Bright with rimlight, good for exaggerating form.
  * _mah_modelling:_ Great all round modelling brush, like grey_matcap.
  * _zbro_EyeReflection_ellipse:_ Glossy eye material
  * _zbro_Viewport_Skin4:_ Change your colour to a skin tone for a decent realtime skin.

{{< imgcard res_materials >}}
New materials this week.
{{< /imgcard >}}

## Follygon's ZBrush Process

{{< youtube cYE_bVG98OQ >}}

### How To Add Eyeballs And Eyelids!

Sometimes having everything in one mooshy, continuous mass makes life hard. Consider eyes:

{{< imgcard moana_disney Link "https://www.pinterest.com.au/dmacdraws/aac202/">}}
Moana's lower lids are more visible as she looks upward. Also visible are the thick edges of her upper lids.
{{< /imgcard >}}

* **Eyeballs**, apart from a bump on the front, are **perfectly round**, glossy balls. 
    * Maintaining perfect shapes is hard in sculpting.
* **Eyelids** criss cross them at strange angles depending on expression and genetics.
    * Humans are sensitive to the slightest movement of eyelids and brows.
    * As a modeller you need to change them constantly.

To freely modify one while leaving the other perfect, **we need different surfaces**.

{{< imgproc bust_chef_pixar Resize "500x" Link "https://www.pinterest.com.au/dmacdraws/aac202/">}}
This real clay chef sculpt from Pixar is extremely stylised. You can see the eyes and lids are not sculpted out of the main mass.
{{< /imgproc >}}

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


<a class="btn btn-lg btn-primary mr-3 mb-4" href="hornhead_sketch_class.zip">Download hornhead_sketch_class.zip<i class="fas fa-arrow-alt-circle-right ml-2"></i>
</a>

1. Download My Madball Demo File
2. Unzip, it contains `madball_demo.zpr` and `eyes.ztl` files. 
3. Open `madball_demo.zpr`
5. Click `tool->subtool->append` and choose the `polysphere3D`. 

{{< imgcard ui_append>}}
Append an object as a Subtool
{{< /imgcard >}}
   
#### Moving With The Gizmo

The  gizmo is like the Maya transform manipulators.
* Press `w` to use it (or `e` or `r`)
* Press `q` to return to brushing
* If you see a weird line with circled ends instead of gizmo, press `y` to switch.

{{< imgproc gizmo Resize "300x" >}}
The Gizmo and its menu.
{{< /imgproc >}}
  
Gizmo tool moving things
	* Individually
	* As a group
	* Locking/unlocking and changing the gizmo pivot `alt` or gizmo edit widget (like `d` in Maya`)
	* Back to center of visible objects
	* Can scale/rotate also.


* Modifying eyes
  	* Deforming with gizmo (`w`)
  	* We have one subtool for eyes and eyelids. How work on eyelids without messing up eye
  	* Back to Sculpt/Draw: `q`
  	* Move brush `b, m, v`
      	* masks (in draw mode)
        		* `ctrl-left drag` to mask out
        		* `ctrl-left drag` on background, not touching model, to clear mask.
        		* `ctrl-left click` on background to flip mask.
    		* With automask polygroup (in brush menu)
      			* View popugroups with shift F
    		* automask topological
    		* masking with ctrl
    		* Now try Move Elastic `b, m, e`

{{< imgproc brice_head_pg Resize "500x">}}
Brice head with polygroups visible.
{{< /imgproc >}}
This is a nice sitting position, I can type pretty easy too. typing way easier with a bigass tilt to the keeb dohn u fing.
I wonder if i can type prtty cosy like. yeah that's real cosy like.super cosy like if i could get my arms held up like this.

#### Find Short Tute Video Of Eyes

### Exercise: Madball Eyes

Re-do them on your model.

## Modelling From Existing Blockout

A blockout is what we saw last week: a whole made out of smaller, simpler pieces.
- don't have to worry about joining and topology
- can edit pieces safely without messing up neighbouring anatomy.

Brice Laville Saint Martin doing it:

{{< youtube "Ay-UY6JTbF4" >}}

Now we'll do it with his basemesh 👌

{{< imgcard res_ztools Link "Zbr_wk2_resources.zip">}}
Brice Saint Laville's starting files.
{{< /imgcard >}}

* Open the aa starting file in `Lightbox->Projects`
* Select a star or cylinder tool from tool palette
* Go to `Lightbox->Tools->Base Meshes` and load the head basemesh.

## Demo: Greeno

Starting a character bust from a basemesh using reference.

{{< imgcard ui_drawMenu_frontReference>}}
The starting file along with good <i>Draw</i> menusettings for a reference plane.
{{< /imgcard >}}

### Joining The Pieces

Dynamesh is a magical tool that didn't exist in ZBrush until it was over 15 years old. Everything changed for cartoony artists, concept artists. You could truly experiment and explore whole creatures in ZBrush with little friction.

It'll be hard to see, but Brice merges everything with Dynamesh around 0:25. After that, you'll see the seams and cleanup. He's meticulous.
{{< youtube "-ElecAWzP_Y" >}}

{{< imgcard brice_tao_dynamesh Link "brice_tao_dynamesh.jpg">}}
Captured frame where he looks at the new topology. Teeny tiny quads.
{{< /imgcard >}}

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

{{< imgproc "patri-balanovsky-alien-faces-5" Resize "600x" Link "[url](https://www.artstation.com/artwork/n6X1r)" >}}
faces-5
{{< /imgproc >}}

{{< imgproc "patri-balanovsky-alien-faces-8" Resize "600x" Link "[url](https://www.artstation.com/artwork/n6X1r)" >}}
faces-8
{{< /imgproc >}}

{{< imgproc "patri-balanovsky-alien-faces-12" Resize "600x" Link "[url](https://www.artstation.com/artwork/n6X1r)" >}}
faces-12
{{< /imgproc >}}

Week 8 we’ll use goZ to add stuff in maya and begin work on our final charcter. Learn material fill.

Week 9 polypaint and solve people’s problems workshop.

#### Resources

ZBrush keyboard shortcuts:
[http://docs.pixologic.com/user-guide/keyboard-shortcuts/shortcuts-by-category/](http://docs.pixologic.com/user-guide/keyboard-shortcuts/shortcuts-by-category/)

My aac202 pinterest board.
[https://www.pinterest.com.au/dmacdraws/aac202/](https://www.pinterest.com.au/dmacdraws/aac202/)

My aac202 youtube playlist:
[https://www.youtube.com/playlist?list=PLfWza-ietxyzCD459RKEL6Tg42Tgnq5gE](https://www.youtube.com/playlist?list=PLfWza-ietxyzCD459RKEL6Tg42Tgnq5gE)

The middle tao pai pai video:
{{< youtube "k2TPi-WaO20" >}}
