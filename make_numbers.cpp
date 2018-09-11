#include <iostream>
#include <cstdlib>

int main() {
    int count = 100;
    while (count > 0) {
        std::cout << rand() % 100 << '\n';
        count--;
    }
    
}
