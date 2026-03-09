#include<iostream>
using namespace std;
int main(){

    int number;

    do{
        cout<<"Enter a positive number #:";
        cin>>number;
        }while(number<0);
    cout<<"the # is: "<<number;

    return 0;
}
// Do while loop = do some block of code first 
// then repeat again if condition is true
// the do part code will run atleast once before getting to while condition 