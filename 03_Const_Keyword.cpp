#include<iostream>

// Const = The const keyword specifies that a variable value is constant
// tells the compiler to prevent anything form modifying it 
int main(){
    const double PI= 3.1416;

    double radius = 10;
    double circumference = 2*PI*radius;

    std::cout<<circumference <<" cm ";

    // Read only variable 
    // sets const value 




    return 0;
}