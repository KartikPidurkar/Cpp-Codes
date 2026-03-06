#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;

    if(age>18 && age<100){
        cout<<"You are eligible"<<endl;
    }
    else if(age>100){
        cout<<"You are  not a  human";
    }
    else{
        cout<<"You are not elligible";
    }
    return 0;
}
// If statements  = do something if a condition is true if not then dont do it