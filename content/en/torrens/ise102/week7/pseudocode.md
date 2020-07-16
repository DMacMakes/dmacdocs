## Pseudocode Menu

### Bullet list

* Display cash total (argument)
* Display choices
* Ask for a choice
* Check if their choice is valid (in the range of choices)
* Show them an appropriate error and make them choose again until they succeed.
* return choice

### Pseudocode

That bit about checking for valid choices is the main thing we haven't done before in the app. 
  * Multiple attempts (and showing errors) needs a loop
  * Not scrolling the screen so we'll have to redraw the whole menu to show errors. Menu is inside the loop then.*
  * 
Also I implified the name of the menu into a screen

```
start DISPLAY_MENU_SCREEN ( with playerCash )
  We need to store:
    A valid range of menu choices.
    Their choice
    A way to remember if the choice was in range so we don't repeat the checking code.
    A relevant error message we can print.

  We loop while validChoice isn't true
    Show the player's cash
    Tell user the menu options and number them
    Show an error if one was previously made
    Get their choice
    If their choice is in range, set validChoice to true
    else set an error message for next loop.
  end while
    
    
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
    
    if choice isnt in range
      error = "Nope, just press a number and hit enter."
    else
      validChoice = true
    end if
  end while
    
end DISPLAY_MENU_SCREEN
```
## Pseudocode Slots

blah