//use a switch statement to write a simple calculator read two integers and an operator ( +,_,*,/,%) and print the result ;


#include <stdio.h>

int main() {
    int a, b;
    char op;

    scanf("%d", &a);

    scanf("%d", &b);

    scanf(" %c", &op);

    switch(op) {
        case '+':
            printf("Result = %d\n", a + b);
            break;

        case '-':
            printf("Result = %d\n", a - b);
            break;

        case '*':
            printf("Result = %d\n", a * b);
            break;

        case '/':
            if(b != 0)
                printf("Result = %d\n", a / b);
            else
                printf("Error! Division by zero.\n");
            break;

        case '%':
            if(b != 0)
                printf("Result = %d\n", a % b);
            else
                printf("Error! Modulo by zero.\n");
            break;

        default:
            printf("Invalid operator.\n");
    }

    return 0;
}