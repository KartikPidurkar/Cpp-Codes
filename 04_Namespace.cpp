#include<iostream>

namespace first{
    int x=1;
}
namespace second{
    int x=2;
}
int main(){
    using namespace first;
    //int x =0;

   //  std::cout << x; If we dont declare the namespace the local one will be used
   //std::cout << first::x; // Declaring the name space ::-scope resolution operator
    std::cout <<x;  
    return 0;
}
// Namespace = provides solutions for preventing name conflicts in large projects
// each entity needs a unique name.
// a namespace allows for indentically named entities aslongas the namespace are diffrent