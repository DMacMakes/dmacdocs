---
title: "Homework 7"
linkTitle: "- Homework 7"
weight: 71
description: >
  Showing my thought and pseudocode process as I make a menu loop with input checking.
type: "torrens"
---

## Homework task

**After you have read and understood my planning and pseudocode below,** type out the code at the end of this page and fill in the gaps to complete it.

There's a **slight extension this time:** Email your main.cpp file to Matt by **4pm Monday**.

## The menu loop

I want the menu to **handle bad input gracefully**. This isn't just because it's good practice: **in the brief, 15%** of the marks go toward user testing and data validity checks:

![](brief_data_validity.png)

So we'll catch mistakes and prompt the user to try again. At a minimum, if they enter a number that isn't a menu choice, should be caught and an error message shown.

![](menu_input_check.png)

First, here's a simple bullet list breakdown.

* Display cash total (argument)
* Display choices
* Ask for a choice
* Check if their choice is valid (in the range of choices)
* Show them an appropriate error and make them choose again until they succeed.
* return choice

### Planning

Note, firstly, I've changed the name from displayMenuGetChoice. It's consistent with other functions now. The function signature and intellisense (little popup on hover) tell us the return value.

The main problem to solve is checking input and showing errors to the player. 
  * Multiple attempts (and showing errors) requires a loop
  * Screen isn't scrolling so redraw the whole menu to show errors. Whole menu is inside the loop then.  
  * Since we clear and redraw screen to show error, we'll need to remember the error. (Can't just write it to screen as soon as it's discovered)


## Pseudocode 

{{< alert title="First pass" color= "primary" >}}
Thinking about the problem in a high level way, but with coding structure (A halfway point between bullet list and pseudocode).

```
start DISPLAY_MENU_SCREEN ( with playerCash )
  Things to store:
    A valid range of menu choices.
    Their choice
    A way to remember if the choice was in range so we don't repeat the checking code.
    A relevant error message we can print.

  Processing to do:
  loop while validChoice isn't true
    Show the player's cash
    Tell user the menu options and number them
    Show an error if one was previously made
    Get their choice
    If their choice is in range, set validChoice to true
    else set an error message for next loop.
  end while
    
```
{{< /alert >}}

{{< alert title="Second pass" color= "secondary" >}}
Time to plan the structure properly, with variable names (storage), output, conditionals (processing) and input.

```
start DISPLAY_MENU_SCREEN ( playerCash )
  error = ""
  validChoice = false
  choice = 0;
  
  while not validChoice
    
    print "You have " $playerCash
    print menu choices
    print error (if it's not empty/blank)
    print "Enter 1 2 or 3 >"
    
    choice = player input
    if choice isnt in range
      error = "Nope, just press a number and hit enter."
    else
      validChoice = true
    end if
  end while
    
end DISPLAY_MENU_SCREEN
```
{{< /alert >}}

## Fill in the missing code

Here's my fairly straight conversion from pseudocode to C++.

To do this you'll need to **read the sections above**. Also notice the **new text** in `displayExitScreen` and `displayCreditScreen`. Heed it!

{{< alert title="Option 1" color= "primary" >}}
**Take your up to date base code** from the week 7 class and, using the code below:

1. **Add** the `enum MenuChoices`
2. Modify your **displayMenuGetChoice** to the new `displayMenuScreen` function below. 
3. Add the "DO NOT HAND THIS IN UNCHANGED" text to your credits and exit screen if you haven't customised them.
3. **Fill in the missing code**. 
 
<i>Note: Underlines in the gaps wil be white or green, it's a syntax hilighting quirk</i>
{{< /alert >}}

{{< alert title="Option 2" color= "secondary" >}}
1. Create a new project 
2. Enter the following code including comments
3. **Fill in the missing code**. 

<i>Note: Underlines in the gaps wil be white or green, it's a syntax hilighting quirk</i>
{{< /alert >}}

{{< imgproc code_hw7_finish_menu Resize "900x" Link "code_hw7_finish_menu.png" >}}
<i>Click/middle click image for full size</i>
{{< /imgproc >}}