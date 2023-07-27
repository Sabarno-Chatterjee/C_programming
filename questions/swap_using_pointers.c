/*Write a C program to swap the values of 2 variables "a" and "b", using pointers.*/

#include <stdio.h>

// Function to swap two integers using pointers
void swap(int *a, int *b) {
    int temp; // Temporary variable to hold the value during the swap
    temp = *a; // Store the value of 'a' in 'temp'
    *a = *b;   // Copy the value of 'b' into 'a'
    *b = temp; // Copy the original value of 'a' (stored in 'temp') into 'b'
}

int main() {
    int a, b;
    printf("Enter two numbers.\n");
    scanf("%d %d", &a, &b); // Taking input for 'a' and 'b' from the user

    swap(&a, &b); // Call the swap function, passing the addresses of 'a' and 'b'

    printf("a = %d\n", a); // Print the value of 'a' after swapping
    printf("b = %d\n", b); // Print the value of 'b' after swapping

    return 0;
}
