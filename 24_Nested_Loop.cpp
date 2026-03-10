#include<iostream>
using namespace std;
int main(){
    int rows; //Horizontal
    int columns; // Vertical 
    char symbol;

    cout<<"Enter the number of rows: "<<endl;;
    cin>>rows;
    cout<<"Enter the number of columns"<<endl;
    cin>>columns;
    cout<<"Enter the symbol: ";
    cin>>symbol;
    
    for(int i = 1; i<=rows ; i++){
        for(int j = 1; j<=columns ; j++){
            cout<<symbol<<" ";
        }
        cout<<" \n "<<endl;
    }
    return 0;
}