---
title: "Week 1: High Poly Props"
linkTitle: "1: High poly props"
weight: 1
description: >
  High resolution modelling in Maya with Subdivision Surfaces. 
  Links to resources to study at home
resources:
- src: "barrel_alvaro_vera.jpg"
  params:
    byline: "Art: Alvaro Vera"
- src: "*alexander-shevchuk.jpg"
  params:
    byline: "Art: Alexander Shevchuk / Artstation"
- src: "*lauren-duke.jpg"
  params:
    byline: "Art: Lauren Duke / Artstation"
---

## Welcome Back

{{< imgproc welcome_back Resize "700x" >}}
Good holiday?
{{< /imgproc >}}

## High Poly?

Last trimester our goal was to make **low poly** props, using **hundreds of triangles**. We'd then create and apply [diffuse](https://docs.unity3d.com/Manual/shader-NormalDiffuse.html) textures, something like you see here:

{{< imgproc barrels_low_poly_textured Resize "500x" >}}
Low poly cartoony barrels.
{{< /imgproc >}}

**High poly** meshes can be made many ways and are **defined differently** depending on whether you're making games or film, whether the year's 2005 or 2020 and so on. Then those high poly details are brought into games on **mid poly** meshes! We'll worry about that later.

For now, let's just concern ourselves with how to:
1. Make a barrel with **many thousands** of polygons 
2. Not make all those polygons individually.

{{< imgproc barrel_high_alexander-shevchuk Resize "650x">}}
High poly, slightly stylised barrel <i>(with normal map)</i>
{{< /imgproc >}}

{{% alert title="Why more polygons?" %}}
The end goal of adding polygons is to support **smoothly curving surfaces** and **fine details**.
{{% /alert %}}

{{< imgproc barrel_high_lauren-duke Resize "650x" >}}
High poly, very stylised barrel <i>(with normal map)</i>
{{< /imgproc >}}

More barrels can be found on my [aac202 Pinterest board](https://www.pinterest.com.au/dmacdraws/aac202/).

## Subdivision Surfaces

Model in quads, with certain rules, let the computer multiply the polygons with smoothing, and you can have smooth curves and sharp corners.

Pros
- You can change long sweeping curves with a single edge move (like a bezier curve)
Cons
- It can quickly get very tricky to achieve some forms.

{{% alert title="More info" %}}
Created at **Pixar**<br />
Maya allows you to **preview** the smoothed form without increasing your polygons.<br />
Can be exported to FBX in smoothed, high density form while remaining low density in Maya.
{{% /alert %}}

Youtube guides
<!--  [Maya Interface Tour on YT](https://www.youtube.com/watch?v=okaC2_NxPYQ&list=PLD8E5717592CF5C26&index=10) -->
{{< youtube okaC2_NxPYQ >}}

## Maya Time

{{< imgproc barrel_alvaro_vera Resize "500x" >}}
Cartoony barrel concept
{{< /imgproc >}}

## Resources

* Interface basics YT: [Interface Intro YT](https://youtu.be/dbjAnutq1vQ)
* Modelling basics YT: [Moving objects lesson YT](https://www.youtube.com/watch?v=1n89UOtMI_Y&list=PLD8E5717592CF5C26&index=7)
* Multi Cut
* Extrude (2019 help?)
* Pureref portable zip
* Link to interface cheat sheet
