#!/bin/sh

# set wallpaper with feh
feh --bg-fill /home/john2023/.dwm/AnimeWaiting.png 

# killall if running
killall sxhkd dwmblocks autostartdwmbar dunst mpd 

# start compositor
picom --config ~/.dwm/picom.conf &

# start sxhkd
sxhkd &

# start dwmbar config
dwmblocks &

# start dunst notification daemon
dunst -config ~/.dwm/dunstrc &

# Start polkit
exec /usr/lib/polkit-gnome/polkit-gnome-authentication-agent-1 &

# start music daemon
mpd

