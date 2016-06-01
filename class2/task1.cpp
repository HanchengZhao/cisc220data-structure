#include<iostream>
#include<bitset>
#include<climits>
#include<cmath>
using namespace std;

int main(){
    int num = 1025;
    int num_bits = sizeof(num)*CHAR_BIT;
    cout << "1025 bit length in int: " << bitset<16>(num) << endl;
    cout << "1025 num_bits: " << num_bits << endl;
    char num1;
    num1 = num;
    cout<< num1<<endl;
    int num1_bits = sizeof(num1)*CHAR_BIT;
    cout << "1025 num1_bits: " << num1_bits << endl;
}