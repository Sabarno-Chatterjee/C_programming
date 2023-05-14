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

// #include <stdio.h>
// #include <math.h>

// // Function to check if any side is equal to the hypotenuse of the triangle
// int hypotenuse(float a, float b, float c)
// {

//     if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
//     {
//         return 1; // Return 1 if a right-angled triangle is found
//     }
//     else
//     {
//         return 0; // Return 0 if not a right-angled triangle
//     }
// }

// int main()
// {
//     float a, b, c;

//     printf("Enter the three sides respectively.\n");
//     scanf("%f%f%f", &a, &b, &c);

//     // Check the types of triangles based on the provided input sides
//     if (hypotenuse(a, b, c))
//     {
//         printf("It is a right-angled triangle.\n");
//     }
//     else if (a == b && b == c)
//     {
//         printf("It is an equilateral triangle.\n");
//     }
//     else if (a == b || b == c || a == c)
//     {
//         printf("It is an isosceles triangle.\n");
//     }
//     else
//     {
//         printf("It is a scalene triangle.\n");
//     }

//     return 0;
// }

// Linear search

// #include <stdio.h>

// void search(int num, int numbers[], int size)
// {
//     int not_exist = 1;

//     // Iterate through the numbers array to search for the target number
//     for (int i = 0; i < size; i++)
//     {
//         if (num == numbers[i])
//         { // If the number is found
//             printf("The number %d exists at index: %d.\n", num, i);
//             not_exist = 0;
//             break; // Exit the loop since the number is found
//         }
//     }

//     // If the number is not found in the list
//     if (not_exist)
//     {
//         printf("The number %d does not exist in the list.\n", num);
//     }
// }

// int main()
// {
//     int numbers[] = {45, 23, 67, 45, 32, 89, 9, 12, 54, 87, 65, 32, 49, 87, 23, 11, 35, 76, 98, 7, 43, 56, 81, 34, 77, 99, 52, 46, 14, 5, 60, 72, 38, 42, 88, 25, 91, 18, 66, 93, 2, 79, 39, 62, 16, 30, 69, 59, 74, 53};
//     int num;

//     printf("Enter a number to search its index.\n");
//     scanf("%d", &num);

//     int size = sizeof(numbers) / sizeof(numbers[0]);

//     search(num, numbers, size); // Call the search function

//     return 0;
// }

// Prime numbers

// #include <stdio.h>

// void check_prime(int num)
// {

//     int prime = 1;
//     for (int i = 2; i <= num / 2; i++)
//     {
//         if (num % i == 0)
//         {
//             printf("The number is not prime.\n");
//             prime = 0;
//             break;
//         }
//     }
//     if (prime)
//     {
//         printf("The number is prime.\n");
//     }
// }

// int main()
// {
//     int num;
//     printf("Enter a number to check for prime.\n");
//     scanf("%d", &num);
//     if (num == 1)
//     {
//         printf("1 is not a prime or composite number.\n");
//         printf("Enter a number to check for prime.\n");
//         scanf("%d", &num);
//     }

//     check_prime(num);

//     return 0;
// }

/*(a) Ramesh’s basic salary is input through the keyboard. His
dearness allowance is 40% of basic salary, and house rent
allowance is 20% of basic salary. Write a program to calculate
his gross salary.*/

// #include <stdio.h>

// void gross_salary(int salary)
// {
//     int gross = salary + (0.4 * salary) + (0.2 * salary);
//     printf("Your gross salary is Rs.%d\n", gross);
// }
// int main()
// {
//     int salary;
//     printf("Enter your basic salary.\n");
//     scanf("%d", &salary);
//     gross_salary(salary);

//     return 0;
// }

/*(b) The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance
in meters, feet, inches and centimeters.*/
// #include <stdio.h>

// int main()
// {
//     float distance;
//     printf("Enter the distance in kilometers.\n");
//     scanf("%f", &distance);
//     printf("The distance in meters is : %.1lf meter. \n", distance * 1000);
//     printf("The distance in feet is : %.1lf feet. \n", distance * 3280.84);
//     printf("The distance in inches is : %.1lf inch. \n", distance * 39370.1);
//     printf("The distance in cm is : %.1lf cm. \n", distance * 1000000);
//     return 0;
// }

/*If the marks obtained by a student in five different subjects
are input through the keyboard, find out the aggregate marks
and percentage marks obtained by the student. Assume that
the maximum marks that can be obtained by a student in each
subject is 100.*/

// #include <stdio.h>

// int main()
// {
//     float sub1, sub2, sub3, sub4, sub5;
//     printf("Enter your marks.\n");
//     scanf("%f%f%f%f%f", &sub1, &sub2, &sub3, &sub4, &sub5);
//     float aggregate = sub1 + sub2 + sub3 + sub4 + sub5;
//     float percentage = (aggregate / 5);
//     printf("The aggregate is %.2f and the percentage is %.2f\%%\n", aggregate, percentage);

//     return 0;
// }

/*(d) Temperature of a city in Fahrenheit degrees is input through
the keyboard. Write a program to convert this temperature
into Centigrade degrees.*/

// #include <stdio.h>

// int main()
// {
//     float temp, temp_c;
//     printf("Please enter the temperature in fahrenheit.\n");
//     scanf("%f", &temp);
//     temp_c = (temp - 32) * (5.0 / 9.0);
//     printf("The temperature in centigrade is %.2f C.\n", temp_c);

//     return 0;
// }

/*(e) The length & breadth of a rectangle and radius of a circle are
input through the keyboard. Write a program to calculate the
area & perimeter of the rectangle, and the area &
circumference of the circle.*/

// #include <stdio.h>

// int area(float length, float breadth)
// {
//     return length * breadth;
// }
// int perimeter(float length, float breadth)
// {
//     return 2.0 * (length + breadth);
// }

// int circumference(float radius)
// {
//     return 2.0 * 3.14 * radius;
// }

// int main()
// {

//     float length, breadth, radius;
//     printf("Please enter the length, breadth and radius.\n");
//     scanf("%f%f%f", &length, &breadth, &radius);
//     printf("The area is: %.2f\n", area(length, breadth));
//     printf("The perimeter is: %.2f\n", perimeter(length, breadth));
//     printf("The circumference is: %.2f\n", circumference(radius));

//     return 0;
// }

/*(f) Two numbers are input through the keyboard into two
locations C and D. Write a program to interchange the
contents of C and D.*/

// #include <stdio.h>

// int main()
// {
//     int C, D;
//     printf("Enter the values.\n");
//     scanf("%d%d", &C, &D);
//     int temp = C;
//     C = D;
//     D = temp;
//     printf("C=%d  D=%d\n", C, D);

//     return 0;
// }

/*(g) If a five-digit number is input through the keyboard, write a
program to calculate the sum of its digits.*/

// #include <stdio.h>
// int main()
// {
//     int number, sum = 0;
//     printf("Enter the number.\n");
//     scanf("%d", &number);
//     for (int i = 0; i < 5; i++)
//     {
//         sum += number % 10;
//         number = number / 10;
//     }
//     printf("The sum of the digist of the number is: %d\n", sum);

//     return 0;
// }

/*(h) If a five-digit number is input through the keyboard, write a
program to reverse the number.*/

// #include <stdio.h>

// void reverse(int number)
// {
//     int reversed_num = 0;
//     while (number)
//     {
//         reversed_num = reversed_num * 10 + number % 10;
//         number = number / 10;
//     }
//     printf("The reversed number is: %d\n", reversed_num);
// }
// int main()
// {
//     int number;
//     printf("Enter a number.\n");
//     scanf("%d", &number);
//     reverse(number);

//     return 0;
// }

/*(i) If a four-digit number is input through the keyboard, write a
program to obtain the sum of the first and last digit of this
number.*/

// #include <stdio.h>

// int main()
// {
//     int num;
//     printf("Enter the number.\n");
//     scanf("%d", &num);
//     int num1 = num / 1000, num4 = num % 10;
//     printf("The sum of %d and %d is : %d\n", num1, num4, num1 + num4);

//     return 0;
// }

/*(k) A cashier has currency notes of denominations 10, 50 and
100. If the amount to be withdrawn is input through the
keyboard in hundreds, find the total number of currency notes
of each denomination the cashier will have to give to the
withdrawer.*/

// #include <stdio.h>
// int main()
// {
//     int amt;
//     printf("Please enter the amount.\n");
//     scanf("%d", &amt);
//     printf("In 10's: %d\n", amt / 10);
//     printf("In 50's: %d\n", amt / 50);
//     printf("In 100's: %d\n", amt / 100);

//     return 0;
// }

/*While purchasing certain items, a discount of 10%
is offered if the quantity purchased is more than 1000. If quantity
and price per item are input through the keyboard, write a program
to calculate the total expenses.*/

// #include <stdio.h>

// int main()
// {
//     int dis = 0, qty, rate, total;
//     printf("Enter the quantity and the rate.\n");
//     scanf("%d%d", &qty, &rate); // Corrected scanf statement
//     if (qty > 1000)
//     {
//         dis = 10;
//     }
//     total = qty * rate - qty * rate * (dis / 100);
//     printf("The total is: %d\n", total);

//     return 0;
// }

/*The current year and the year in which the
employee joined the organization are entered through the
keyboard. If the number of years for which the employee has
served the organization is greater than 3 then a bonus of Rs. 2500/-
is given to the employee. If the years of service are not greater
than 3, then the program should do nothing.*/

// #include <stdio.h>

// int main()
// {
//     int current_year, year_joined, service, bonus;
//     printf("Enter the values.\n");
//     scanf("%d%d", &current_year, &year_joined);
//     service = current_year - year_joined;
//     if (service > 3)
//     {
//         bonus = 2500;
//         printf("Bonus = %d\n", bonus);
//     }

//     return 0;
// }
