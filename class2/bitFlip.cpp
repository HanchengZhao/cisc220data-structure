#include<iostream>
#include<bitset>
using namespace std;

int main(){
  char banana = 127;
  char inv_banana = -127;
  char flip = ~banana+1;
  int pseudo_inv_banana = 256 - banana;
  cout << "Banana bits: " << bitset<8>(banana) << endl;
  cout << "iBanana bits: " << bitset<8>(inv_banana) << endl;
  cout << "pseudo-iBanana bits: " << bitset<8>(pseudo_inv_banana) << endl;
  cout << "flip: " << bitset<8>(flip) << endl;
  return 0;
}; 