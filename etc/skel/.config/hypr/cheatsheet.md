# Hyprland CheatSheet #

  Super = Windows Key

# common operations
  Super          Return   *term* (`kitty`)
  Super          q        *quit* (kill focused window)
  Super   Shift  q        *quit* (kill focused window)
  Super          d        *show app menu* (`wofi small`)
  Super   Shift  d        *show app menu* (`wofi large`)
  Super          x        *show archlinux-logout* (lock/suspend/logout/reboot/shutdown)
  Super   Shift  r        *reload config files* (`sway reload`)
  Super          Escape   *kill application*

# screenshot
  PrintSrc                *full screenshot*
  Shift  PrintSrc         *active window screenshot*
  Ctrl   PrintSrc         *full screenshot + timer*

# application shortcuts
  Ctrl    Shift U         *pavucontrol*
  Ctrl    Shift P         *pamac-manager*
  Super   Shift  Return   *file manager* (`thunar`)
  Super   F1              *browser* (`firefox`)

# container layout
 
  Super   Shift   Space       *toggle tiling/floating mode*
  Super   left mouse button   *move window*
  Super   right mouse button  *resize window*

# workspaces
  Super         1 .. 0    *switch to workspace 1 .. 10*
  Super  Shift  1 .. 0    *move container to workspace 1 .. 10*

# notes
  - *Hyprland* configuration files are in `~/.config/hypr/`.
    Read all the files with the editor of your choice.
    More keybindings are included in the config.
  - *Waybar* is documented through man pages - `man waybar`. 
  - *Wofi* is documented through man pages - `man wofi`.
  - *Multimedia keys* - may not work for every keyboard
    may need to hold down the function (`fn`) key
  - Follow the ultimate guide - https://wiki.hyprland.org/