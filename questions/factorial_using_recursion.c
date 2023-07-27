/*Write a C program to find the factorial (using recursion) for a given number.*/


#include<stdio.h>

// Recursive function to calculate the factorial of a number
int factorial(int num) {
    // Base case: If the number is 0 or 1, the factorial is 1
    return (num == 1 || num == 0) ? 1 : num * factorial(num - 1);
}

int main() {
    int number;
    printf("Enter a number to obtain its factorial.\n");
    scanf("%d", &number);

    // Call the factorial function to calculate the factorial of the input number
    int result = factorial(number);

    // Display the result
    printf("The factorial of %d is %d\n", number, result);

    return 0;
}
