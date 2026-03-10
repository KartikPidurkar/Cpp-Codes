//Write a c program to create a menu driven program using switch statement for 
// add,sub,mul,divide.
#include<stdio.h>
#include<math.h>
int main(){
    double Total = 0.0;
    double num1 = 0.0;
    double num2 = 0.0;
    char op = '\0';

    printf("Calculator Program\n");
    printf("Enter the Operator(+,-,*,/,%):");
    scanf(" %c",&op);    // clear \n from input buffer
    printf("Enter the 1st number:");
    scanf("%lf",&num1);
    printf("Enter the 2nd number:");
    scanf("%lf",&num2);

    switch(op)
    {
    case '+' :
        Total = num1+num2;
        printf("The total is %.2lf",Total);
        break;

    case '-':
        Total = num1-num2;
        printf("The total is %.2lf",Total);
        break;

    case '*':
        Total = num1*num2;
        printf("The total is %.2lf",Total);
        break;
    case '/':
        if(num2==0){
            printf("Division by zero not allowed");
        }
        else{
            Total = num1/num2;
            printf("The total is %.2lf",Total);
        }
        break;

    case '%':
        Total = fmod(num1,num2);
        printf("The total is %.2lf",Total);
        break;
    default:
        printf("Invalid choice");
        break;
    }




    return 0 ;

}