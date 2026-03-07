#include<iostream>
using namespace std;
int main(){
    int temp;
    cout<<"Enter the temprature:"<<endl;
    cin>>temp;

    //if(temp>=0 || temp<=30) this is always true

    if(temp>0 && temp<30){
        cout<<"Temp is normal or regular";
    }
    else{
        cout<<"The temp is bad";
    }
    return 0;
}

// && AND operator both condition must be true
// || OR operator at least condition must be true
// ! NOT operator reverse the logic or output