// // Write a program in 'C' to find  1^2 + 3^2 + 5^2 + 7^2 + 9^2 +...+N^2.
// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int N;
//     double sol = 0;

//     printf("Enter N.\n");
//     scanf("%d", &N);
//     for (int i = 1; i <= N; i++)
//     {
//         if (i % 2 == 1)
//         {
//             sol += pow(i, 2);
//         }
//     }

//     printf("The solution is %.2lf\n", sol);

//     return 0;
// }

// // Write a program in ‘C’ to sort an array of 10 elements in ascending order.

// #include <stdio.h>

// void sort(int array[], int size)
// {
//     for (int i = 0; i < size - 1; i++)
//     {
//         for (int j = 0; j < size - 1 - i; j++)
//         {
//             if (array[j] < array[j + 1])
//             {
//                 int temp = array[j];
//                 array[j] = array[j + 1];
//                 array[j + 1] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", array[i]);
//     }
// }

// int main()
// {

//     int array[10] = {16, 12, 1, 13, 3, 7, 4, 9, 18, 2};
//     int size = sizeof(array) / sizeof(array[0]);

//     sort(array, size);

//     printf("\n");
//     return 0;
// }

// Write a recursive program/function in C to find factorial of a given number between 1 to 10.

#include <stdio.h>

int factorial(int number)
{
    if (number == 0)
    {
        return 1; // Base case: factorial of 0 is 1
    }
    else
    {
        return number * factorial(number - 1); // Recursive call
    }
}

int main()
{
    int num;
    printf("Enter a number from 1 to 10 to obtain its factorial: ");
    scanf("%d", &num);

    if (num >= 1 && num <= 10)
    {
        int result = factorial(num);
        printf("The factorial of %d is %d.\n", num, result);
    }
    else
    {
        printf("Invalid input. Please enter a number between 1 and 10.\n");
    }

    return 0;
}
