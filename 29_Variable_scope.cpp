#include<iostream>
using namespace std;
int num = 30; // global variable , accessible to all function if called :: scope op(using)
void printnum(int num);

int main(){

    int num = 1; // Local variable to the main function
    printnum(num);
    cout<< ::num <<endl;

    return 0;
}
void printnum(int num){
     num = 2;
    cout<< ::num << " local " <<endl;
}
// To use global variable use scope resolution operator