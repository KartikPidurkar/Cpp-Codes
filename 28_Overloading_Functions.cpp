#include<iostream>
#include<string>
using namespace std;

void bakepizza();
void bakepizza(string topping1);
void bakepizza(string topping1,string topping2);

int main(){


bakepizza("chicken","eGGS");


    return 0;
}
void bakepizza(){
    cout<<"Its your Pizza\n"<<endl;
}
void bakepizza(string topping1){
    cout<<"Its your "<<topping1<<" pizza\n";
}
void bakepizza(string topping1,string topping2){
    cout<<"Its your "<<topping1<<"+"<<topping2<<" pizza\n";
}
//Over loading functions