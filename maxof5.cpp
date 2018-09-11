#include <iostream>

int main() {
    int num1, num2, num3, num4, num5;
    std::cout << "Please enter five integer values: ";
    std::cin >> num1 >> num2 >> num3 >> num4 >> num5;

    std::cout << "The maximum is ";
    if (num1 >= num2 && num1 >= num3 && num1 >= num4 && num1 >= num5)
        std::cout << num1;
    else if (num2 >= num1 && num2 >= num3 && num2 >= num4 && num2 >= num5)
        std::cout << num2;
    else if (num3 >= num1 && num3 >= num2 && num3 >= num4 && num3 >= num5)
        std::cout << num3;
    else if (num4 >= num1 && num4 >= num2 && num4 >= num3 && num4 >= num5)
        std::cout << num4;
    else if (num5 >= num1 && num5 >= num2 && num5 >= num3 && num5 >= num4)
        std::cout << num5;
    std::cout << '\n';
}
