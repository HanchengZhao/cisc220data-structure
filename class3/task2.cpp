#include <iostream>
#include <cstdlib>

int main() {
    srand(time(NULL));
    std::cout << "Roll a die: " << rand() % 6 + 1 << std::endl;
} 