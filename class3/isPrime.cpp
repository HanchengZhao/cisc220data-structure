#include<iostream>
using namespace std;

int main(){
    int num;
    int count = 0;
    cout <<"Give a number to test: "<<endl;
    cin >> num;
    for(int i = 1; i <= num; i++){
        if(num % i ==0){
            count++;
        }
    }
    if(count > 2){
        cout <<num << " is not a prime."<<endl;
    }else{
        cout <<num << " is a prime."<<endl;
    }
    return 0;
}