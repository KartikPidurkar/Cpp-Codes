#include<iostream>
using namespace std;
int main(){

    int students = 20;
    students +=1;
    cout<<students<<endl;
    students -=1;
    cout<<students<<endl;
    students *=2;
    cout<<students<<endl;
    students /=2;
    cout<<students<<endl;

    int remainder = students % 2;
    cout<<remainder;


    return 0;
}
// Airthmetic Operators = return the result of a specific airthmetic operation
// (+ - * / %)