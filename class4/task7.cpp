#include <iostream>
#include <cstdlib>
using std::cout;
using std::endl;

int main() {
    long l_array[10];
    
    for(int i = 0; i < 10; i++){
        l_array[i] = i*i;
        cout << "value at " 
             << i 
             << " is: "
             << l_array[i]
             << endl;
    }
    
    for(int i = 0; i < 10; i++){
        cout << "address of l_array[" 
             << i 
             << "] is: "
             << &l_array[i]
             << endl;
    }
    std::cout << "l_array: " <<l_array<< std::endl;
    std::cout << "l_array + 3: " <<l_array + 3<< std::endl;

    // cout << "value of plain array_of_ints: "<< array_of_ints << endl;
    // for (int i = 1; i < 5; i++){
    //     cout << "value of crazy pointer arith.: " << array_of_ints + i << endl;
    // }
    
    // for (int i = 0; i < 5; i++){
    //     cout << "crazy pointer dereference: " << *(array_of_ints + i) << endl;
    // }
} 