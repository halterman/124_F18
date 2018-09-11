#include <iostream>

int main() {
    std::cout << "Please enter any number of integers, Q quits: ";
    int input, max;
    std::cin >> max;
    while (std::cin >> input) {
        if (input > max)
            max = input;
    }
    std::cout << "The maximum entered was " << max << ".\n";
}
