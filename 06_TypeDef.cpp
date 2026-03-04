#include<iostream>
#include<vector>

// typedef std::vector<std::pair<std::string,int >> pairlist_t;
//typedef std::string text_t;
//typedef int number_t;

using text_t = std::string;
using number_t = int;

int main(){
using namespace std;

    text_t firstname = "Kartik";
    cout<<firstname <<endl;
    number_t digit = 34;
    cout<<digit;

    return 0;
}

// Typdef = reserved keyword used to create an additioinal name(alias) for another 
// data type. New Identifier for an existing type 
// Helps with readability and reduces typos
// Replaced with 'using' work better with templates