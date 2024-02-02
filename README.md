Yet another personal build of Suckless's [dmenu](https://tools.suckless.org/dmenu/).

---

### Patches included:

  - [barpadding](https://github.com/bakkeby/patches/wiki/barpadding/)
    - adds padding between the dmenu window and the edge of the screen
    - intended to be used in combination with the barpadding patch for dwm

  - [border](http://tools.suckless.org/dmenu/patches/border/)
    - adds a border around the dmenu window

  - [highlight](https://tools.suckless.org/dmenu/patches/highlight/)
    - highlights individual characters of matched text for each dmenu list entry

  - [password](https://tools.suckless.org/dmenu/patches/password/)
    - when run with the `-P` flag, dmenu will not directly display the keyboard input, but
      instead censor it with a configurable character
    - default censor character: `*`
    - all data from stdin will be ignored

  - [prefix completion](https://tools.suckless.org/dmenu/patches/prefix-completion/)
    - only items prefixed by the written text will match as opposed to any items containing the
      written text as a substring
    - the `Tab` key will replace the current query with the longest common prefix of all
      matches

  - [scroll](https://tools.suckless.org/dmenu/patches/scroll/)
    - adds support for text scrolling rather than simply appending `...` for long text

  - [numbers](https://tools.suckless.org/dmenu/patches/numbers/)
    - adds text which displays the number of matched and total items in the top right corner of
      dmenu

### Scripts included:

  - `dmenu_run`(\_i)
    - starts commands in a defined `$TERMINAL` when appended with `!`
    - replaces `dmenu_run`
    - taken from [suckless](https://tools.suckless.org/dmenu/scripts/)
  - `dmenu_sudo`
    - `SUDO_ASKPASS` wrapper for dmenu in password mode
  - `dmenu_sys`
    - shows a list of system/power options (lock, logout, shutdown etc.)
    - adapted from [LukeSmithxyz/voidrice](https://github.com/LukeSmithxyz/voidrice)
  - `dmenu_pinentry`
    - integrates dmenu with [GnuPG](https://gnupg.org/) as an alternative pinentry method
    - adapted from [inco-cc/pinentry-dmenu](https://github.com/inco-cc/pinentry-dmenu)

### Other modifications:

  - replaced `CTRL+y`/`CTRL+Y` paste binds with `CTRL+v`/`CTRL+V` respectively
  - "normal/selected" colour scheming replaced with "normal/unselected"
    - `-sb` and `-sf` flags accordingly changed to `-ub` and `-uf` for unselected colours
