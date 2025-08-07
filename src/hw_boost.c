#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void setNonBlockingInput() {
    struct termios settings;
    tcgetattr(0, &settings);
    settings.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(0, TCSANOW, &settings);
    fcntl(0, F_SETFL, O_NONBLOCK);
}

void resetInput() {
    struct termios settings;
    tcgetattr(0, &settings);
    settings.c_lflag |= (ICANON | ECHO);
    tcsetattr(0, TCSANOW, &settings);
}

int main() {
    setNonBlockingInput();
    printf("Input hook active. Press 'r' for run. Press 'q' to quit.\n");
    char ch;
    while (1) {
        ch = getchar();
        if (ch == 'r') {
            printf("Running program...\n");
            system("../build/hw_boost.elf");
        } else if (ch == 'q') {
            printf("Exiting input hook.\n");
            break;
        }
        usleep(100000); // 100ms delay to keep CPU alive
    }
    resetInput();
    return 0;
}
