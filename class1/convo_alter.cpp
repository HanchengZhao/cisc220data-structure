#include<iostream>
using namespace std;

string prompt_user(string input_prompt){
    string reply;
    cout << input_prompt << endl;
    cin >> reply; //only use one of these two lines.
    //getline(cin, reply);
    return reply;
};

int main(){
  string response1 = prompt_user("How are you doing today?");
  cout << "You said: " << response1 << endl;
  string response2 = prompt_user("Is it your birthday?");
   cout << "You said: " << response2 << endl;
  string response3 = prompt_user("What is the weather like tomorrow?");
  cout << "You said: " << response3 << endl;
  return 0;
};