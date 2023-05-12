/*Write a program to calculate overtime pay of 10 employees.
Overtime is paid at the rate of Rs. 12.00 per hour for every
hour worked above 40 hours. Assume that employees do not
work for fractional part of an hour.*/

// #include <stdio.h>

// int main()
// {
//     int hours_worked, overtime_rate = 12, overtime_pay, overtime, num = 10;

//     while (num != 0)
//     {
//         printf("Enter the number of hours worked: ");
//         scanf("%d", &hours_worked);

//         if (hours_worked > 40)
//         {
//             // Calculate the number of overtime hours
//             overtime = hours_worked - 40;

//             // Calculate the overtime pay
//             overtime_pay = overtime * overtime_rate;

//             printf("The overtime pay is: Rs. %d\n", overtime_pay);
//         }
//         else
//         {
//             overtime = 0;
//             printf("There was no overtime.\n");
//         }

//         num -= 1;
//     }

//     return 0;
// }

/*Write a program to find the range of a set of numbers. Range
is the difference between the smallest and biggest number in
the list.*/

// #include <stdio.h>
// #include <string.h>

// // Function to sort the array in ascending order using bubble sort algorithm
// void sort(int numbers[], int length)
// {
//     for (int i = 0; i < length - 1; i++)
//     {
//         for (int j = 0; j < length - 1 - i; j++)
//         {
//             if (numbers[j] > numbers[j + 1])
//             {
//                 int temp = numbers[j];
//                 numbers[j] = numbers[j + 1];
//                 numbers[j + 1] = temp;
//             }
//         }
//     }
// }

// int main()
// {
//     int numbers[] = {87, 42, 65, 91, 23, 78, 56, 32, 99, 17, 70, 84, 50, 38, 69, 10, 27, 93, 74, 61};
//     int length = sizeof(numbers) / sizeof(numbers[0]);
//     int range;

//     // Sort the numbers array in ascending order
//     sort(numbers, length);

//     // Calculate the range by subtracting the smallest number from the largest number
//     range = numbers[length - 1] - numbers[0];

//     // Print the calculated range
//     printf("The range is: %d\n", range);

//     return 0;
// }

/*If the three sides of a triangle are entered through the
keyboard, write a program to check whether the triangle is
isosceles, equilateral, scalene or right angled triangle.*/

#include <stdio.h>
#include <math.h>

// Function to check if any side is equal to the hypotenuse of the triangle
int hypotenuse(float a, float b, float c)
{

    if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
    {
        return 1; // Return 1 if a right-angled triangle is found
    }
    else
    {
        return 0; // Return 0 if not a right-angled triangle
    }
}

int main()
{
    float a, b, c;

    printf("Enter the three sides respectively.\n");
    scanf("%f%f%f", &a, &b, &c);

    // Check the types of triangles based on the provided input sides
    if (hypotenuse(a, b, c))
    {
        printf("It is a right-angled triangle.\n");
    }
    else if (a == b && b == c)
    {
        printf("It is an equilateral triangle.\n");
    }
    else if (a == b || b == c || a == c)
    {
        printf("It is an isosceles triangle.\n");
    }
    else
    {
        printf("It is a scalene triangle.\n");
    }

    return 0;
}

/*Write a program to print all the ASCII values and their
equivalent characters using a while loop. The ASCII values
vary from 0 to 255.*/