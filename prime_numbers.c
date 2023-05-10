#include <stdio.h>
#include <stdbool.h>

void check_prime(int number)
{
    bool is_prime = true;

    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            is_prime = false;
            printf("%d is not a prime number.\n", number);
            break;
        }
    }
    if (is_prime)
    {
        printf("%d is a prime number.\n", number);
    }
}

int main()
{
    int num;

    printf("Enter a number to check for prime.\n");
    scanf("%d", &num);
    if (num == 1)
    {
        printf("1 is neither prime nor composite.");
        printf("Enter a number again.\n");
        scanf("%d", &num);
    }
    check_prime(num);
    return 0;
}