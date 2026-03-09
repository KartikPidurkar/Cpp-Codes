#include<iostream>
using namespace std;
int main(){

    string name;
    while(name.empty()){
        cout<<"Enter your name:";
        getline(cin,name);
    }
    cout<<"Hello "<<name;

    return 0;
}
//The while loop will run infinite times until the condition is true 
// and will stop when it becomes false.
