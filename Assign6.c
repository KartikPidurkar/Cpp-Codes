#include <stdio.h>

long long factorial(int n) {
    if (n == 0 || n == 1) return 1;
    long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int choice, n;
    printf("Enter your choice:\n1. Print natural numbers\n2. Arithmetic operations\n3. Factorial\nChoice: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Enter n: ");
            scanf("%d", &n);
            printf("Natural numbers from 1 to %d: ", n);
            for (int i = 1; i <= n; i++) {
                printf("%d ", i);
            }
            printf("\n");
            break;
        case 2:
            {
                double a, b, res;
                char op;
                printf("Enter operation (+, -, *, /): ");
                scanf(" %c", &op);
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                switch (op) {
                    case '+': res = a + b; printf("Result: %.2f\n", res); break;
                    case '-': res = a - b; printf("Result: %.2f\n", res); break;
                    case '*': res = a * b; printf("Result: %.2f\n", res); break;
                    case '/':
                        if (b != 0) { res = a / b; printf("Result: %.2f\n", res); }
                        else printf("Division by zero!\n");
                        break;
                    default: printf("Invalid operation!\n");
                }
            }
            break;
        case 3:
            printf("Enter n for factorial: ");
            scanf("%d", &n);
            if (n >= 0) {
                printf("Factorial of %d = %lld\n", n, factorial(n));
            } else {
                printf("Factorial not defined for negative!\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}
