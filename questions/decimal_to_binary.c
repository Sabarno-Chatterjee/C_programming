/*Write a C program to convert a decimal number to its binary equivalent.*/


#include<stdio.h>
#include<stdlib.h> // For dynamic memory allocation

// Function to print the binary representation of an array
void print_binary(int arr[], int length) {
    for (int i = length - 1; i >= 0; i--)
        printf("%d", arr[i]);
}

// Function to convert a decimal number to its binary equivalent
void binary(int num) {
    // Dynamically allocate memory for the binary_num array
    int* binary_num = (int*)malloc(sizeof(int) * 32); // Assuming 32-bit integers

    if (binary_num == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    int i = 0;
    while (num) {
        binary_num[i] = num % 2;
        num /= 2;
        i++;
    }

    int length_of_array = i; // Number of binary digits
    print_binary(binary_num, length_of_array);

    // Free the dynamically allocated memory
    free(binary_num);
}

int main() {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    binary(decimal);

    return 0;
}
