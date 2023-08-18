/*Write a C program to generate fibonacci series, using recursion for first 10 terms.*/

#include<stdio.h>

// Recursive function to calculate the Fibonacci number for a given index 'num'
int fibonacci(int x) {
    return ( x<=1 ) ? x : fibonacci(x - 1) + fibonacci(x - 2);
}

int main() {
    int num = 10;
    for (int i = 0; i < 10; i++) {
        printf("%d ", fibonacci(i)); // Print the Fibonacci number for the current index
    }
    return 0;
} 
