/*Write a C program to convert a decimal number to its binary equivalent.*/


#include <stdio.h>

// Function to print the binary representation of an array
void print_binary(int i, int binary[]) {
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
}

// Function to convert a decimal number to its binary equivalent
void decimalToBinary(int num) {
    int i = 0, binary[32]; // Assuming 32-bit integers, you can adjust this size as needed

    // Handle the case when the number is 0 separately
    if (num == 0) {
        printf("Binary: 0\n");
        return;
    }

    // Convert the decimal number to binary
    while (num) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    // Print the binary representation
    printf("Binary: ");
    print_binary(i, binary);
    printf("\n");
}

int main() {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Call the decimalToBinary function to convert and print the binary representation
    decimalToBinary(decimal);

    return 0;
}

