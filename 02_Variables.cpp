#include<iostream>

int main(){
    int x; // Declaration
    x=8;   // Assignment
    std::cout << x << std::endl;
    /*
    integer(int)- whole number
    double(double)-number with decimal
    char(char)-'a' alphabets store 1 chracter
    bool(true or false) bool student = true
    string(objects that represents a sequence of text)
    */
   std::string name = "Kartik";
   std::string day = "Friday";
   int age = 20;

   std::cout << name <<std::endl; // don t use double quotes while printing outputs or string 
   std::cout <<"Hello Pidurkar!  " << name << '\n'; // string literal
   std::cout <<"You are " << age << " years old";


    return 0;
}