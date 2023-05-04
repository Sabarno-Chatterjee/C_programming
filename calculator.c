#include <stdio.h>

int main()
{
    char operator;          // declare char variable for operator
    float num1, num2, calc; // declare float variables for numbers and calculation result

    printf("\nEnter the first number.\n");
    scanf("%f", &num1); // read first number from user input

    printf("\nWhich calculation do you want to perform +, -, *, /. \n");
    scanf(" %c", &operator); // read operator from user input (add a space before %c)

    printf("\nEnter the second number.\n");
    scanf("%f", &num2); // read second number from user input

    switch (operator)
    {
    case '+':
        calc = num1 + num2; // perform addition
        break;
    case '-':
        calc = num1 - num2; // perform subtraction
        break;
    case '*':
        calc = num1 * num2; // perform multiplication
        break;
    case '/':
        calc = num1 / num2; // perform division
        break;

    default:
        printf("Enter valid values."); // if operator is not one of the above, print error message
        break;
    }

    printf("%.2f %c %.2f = %.2f\n", num1, operator, num2, calc); // print result

    return 0;
}
