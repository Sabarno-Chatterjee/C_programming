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

/*In a company an employee is paid as under:If his basic salary is less than Rs. 1500, then HRA = 10% of basic
salary and DA = 90% of basic salary. If his salary is either equal to
or above Rs. 1500, then HRA = Rs. 500 and DA = 98% of basic
salary. If the employee's salary is input through the keyboard write
a program to find his gross salary.*/

// #include <stdio.h>

// int main()
// {
//     int salary, gross, da = 0, hra = 0;
//     printf("Salary?\n");
//     scanf("%d", &salary);
//     if (salary < 1500)
//     {
//         hra = 0.1 * salary;
//         da = 0.9 * salary;
//     }
//     else
//     {
//         hra = 500;
//         da = 0.98 * salary;
//     }
//     printf("The HRA is %d and the DA is %d.\n", hra, da);

//     return 0;
// }

/*The marks obtained by a student in 5 different
subjects are input through the keyboard. The student gets a
division as per the following rules:
Percentage above or equal to 60 - First division
Percentage between 50 and 59 - Second division
Percentage between 40 and 49 - Third division
Percentage less than 40 - Fail
Write a program to calculate the division obtained by the student.*/

// #include <stdio.h>

// int main()
// {
//     int sub1, sub2, sub3, sub4, sub5;
//     float percent;
//     printf("Enter your marks.\n");
//     scanf("%d%d%d%d%d", &sub1, &sub2, &sub3, &sub4, &sub5);
//     percent = (sub1 + sub2 + sub3 + sub4 + sub5) / 5;
//     if (percent >= 60)
//         printf("First division");
//     else if (percent >= 50 && percent <= 59)
//         printf("Second division");
//     else if (percent >= 40 && percent <= 49)
//         printf("Third division");
//     else
//         printf("Fail");

//     printf("\n");
//     return 0;
// }

/*A company insures its drivers in the following
cases:
− If the driver is married.
− If the driver is unmarried, male & above 30 years of age.
− If the driver is unmarried, female & above 25 years of age.
In all other cases the driver is not insured. If the marital status, sex
and age of the driver are the inputs, write a program to determine
whether the driver is to be insured or not.*/

// #include <stdio.h>

// int main()
// {
//     char ms, sex;
//     int age;
//     printf("Enter the marital status(Y/N), sex(M/F) and age in order.\n");
//     scanf("%c%c%d", &ms, &sex, &age);
//     if ((ms == 'Y') || (ms == 'N' && sex == 'M' && age > 30) || (ms == 'N' && sex == 'F' && age > 25))
//         printf("To be insured.");
//     else
//         printf("Not to be insured.");

//     printf("\n");
//     return 0;
// }

/*If cost price and selling price of an item is input through the
keyboard, write a program to determine whether the seller has
made profit or incurred loss. Also determine how much profit
he made or loss he incurred.*/

// #include <stdio.h>

// int main()
// {
//     int cp, sp, p, l;
//     scanf("%d%d", &cp, &sp);
//     if (sp > cp)
//     {
//         p = sp - cp;
//         printf("The seller has incurred a profit of : %d.\n", p);
//     }
//     else
//     {
//         l = cp - sp;
//         printf("The seller has incurred a loss of : %d.\n", l);
//     }

//     return 0;
// }

/*Any integer is input through the keyboard. Write a program to
find out whether it is an odd number or even number.*/

// #include <stdio.h>

// int main()
// {
//     int number;
//     scanf("%d", &number);
//     (number % 2 == 0) ? printf("Even\n") : printf("Odd\n");

//     return 0;
// }

/*Any year is input through the keyboard. Write a program to
determine whether the year is a leap year or not.*/

// #include <stdio.h>

// int leap_year(int year)
// {
//     if (year % 400 == 0)
//         return 1;
//     if (year % 100 == 0)
//         return 0;
//     if (year % 4 == 0)
//         return 1;

//     return 0;
// }

// int main()
// {
//     int year;
//     scanf("%d", &year);
//     leap_year(year) ? printf("Leap year.\n") : printf("Not leap year.\n");

//     return 0;
// }

/*A five-digit number is entered through the keyboard. Write a
program to obtain the reversed number and to determine
whether the original and reversed numbers are equal or not.*/

// #include <stdio.h>
// int pallindrome(int number)
// {
//     int original_num = number, reversed_num = 0;

//     while (number)
//     {
//         reversed_num = reversed_num * 10 + number % 10;
//         number /= 10;
//     }
//     return (original_num == reversed_num) ? 1 : 0;
// }
// int main()
// {
//     int number;
//     scanf("%d", &number);
//     pallindrome(number) ? printf("Equal.\n") : printf("Not equal.\n");

//     return 0;
// }

/*If the ages of Ram, Shyam and Ajay are input through the
keyboard, write a program to determine the youngest of the
three.*/

// #include <stdio.h>

// int main()

// {
//     int r, s, a;
//     scanf("%d%d%d", &r, &s, &a);
//     if (r < a && r < s)
//         printf("Ram is youngest.\n");
//     else if (s < a && s < a)
//         printf("Shyam is youngest.\n");
//     else
//         printf("Ajay is youngest.\n");
//     return 0;
// }

/*Write a program to check whether a triangle is valid or not,
when the three angles of the triangle are entered through the
keyboard. A triangle is valid if the sum of all the three angles
is equal to 180 degrees.*/

// #include <stdio.h>
// int main()
// {
//     int a, b, c;
//     scanf("%d%d%d", &a, &b, &c);
//     ((a + b + c) == 180) ? printf("Valid\n") : printf("Not valid\n");
//     return 0;
// }

/*Find the absolute value of a number entered through the
keyboard.*/

// #include <stdio.h>
// int main()
// {
//     int num;
//     scanf("%d", &num);
//     if (num < 0)
//         printf("%d\n", num * -1);
//     return 0;
// }

/*Given the length and breadth of a rectangle, write a program to
find whether the area of the rectangle is greater than its
perimeter. For example, the area of the rectangle with length = 5
and breadth = 4 is greater than its perimeter.*/
// #include <stdio.h>

// int main()
// {
//     int l, b, a, p;
//     scanf("%d%d", &l, &b);
//     a = l * b;
//     p = 2 * (l + b);
//     (a > p) ? printf("True.\n") : printf("False.\n");
//     return 0;
// }

/*Given three points (x1, y1), (x2, y2) and (x3, y3), write a
program to check if all the three points fall on one straight line.*/

// #include <stdio.h>

// int slope(int x1, int x2, int y1, int y2)
// {
//     int m = (y2 - y1) * (x2 - x1);
//     return m;
// }

// int main()
// {
//     int x1, x2, x3, y1, y2, y3, m1, m2;
//     printf("Enter the co-ordinates.\n");
//     scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
//     m1 = slope(x1, x2, y1, y2);
//     m2 = slope(x2, x3, y2, y3);
//     (m1 == m2) ? printf("Collinear.\n") : printf("Not collinear.\n");
//     return 0;
// }

/*Given a point (x, y), write a program to find out if it lies on the
x-axis, y-axis or at the origin, viz. (0, 0).*/

// #include <stdio.h>

// int main()
// {
//     int x, y, result;
//     scanf("%d%d", &x, &y);
//     if ((x > 0) && (y == 0))
//         printf("X-axis\n");
//     else if ((y > 0) && (x == 0))
//         printf("Y-axis\n");
//     else if (x == 0 && y == 0)
//         printf("At the origin.\n");
//     return 0;
// }

/*Any character is entered through the keyboard, write a
program to determine whether the character entered is a
capital letter, a small case letter, a digit or a special symbol.*/

// #include <stdio.h>

// void check(char c)
// {

//     if (c >= 97 && c <= 122)
//         printf("Small case letter.\n");
//     else if (c >= 65 && c <= 90)
//         printf("Capital letter.\n");
//     else if (c >= 48 && c <= 57)
//         printf("Digit.\n");
//     else
//         printf("Special character.\n");
// }

// int main()
// {
//     char c;
//     scanf("%c", &c);
//     check(c);
//     // Test code:
//     // char characters[] = {'j', 'b', '4', '$', '*', '9', 's', 'C', '5'};

//     // for (int i = 0; i < sizeof(characters) / sizeof(char); i++)
//     // {
//     //     check(characters[i]);
//     // }
//     return 0;
// }

/*A certain grade of steel is graded according to the following
conditions:
(i) Hardness must be greater than 50
(ii) Carbon content must be less than 0.7
(iii) Tensile strength must be greater than 5600
The grades are as follows:
Grade is 10 if all three conditions are met
Grade is 9 if conditions (i) and (ii) are met
Grade is 8 if conditions (ii) and (iii) are met
Grade is 7 if conditions (i) and (iii) are met
Grade is 6 if only one condition is met
Grade is 5 if none of the conditions are met
Write a program, which will require the user to give values of
hardness, carbon content and tensile strength of the steel
under consideration and output the grade of the steel.*/

// #include <stdio.h>

// void steel_grade(float hardness, float carbon, float tensile)
// {

//     if (hardness > 50.0 && carbon < 0.7 && tensile > 5600.0)
//         printf("Grade 10.\n");
//     else if (hardness > 50.0 && carbon < 0.7)
//         printf("Grade 9.\n");
//     else if (carbon < 0.7 && tensile > 5600.0)
//         printf("Grade 8.\n");
//     else if (hardness > 50.0 && tensile > 5600.0)
//         printf("Grade 7.\n");
//     else if (hardness > 50.0 || carbon < 0.7 || tensile > 5600.0)
//         printf("Grade 6.\n");
//     else
//         printf("Grade 5.\n");
// }

// int main()
// {
//     float hardness, carbon, tensile;
//     printf("Enter the values for hardness, carbon content and tensile strength.\n");
//     scanf("%f%f%f", &hardness, &carbon, &tensile);
//     steel_grade(hardness, carbon, tensile);

//     // Test code:
//     // printf("Test Case 1: Grade 10\n");
//     // hardness = 60.0;
//     // carbon = 0.5;
//     // tensile = 6000.0;
//     // steel_grade(hardness, carbon, tensile);
//     // printf("\n");

//     // printf("Test Case 2: Grade 9\n");
//     // hardness = 60.0;
//     // carbon = 0.5;
//     // tensile = 5000.0;
//     // steel_grade(hardness, carbon, tensile);
//     // printf("\n");

//     // printf("Test Case 3: Grade 8\n");
//     // hardness = 40.0;
//     // carbon = 0.6;
//     // tensile = 6000.0;
//     // steel_grade(hardness, carbon, tensile);
//     // printf("\n");

//     // printf("Test Case 4: Grade 7\n");
//     // hardness = 70.0;
//     // carbon = 0.8;
//     // tensile = 6000.0;
//     // steel_grade(hardness, carbon, tensile);
//     // printf("\n");

//     // printf("Test Case 5: Grade 6\n");
//     // hardness = 70.0;
//     // carbon = 0.8;
//     // tensile = 4000.0;
//     // steel_grade(hardness, carbon, tensile);
//     // printf("\n");

//     // printf("Test Case 6: Grade 5\n");
//     // hardness = 40.0;
//     // carbon = 0.8;
//     // tensile = 4000.0;
//     // steel_grade(hardness, carbon, tensile);
//     // printf("\n");

//     return 0;
// }

/*A library charges a fine for every book returned late. For first
5 days the fine is 50 paise, for 6-10 days fine is one rupee and
above 10 days fine is 5 rupees. If you return the book after 30
days your membership will be cancelled. Write a program to
accept the number of days the member is late to return the
book and display the fine or the appropriate message.*/

// #include <stdio.h>

// int main()
// {
//     int days_late;
//     scanf("%d", &days_late);
//     if (days_late <= 5)
//         printf("Fine of 50 paise.\n");
//     else if (days_late >= 6 && days_late <= 10)
//         printf("Fine of 1 Rupee.\n");
//     else if (days_late > 10)
//         printf("Fine of 5 Rupees.\n");
//     else
//         printf("Membership will be cancelled.\n");

//     return 0;
// }

/*If the three sides of a triangle are entered through the
keyboard, write a program to check whether the triangle is
valid or not. The triangle is valid if the sum of two sides is
greater than the largest of the three sides.*/

// #include <stdio.h>

// int main()
// {
//     int a, b, c;
//     scanf("%d%d%d", &a, &b, &c);
//     if ((a + b > c) && (a + c > b) && (b + c > a))
//         printf("It's a valid triangle.\n");
//     else
//         printf("It's not a valid triangle.\n");

//     return 0;
// }

/*Write a menu driven program which has following options:
1. Factorial of a number.
2. Prime or not
3. Odd or even
4. Exit*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Function to calculate factorial
int factorial(int num)
{
    if (num == 0)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}

// Function to check if a number is prime
void prime(int num)
{
    int is_prime = 1;
    int sqrt_num = sqrt(num);
    for (int i = 2; i <= sqrt_num; i++)
    {
        if (num % i == 0)
        {
            printf("\nNot prime.\n");
            is_prime = 0;
            break;
        }
    }
    if (is_prime)
    {
        printf("\nPrime.\n");
    }
}

// Function to check if a number is odd or even
void odd_or_even(int num)
{
    if (num % 2 == 0)
        printf("\nEven.\n");
    else
        printf("\nOdd.\n");
}

int main()
{
    bool run_program = true;
    while (run_program)
    {
        int number, choice;
        printf("\nEnter 1 for factorial.\n");
        printf("Enter 2 for prime.\n");
        printf("Enter 3 for odd/even.\n");
        printf("Enter 4 to exit.\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            // Factorial
            printf("Enter a number to obtain its factorial.\n");
            scanf("%d", &number);
            printf("\nFactorial: %d\n", factorial(number));
            break;

        case 2:
            // Prime
            printf("\nEnter a number to check for prime.\n");
            scanf("%d", &number);
            while (number == 1)
            {
                printf("1 is neither prime nor composite.\n");
                printf("\nEnter a number to check for prime.\n");
                scanf("%d", &number);
            }
            prime(number);
            break;

        case 3:
            // Odd or Even
            printf("Enter a number to check for odd/even.\n");
            scanf("%d", &number);
            odd_or_even(number);
            break;

        case 4:
            printf("Thank you.\n");
            run_program = false;
            break;
        }
    }

    return 0;
}
