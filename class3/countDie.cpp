#include <iostream>
#include <cstdlib>

int main() {
    srand(time(NULL));
    int histogram[6] = {0,0,0,0,0,0};
    for(int i = 0; i < 100; i++){
        int die = rand() % 6;
        histogram[die]++;
    }
    for(int j = 0; j < 6; j++){
        std::cout << "Count of " << j+1 <<": "<< histogram[j] << std::endl;
    }
    
} 