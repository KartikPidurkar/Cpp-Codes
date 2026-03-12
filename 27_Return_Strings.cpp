#include<iostream>
#include<string>
using namespace std;
string Concatstrngs( string string1,string string2);
int main (){


    string fisrtname = "Elon";
    string lastname = "Musk";
    string fullname = Concatstrngs(fisrtname,lastname);

    cout<<"Hello "<<fullname;

    return 0;
}
string Concatstrngs(string string1,string string2){
    return string1 + " " + string2;
}
// Match return type to the datatype of the function 