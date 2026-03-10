// Write a function to check whether it number is odd or even
#include<stdio.h>
void CheckNumber(int num){
    if(num%2==0){
        printf("It is even number");
    }
    else{
        printf("It is odd number");
    }
}
int main(){

    int num;
    printf("Enter the number you want to check: ");
    scanf("%d",&num);
    CheckNumber(num);
    return 0;
}