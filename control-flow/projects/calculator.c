#include <stdio.h>
#include <stdbool.h>

int main(){
    char operator = '\0';     // stores chosen operator
    bool validOperation = 1;  // flag to check valid input
    double n1 = 0.0f;         // first number
    double n2 = 0.0f;         // second number
    double total = 0.0f;      // calculation result

    printf("Simple Calculator!\n\n");

    printf("Pick an operator (+ - * /)\n");
    printf("Enter: ");
    scanf("%c", &operator);

    // validate operator
    if(operator != '+' && operator != '-' && operator != '*' && operator != '/'){
        validOperation = 0;
    }
    else if(validOperation){
        // input numbers if operator is valid
        printf("\nEnter your first number: ");
        scanf("%lf", &n1);

        printf("Enter your second number: ");
        scanf("%lf", &n2);
    }

    // perform operation
    switch(operator){
        case '+':
            total = n1 + n2;
            break;

        case '-':
            total = n1 - n2;
            break;

        case '*':
            total = n1 * n2;
            break;

        case '/':
            if(n2 == 0){
                printf("\nYou can't divide by zero!");
                validOperation = 0;
            }
            else{
                total = n1 / n2;
            }
            break;

        default:
            printf("\nPlease enter a valid operator");
    }

    // show result if valid
    if(validOperation){
        printf("The total is %.2lf", total);
    }

    return 0;
}