#include <iostream>
#include <cstdlib>

int main() {
    srand(time(NULL));
    std::cout << "rand() Generates a number from 0 to " 
              << RAND_MAX << std::endl;
    std::cout << "Result: " << rand() << std::endl;
} 