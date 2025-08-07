#include <iostream>
#include <cstdlib>

void menu() {
    std::cout << "\n=== OPTIBLAST UI BOOSTER ===\n";
    std::cout << "[1] Kill UI Animations\n";
    std::cout << "[2] Patch System Config\n";
    std::cout << "[3] Boost GPU Performance\n";
    std::cout << "[4] Exit\n";
    std::cout << "Select an option: ";
}

int main() {
    int choice;
    while (true) {
        menu();
        std::cin >> choice;
        switch (choice) {
            case 1:
                std::system("sh ../tools/animation_killer.sh"); // Runs animation killing file
                break;
            case 2:
                std::system("sh ../tools/config_patcher.sh"); // Runs config patching file
                break;
            case 3:
                std::system("../build/hw_boost.elf"); // Runs .elf file
                break;
            case 4:
                std::cout << "Goodbye!\n"; // Exit
                return 0;
            default:
                std::cout << "Invalid option.\n"; // Catch invalid options
        }
    }
}