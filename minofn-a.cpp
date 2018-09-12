#include <iostream>

int main() {
    std::cout << "Please enter any number of integers less than 999, 999 quits: ";
    int input, min = 999;
    while (true) {
        std::cin >> input;
        if (input >= 999)
            break;
        if (input < min)
            min = input;
    }
    if (min < 999)
        std::cout << "The minimum entered was " << min << ".\n";
    else
        std::cout << "No acceptable numbers entered.\n";
}
