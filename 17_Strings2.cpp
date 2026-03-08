#include<iostream>
using namespace std ;
int main(){
    string name;
    cout<<"Enter the name :"<<endl;
    getline(cin,name);

    if(name.empty()){
        cout<<"Did not entertred any name "<<endl;
    }
    else{
        cout<<"welcome "<<name<<endl;
    }
    return 0;
}
//empty function for strings