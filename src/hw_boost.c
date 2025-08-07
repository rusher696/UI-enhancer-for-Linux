#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Boosting system UI...");
    system("settings put global window_animation_scale 0");
    system("settings put global transition_animation_scale 0");
    system("settings put global animator_duration_scale 0");
    system("setprop persist.sys.ui.hw 1");
    system("wm density 280");
    system("wm overscan reset");
    printf("Boost complete.\n");
    return 0;
}
