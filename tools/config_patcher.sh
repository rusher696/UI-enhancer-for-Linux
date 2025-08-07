#!/bin/sh
echo "Patching system UI configs..."
wm density 280
wm overscan reset
setprop persist.sys.ui.hw 1
echo "Done patching."