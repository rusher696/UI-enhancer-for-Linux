#!/bin/sh
echo "Killing system animations..."
settings put global window_animation_scale 0
settings put global transition_animation_scale 0
settings put global animator_duration_scale 0
echo "Animations dead."