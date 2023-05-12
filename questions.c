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

// #include <stdio.h>

// // Function to sort the marks array in ascending order using bubble sort algorithm
// void sort(int marks[], int size)
// {
//     for (int i = 0; i < size - 1; i++)
//     {
//         for (int j = 0; j < size - 1 - i; j++)
//         {
//             // Swap elements if they are in the wrong order
//             if (marks[j] > marks[j + 1])
//             {
//                 int temp = marks[j];
//                 marks[j] = marks[j + 1];
//                 marks[j + 1] = temp;
//             }
//         }
//     }
// }

// int main()
// {
//     int marks[] = {80, 55, 90, 73, 23, 42, 87, 61, 79, 88, 92, 77, 65, 83, 70, 59, 94, 85, 72, 11};
//     int size_of_array = sizeof(marks) / sizeof(marks[0]);

//     sort(marks, size_of_array);
//     printf("The minimum marks is: %d.\n", marks[0]);

//     return 0;
// }

/*Write a program to find the string length without using strlen( ) function.*/

// #include <stdio.h>

// // Function to calculate the length of a string
// int string_length(char string[])
// {
//     int count = 0;
//     // Loop until the null terminator is encountered
//     while (string[count] != '\0')
//     {
//         count += 1;
//     }
//     return count;
// }

// int main()
// {
//     char string[20];
//     printf("Please enter a string to obtain its length.\n");
//     scanf("%s", string);

//     // Call the string_length function to get the length of the string
//     printf("The length of the string is: %d.\n", string_length(string));
//     return 0;
// }

/*Write a program to search an element in a
given list of 20 elements using linear
search.*/

// #include <stdio.h>

// int main()
// {
//     int numbers[] = {17, 5, 22, 8, 14, 10, 3, 19, 27, 13, 6, 2, 11, 25, 7, 16, 1, 9, 4, 12};
//     int num, is_true = 1;

//     printf("Enter the number you would like to search.\n");
//     scanf("%d", &num);

//     // Linear search algorithm
//     for (int i = 0; i < 20; i++)
//     {
//         if (num == numbers[i])
//         {
//             printf("The number exists at index %d.\n", i);
//             is_true = 0;
//             break;
//         }
//     }

//     if (is_true)
//     {
//         printf("The number does not exist in the list.\n");
//     }

//     return 0;
// }

/*Write a program to concatenate two strings
without using the strcat( ) function.*/

// #include <stdio.h>

// void concate(char string1[], char string2[])
// {
//     char result[30]; // Buffer to store the concatenated string
//     int i, j;

//     // Copy characters from string1 to result
//     for (i = 0; string1[i] != '\0'; i++)
//     {
//         result[i] = string1[i];
//     }

//     // Append characters from string2 to result
//     for (j = 0; string2[j] != '\0'; j++)
//     {
//         result[i + j] = string2[j];
//     }

//     result[i + j] = '\0'; // Add the null-terminating character at the end
//     printf("The concatenated string is: %s.\n", result);
// }

// int main()
// {
//     char string1[15], string2[15];

//     printf("Enter the first string: \n");
//     scanf("%s", string1);

//     printf("Enter the second string: \n");
//     scanf("%s", string2);

//     concate(string1, string2); // Call the concatenation function

//     return 0;
// }

/*Write a C function isodd(num) that
accepts an integer argument and returns 1
if the argument is odd and 0 otherwise.*/

// #include <stdio.h>

// // The required function
// int isodd(int num)
// {
//     if (num % 2 == 0) // Check if the number is divisible by 2
//     {
//         return 0; // If it is divisible by 2, it is even
//     }
//     else
//     {
//         return 1; // If it is not divisible by 2, it is odd
//     }
// }

// int main()
// {
//     int num;
//     printf("Enter a number: \n");
//     scanf("%d", &num);

//     printf("%d\n", isodd(num)); // Call the isodd() function and print the result

//     return 0;
// }

/*Write a C program to implement STRING
COPY operation that copies a string ‘‘str1’’
to another string ‘‘str2’’ without using
library function.*/

// #include <stdio.h>

// int main()
// {
//     char str1[10] = "Mamba"; // Source string
//     char str2[10];           // Destination string
//     int i;

//     // Copy characters from str1 to str2
//     for (i = 0; str1[i] != '\0'; i++)
//     {
//         str2[i] = str1[i];
//     }

//     str2[i] = '\0'; // Add null character at the end of str2 to terminate the string

//     printf("%s\n", str2); // Print the copied string
//     return 0;
// }

/*(b) Write a program to : 10
(i) Find the length of a string.
(ii) Print the reverse of the string.*/

#include <stdio.h>

// Function to calculate the length of a string
int string_length(char string[])
{
    int count = 0;
    while (string[count] != '\0') // Loop until the null character is encountered
    {
        count += 1;
    }
    return count;
}

// Function to reverse a string
void reverse(char string[], int length, char reverse_string[])
{
    int j = 0;
    for (int i = length - 1; i >= 0; i--) // Iterate from the end of the string
    {
        reverse_string[j] = string[i]; // Assign characters in reverse order
        j += 1;
    }
    reverse_string[j] = '\0'; // Add null character at the end to terminate the reversed string
}

int main()
{
    char string[20], reverse_string[20];
    int length;
    printf("Enter a string to obtain its length: ");
    scanf("%s", string);
    length = string_length(string);
    printf("The length of the string is %d.\n", length);
    reverse(string, length, reverse_string);
    printf("The reversed string is: %s\n", reverse_string);
    return 0;
}

/*Write a program to test whether the given
string is a palindrome or not.*/
