---
title: "ISE102 Resources"
linkTitle: "Resources"
weight: 1
description: >
  Resources that we'll use in **ise102** throughout this trimester.
---

## ISE102 Textbook

We don't just have a pretty good textbook, _**"Beginning C++ Through Game Programming"**_, we have free access to it.

You can read it online or download PDF chapters from Ebook Central:

{{< imgproc book_cpp_through_games Resize "250x" Link "https://ebookcentral-proquest-com.ezproxy.laureate.net.au/lib/think/detail.action?docID=3136727" >}}
Click to read
{{< /imgproc >}}

**Download chapters** below in PDF format:

| Link       | Topics/features covered  |  
| ---- | ---- |  
| [Chapter1 ](cpp_through_games_1.pdf)  | Types, Variables, Input and Output |  
| [Chapter2 ](cpp_through_games_2.pdf) | Truth, Branching, `while` Looops, `do` loops, logical operators, random numbers |  
| [Chapter3 ](cpp_through_games_3.pdf) | `for` Loops and nesting, String objects, `array` (collections), multi-dimensional arrays, word jumble. |  
| [Chapter4](cpp_through_games_4.pdf) | `vector` collections, algorithms library, planning with pseudocode (hangman). |  
| [Chapter5](cpp_through_games_5.pdf) | Functions, including scope, arguments, overloading. |  

## Subject Software Installs  

{{% alert title="Important: Windows Required" color="primary" %}}
The software and projects in this subject require the _Windows Operating System_.

If you run a different operating system on your laptop/home machine, there are free solutions. See the instructions at the [end of this page](#windows-options).
{{% /alert %}}

## C++: Microsoft Visual Studio Community 2019
We'll write C++ in a free version of Microsoft's industry standard development environment. Take care to select the **Community** edition for **Windows**.
<div class="mx-auto">
	<a class="btn btn-lg btn-primary mr-3 mb-4" href="https://visualstudio.microsoft.com/vs/" target="_blank">Visual Studio 2019 Downloads<i class="fas fa-arrow-alt-circle-right ml-2"></i>
	</a>
</div>

For help with installation and getting started, visit Microsoft's [walkthrough documentation](https://docs.microsoft.com/en-gb/visualstudio/get-started/visual-studio-ide?view=vs-2019) or watch [their videos](https://visualstudio.microsoft.com/vs/getting-started/).

What's critical for us is that, when asked what `Workloads` you want to install, you **select _Desktop development with C++_** and _Install while downloading_. Then click _install_ or _modify_, whatever the bottom right button is.

![Desktop development with C++](visual_studio_cpp_desktop.png)

### Handy extra: JDoodle
This isn't an install, but instead a on online C++ ide where you can type out and test snippets of code without starting a new Visual Studio solution.

<div class="mx-auto">
	<a class="btn btn-lg btn-primary mr-3 mb-4" href="https://www.jdoodle.com/online-compiler-c++17/" target="_blank">JDoodle C++<i class="fas fa-arrow-alt-circle-right ml-2"></i>
	</a>
</div>

## Flowgorithm

Flowchart-based programming with Flowgorithm.

If you have **your own machine**, pick "Flowgorithm Setup" and download the Windows 64 version.
If you're on a uni PC, click "Flowgorithm Portable".

<div class="mx-auto">
	<a class="btn btn-lg btn-primary mr-3 mb-4" href="http://flowgorithm.org/download/index.htm" target="_blank">Flowgorithm Setup<i class="fas fa-arrow-alt-circle-right ml-2"></i>
	</a>
  <a class="btn btn-lg btn-primary mr-3 mb-4" href="flowgorithm_portable.zip" target="_blank">Flowgorithm Portable<i class="fas fa-arrow-alt-circle-right ml-2"></i>
	</a>
</div>

{{% alert title="Using Portable Software" color="primary" %}}
Portable software can run straight from its folder, no install required.

1. Create a folder called `portable` in your home folder (`c:\Users\yourname\portable`) where `yourname` is whatever username you use in Windows.
2. Unzip `flowgorithm_portable.zip` into there. It'll create a Flowgorithm folder.
3. Go into that folder and double click `Flowgorithm.exe` to run it.

![](portable_folder_flowgorithm.png)

{{% /alert %}}



## Visual Studio C++ Templates

Setting up projects for quick and easy exercise coding can be a little daunting. These templates, imported into Visual Studio 2019, will get you started.

### Basic Console Program Template

We'll use this as a starting point for new projects. Click to download:

<a class="btn btn-lg btn-primary mr-3 mb-4" href="/torrens/ise102/resources/ise102_console.zip">Download ise102_console<i class="fas fa-arrow-alt-circle-right ml-2"></i>
</a>

Next:  
1. Make sure Visual Studio is closed/not running.  
2. Move `ise_console.zip` from your `Downloads` folder to the `C:\Users\yourname\Documents\Visual Studio 2019\Templates\ProjectTemplates\` folder. Do not unzip it.  
3. Open Visual Studio and choose **New Project**  
4. Type `ise102` into the search box, then choose `ise102 console` and click _Next_.
![ise102_console](new_project_ise102_console.png)  
5. Enter a **Project name** and a **Location** were its folder can be created. Use a folder you'll remember and find again like `d:\torrens\subjects\ise102\code\week1`. If you're working on a Uni machine, use a usb drive or external hdd so you can take your work with you.  
![project details](project_setup_vs_2019.png)  
6. Check "Place solution and project in the same directory". Hit **Create**  
7. Visual studio will now open your Solution/Project. Expand the `Source Files` folder in the **Solution Explorer** and double click `main.cpp` to view your source code.  
![Project Open](project_open_main_cpp.png)  
  
## Sololearn C++ Tutorial

Sololearn provides a system for learning a new programming language: It's structured to both teach and quiz you at each stage progress, helping to confirm understanding and lock in what you learn.

![Sololearn](../week4/sololearn_cpp.png)

Download from the [iOS App Store](https://apps.apple.com/us/app/sololearn-learn-to-code/id1210079064) (iPhone) or [Google Play](https://play.google.com/store/apps/details?id=com.sololearn&hl=en_AU) (Android). 
- You want just _SoloLearn_, not a specialised older version. 
- Create an account to log in
- Under _My Courses_ Grab the _C++ Tutorial_
- Put the app on your phone's home screen and start doing it today! Do not put it off or you'll forget it exists.
- After you answer a question, read the comments to see how other people fared or what tips they offer. 
- Read up to and including data types: you can stop when you reach arrays.

## Windows Options  

### 1. Install Inside/Alongside Your OS

If you are on a **Mac** or **Linux** laptop [Download this Windows iso](https://laureateaus-my.sharepoint.com/:u:/g/personal/daniel_mcgillick_laureate_edu_au/EUs2E8Oj_-dNroXMb_tg0O8BhM4nTzv3g98UZ4VPnlmRCQ?e=digodN) (free unactivated). You can then either:

1a. Install Windows in a **virtual machine** using [Virtual Box](https://www.virtualbox.org/wiki/Downloads) (free) **or**  
1b. Install Windows alongside your main OS and **dual boot** using bootcamp (Mac) or grub (Linux)  
  
### 2. Use A Lab Computer  

The lab computers run Windows.

Okay, back to [Subject Sofware Installs](#subject-software-installs)


<!--
### Text-Mode Game Template

This will add _**ise102 text mode game**_ to your _new project_ window.

_text_mode_game_template.zip_

<a class="btn btn-lg btn-primary mr-3 mb-4" href="/torrens/ise102/resources/text_mode_game_template.zip">
  Download<i class="fas fa-arrow-alt-circle-right ml-2"></i>
</a>

## Starter Projects

**ADD STARTER PROJECTS FOR WEEKLY CODE ALONG**?
-->