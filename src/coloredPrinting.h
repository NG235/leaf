#include <iostream>

using std::cout;
using std::string;

void red(string input) {
    cout << "\033[0;31m" << input << "\033[0m";
}

void green(string input) {
    cout << "\033[0;32m" << input << "\033[0m";
}

void yellow(string input) {
    cout << "\033[0;33m" << input << "\033[0m";
}

void blue(string input) {
    cout << "\033[0;34m" << input << "\033[0m";
}

void magenta(string input) {
    cout << "\033[0;35m" << input << "\033[0m";
}

void cyan(string input) {
    cout << "\033[0;36m" << input << "\033[0m";
}