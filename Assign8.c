// write a function to find square and cube of number
#include<stdio.h>
void power(int num){
    int Square;
    int cube;
    Square = num * num ;
    cube = num * num * num ;
    printf("Square = %d \ncube = %d ",Square,cube);
}
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    power(num);
    return 0;
}