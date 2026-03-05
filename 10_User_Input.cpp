#include<iostream>
using namespace std;
int main(){

    string name;
    int age;
    cout<<"What's your name"<<endl;
    //cin>>name;
    getline(cin>>ws, name); // ws used to eliminate new line buffer 
    // genrally happens when cin is used before getline function 
    // Used to store value after blank spaces
    cout<<"What is your age"<<endl;
    cin>>age;
    
    cout<<"Hello "<<name<<"  age- "<< age<<endl;





    return 0;
}



//Cout<< (insertion operator)
//Cin>> (extraction operator)
