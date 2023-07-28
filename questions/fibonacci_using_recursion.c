/*Write a C program to generate fibonacci series, using recursion for first 10 terms.*/

#include<stdio.h>

// Recursive function to calculate the Fibonacci number for a given index 'num'
int fibonacci(int x) {
    // Base case 1: Fibonacci(0) is 0
    if (x == 0)
        return 0;
    // Base case 2: Fibonacci(1) is 1
    else if (x == 1)
        return 1;
    // Recursive case: Fibonacci(num) = Fibonacci(num-1) + Fibonacci(num-2)
    else
        return fibonacci(x - 1) + fibonacci(x - 2);
}

int main() {
    int num = 10;
    for (int i = 0; i < 10; i++) {
        printf("%d ", fibonacci(i)); // Print the Fibonacci number for the current index
    }
    return 0;
}
