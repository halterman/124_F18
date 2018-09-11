#include <iostream>

int main() {
    int num1, num2, num3, num4, num5;
    std::cout << "Please enter five integer values: ";
    std::cin >> num1 >> num2 >> num3 >> num4 >> num5;

    int max = num1;
    if (num2 > max)
        max = num2;
    if (num3 > max)
        max = num3;
    if (num4 > max)
        max = num4;
    if (num5 > max)
        max = num5;
    std::cout << "The maximum is " << max << '\n';
}
