#include<iostream>
using namespace std;
double sqaure(double length);
double cube(double length);
int main(){

    double length = 5.0;
    double area = sqaure(length);
    double volume = cube(length);

    cout<<area<<endl;
    cout<<volume<<endl;

    return 0;
}
double sqaure(double length){
  double result = length * length;
        return result;
}
double cube(double length){
  double result = length*length*length;
        return result;
}
//Return = Return a value back to the spot where you called encompassing function
// Need to match with return with data type 