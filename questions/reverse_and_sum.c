/*Write a C program to reverse a 5-digit number and find its sum.*/

#include <stdio.h>

// Function to calculate the reverse and sum of digits of a number
void reverse_sum(int num, int *reverse, int *sum) {
    // Loop to reverse the digits and calculate the sum
    while (num) {
        *reverse = 10 * (*reverse) + num % 10; // Reversing the number digit by digit
        *sum += num % 10; // Adding the last digit to the sum
        num /= 10; // Remove the last digit from the number
    }
}

int main() {
    int number, reverse = 0, sum = 0;
    printf("Enter a 5 digit number to get its reverse and sum.\n");
    scanf("%d", &number);

    // Call the reverse_sum function to calculate the reverse and sum
    reverse_sum(number, &reverse, &sum);

    // Print the reverse and sum of digits
    printf("Reverse = %d and Sum = %d\n", reverse, sum);

    return 0;
}
