#include<iostream>
using namespace std;
int main(){

    for(int i = 1 ; i<=20 ; i++){
        if(i==13){
            break;   // Breaks the loop and stops at 12--iteration
            //continue; // skips over the iteration 13 and continues the rest
        }
        cout<<i<<endl;
    }




    return 0;

}
// Break = Break out of loop 
//Continue = Skip current iteration