#include<iostream>
using namespace std;
// Sizeof  = Determines the size  in bytes of a:
//           variables, datatypes ,class , objects ,etc. 
int main(){
    double gpa = 8.47;
    string name = "Kartik";
    char grade = 'A';
    bool student  = true;
    string students[] = {"Spongebob","Patrick","Ben"};


    char grades[] = {'A','B','C','D','E'};

    cout<<sizeof(gpa)<<" bytes\n ";
    cout<<sizeof(name)<<" bytes\n ";
    cout<<sizeof(grade)<<" bytes\n";
    cout<<sizeof(student)<<" bytes\n";
    cout<<sizeof(grades)/sizeof(grades[0])<<endl;// to calculate the size of array
    //i.e 5
    cout<<sizeof(students)/sizeof(students[0])<<endl;
    //i.e 3


    return 0;
}