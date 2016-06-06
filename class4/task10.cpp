#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main(){
    string *str;
    str = (string * ) malloc(sizeof(string) * 4);
    std::cout << "address of str: " <<str<< std::endl;
    std::cout << "address of str+1: " <<str + 1<< std::endl;
    return 0;
    free(str);
}