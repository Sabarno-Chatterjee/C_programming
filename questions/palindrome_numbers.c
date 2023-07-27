/*Write an interactive 'C' Program to check whether the given number is a palindrome or not ?*/ 

#include <stdio.h>

// Function to check if a number is a palindrome
int palindrome(int num) {
    int reverse = 0, original_num = num;
    while (num != 0) {
        reverse = reverse * 10 + num % 10; // Reversing the number digit by digit
        num /= 10;
    }
    return (original_num == reverse) ? 1 : 0; // Returning 1 if the number is palindrome, otherwise 0
}

int main() {
    int number;
    printf("Enter a number to check for palindrome.\n");
    scanf("%d", &number); // Taking input from the user

    if (palindrome(number))
        printf("The number %d is a palindrome.\n", number); // If the function returns 1, it's a palindrome
    else
        printf("The number %d is not a palindrome.\n", number); // If the function returns 0, it's not a palindrome

    return 0;
}
