#include <iostream>
#include <string>
using namespace std;

class Dog {
    //private by default
    string name;
public:
    Dog(string starter_name){
        name = starter_name;
    }
    void taunt(){ bark(); };
    void read_tag();
protected:
    void bark();
};

void Dog::bark(){
    cout << "Grrr Woof" << endl;
};

void Dog::read_tag(){
    cout << "This dog is named " << name << endl;
}

int main() {
    
    int p[10];
    
    for(int i=0; i<10; i++){
        Dog* p[i] = new Dog("dog");
        (*p[i]).read_tag();
        p[i]->taunt();
        
        delete p[i];
    }
    return 0;
} 