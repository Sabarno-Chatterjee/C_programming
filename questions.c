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

// #include <stdio.h>

// int factorial(int number)
// {
//     if (number == 0)
//     {
//         return 1; // Base case: factorial of 0 is 1
//     }
//     else
//     {
//         return number * factorial(number - 1); // Recursive call
//     }
// }

// int main()
// {
//     int num;
//     printf("Enter a number from 1 to 10 to obtain its factorial: ");
//     scanf("%d", &num);

//     if (num >= 1 && num <= 10)
//     {
//         int result = factorial(num);
//         printf("The factorial of %d is %d.\n", num, result);
//     }
//     else
//     {
//         printf("Invalid input. Please enter a number between 1 and 10.\n");
//     }

//     return 0;
// }

/* Write a program to award grades to students depending upon the criteria
    mentioned below :
    Marks less than 40, ‘E’ grade.
    Marks above 40 but less than 50, ‘D’ grade.
    Marks above 50 but less than 60, ‘C’ grade.
    Marks above 60 but less than 75, ‘B’ grade.
    Marks greater than 75, ‘A’ grade. */

// #include <stdio.h>
// #include <stdbool.h>
// #include <string.h>
// #include <ctype.h>

// // Function to convert a string to uppercase
// void strupper(char *str)
// {
//     int i = 0;
//     while (str[i])
//     {
//         str[i] = (char)toupper((int)str[i]);
//         i++;
//     }
// }

// // Function to assign grades based on marks
// void grade(int marks)
// {
//     if (marks >= 75)
//     {
//         printf("Grade A");
//     }
//     else if (marks >= 60 && marks <= 75)
//     {
//         printf("Grade B");
//     }
//     else if (marks >= 50 && marks <= 60)
//     {
//         printf("Grade C");
//     }
//     else if (marks >= 40 && marks <= 50)
//     {
//         printf("Grade D");
//     }
//     else
//     {
//         printf("Grade E");
//     }
// }

// int main()
// {
//     bool assign_grades = true;
//     int marks;
//     char more_grades;

//     while (assign_grades)
//     {
//         printf("Please enter your marks: ");
//         scanf("%d", &marks);

//         grade(marks);

//         printf("\nWould you like to assign more grades? Enter (Y/N): ");
//         scanf(" %c", &more_grades);

//         strupper(&more_grades); // Convert the input character to uppercase

//         if (more_grades == 'N')
//         {
//             assign_grades = false;
//             printf("Thank you.");
//         }
//     }

//     printf("\n");
//     return 0;
// }

/*Write a program to find the minimum
marks among the given marks of
20 students.*/

#include <stdio.h>

// Function to sort the marks array in ascending order using bubble sort algorithm
void sort(int marks[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            // Swap elements if they are in the wrong order
            if (marks[j] > marks[j + 1])
            {
                int temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int marks[] = {80, 55, 90, 73, 23, 42, 87, 61, 79, 88, 92, 77, 65, 83, 70, 59, 94, 85, 72, 11};
    int size_of_array = sizeof(marks) / sizeof(marks[0]);

    sort(marks, size_of_array);
    printf("The minimum marks is: %d.\n", marks[0]);

    return 0;
}
