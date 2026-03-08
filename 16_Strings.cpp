#include<iostream>
using namespace std ;
int main(){
    string name;
    cout<<"Enter the name :"<<endl;
    getline(cin,name);

    if(name.length()>12){
        cout<<"Cant be longer than 12 chracters"<<endl;
    }
    else{
        cout<<"welcome "<<name<<endl;
    }
    return 0;
}