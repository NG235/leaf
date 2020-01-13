#include <iostream>

void red(std::string input) {
    std::cout << "\033[0;31m" << input << "\033[0m";
}

void green(std::string input) {
    std::cout << "\033[0;32m" << input << "\033[0m";
}

void yellow(std::string input) {
    std::cout << "\033[0;33m" << input << "\033[0m";
}

void blue(std::string input) {
    std::cout << "\033[0;34m" << input << "\033[0m";
}

void magenta(std::string input) {
    std::cout << "\033[0;35m" << input << "\033[0m";
}

void cyan(std::string input) {
    std::cout << "\033[0;36m" << input << "\033[0m";
}