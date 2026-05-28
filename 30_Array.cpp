#include<iostream>
#include<string>
using namespace std;
// Array = a data structure that holds multiple values(starts from 0)
//          values are accessed by an index number
//          kind  of like a varible  that holds  multiple  values;
int main(){

    string car[3]; // Specific size if declared values later
    //Values of same datatype.

    car[0] = "Ford";
    car[1] = "BMW";
    car[2] = "Mustang";

    cout<<car[0]<<endl;
    cout<<car[1]<<endl;
    cout<<car[2]<<endl;


    return 0;
}