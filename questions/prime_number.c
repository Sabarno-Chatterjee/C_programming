/*Write a program to check whether a given number is a prime number or not.*/

#include <stdio.h>

// Function to check if a number is prime
void prime(int num) {
    int flag = 1; // Initialize a flag variable to assume the number is prime

    // Loop to check for factors of the number up to num/2
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0 && num != 2) {
            flag = 0; // If a factor is found (other than 1 and the number itself), set flag to 0 (not prime)
            break;    // Exit the loop as we don't need to check further
        }
    }

    if (flag == 1)
        printf("%d is a prime number.\n", num); // If the flag remains 1, the number is prime
    else
        printf("%d is not a prime number.\n", num); // If the flag is changed to 0, the number is not prime
}

int main() {
    int number;
    printf("Enter a number to check for prime.\n");
    scanf("%d", &number); // Taking input from the user

    prime(number); // Call the prime function to check if the number is prime or not

    return 0;
}
