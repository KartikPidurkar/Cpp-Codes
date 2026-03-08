#include<iostream>
using namespace std ;
int main(){
    string name;
    cout<<"Enter the name :"<<endl;
    getline(cin,name);

    //name.insert(0,"@");   // inserts value or ch at a specific position 

    //cout<<name.find(" ")<<endl; // finds the blank spaces

    name.erase(0,3);  // 0 to 3 represents intial and final postion to earse 
    //  i.e(start to end)
    cout<<name<<endl;
    return 0;
}
