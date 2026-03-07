#include<iostream>
using namespace std;
int main(){
    int month;
    cout<<"Enter the Month number(1-12)"<<endl;
    cin>>month;
    switch(month){
        case 1:
        cout<<"January";
        break;
        case 2:
        cout<<"Feb";
        break;
        case 3:
        cout<<"March";
        break;
        case 4:
        cout<<"April";
        break;
        case 5:
        cout<<"May";
        break;
        case 6:
        cout<<"June";
        break;
        case 7:
        cout<<"July";
        break;
        case 8:
        cout<<"Aug";
        break;
        case 9:
        cout<<"Sep";
        break;
        case 10:
        cout<<"Oct";
        break;
        case 11:
        cout<<"Nov";
        break;
        case 12:
        cout<<"Dec";
        break;
        default:
        cout<<"Enter valid month number(1-12)";
        break;

    }
    return 0;
}