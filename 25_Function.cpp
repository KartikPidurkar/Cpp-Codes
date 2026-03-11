#include<iostream>
using namespace std;
void HappyBirthday(string name,int age){
    cout<<"Happy Birthday To You Dear "<< name<<endl;
    cout<<"Cheers to "<<age<<endl;
}
int main(){

string name = "Alex";
int age = 20;

// HappyBirthday("Alex",20); // Function called
HappyBirthday(name,age);
    return 0;
}
//Function  = Block of Reusable code
//You can also declare function first and write the code later after the main function
//Can also rename paramters 