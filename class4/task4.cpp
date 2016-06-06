#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "s";
    string *p = &str;
    std::cout << str << std::endl;
    std::cout << *p << std::endl;
    return 0;
}