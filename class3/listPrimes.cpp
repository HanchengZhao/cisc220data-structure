#include<iostream>
using namespace std;

int isPrime(int num){

    int count = 0;
    for(int i = 1; i <= num; i++){
        if(num % i ==0){
            count++;
        }
    }
    if(count > 2){
        return 0;
    }else{
        return 1;
    }
 
}

int main(){
    cout << "Range: ";
    int range;
    cin >> range;
    for(int i = 1; i <= range; i++){
        if (isPrime(i)){
            cout << i << ", "<<endl;
        }
    }
    return 0;
}