/*Ramesh’s basic salary is input through the keyboard. His
dearness allowance is 40% of basic salary, and house rent
allowance is 20% of basic salary. Write a program to calculate
his gross salary.*/

// int gross_salary(int basic)
// {
//   int gross = basic + 0.4 * basic + 0.2 * basic;
//   return gross;
// }
// #include <stdio.h>
// int main()
// {
//   int basic;
//   scanf("%d", &basic);
//   printf("Ramesh's gross salary is : %d\n", gross_salary(basic));
//   return 0;
// }

/*The length & breadth of a rectangle and radius of a circle are
input through the keyboard. Write a program to calculate the
area & perimeter of the rectangle, and the area &
circumference of the circle.*/

// #include <stdio.h>

// int PI = 3.14;
// void calc_circle(float radius, double *circle_area, double *circumference)
// {
//   *circle_area = PI * radius * radius;
//   *circumference = 2 * PI * radius;
// }

// void calc_rectangle(float length, float breadth, double *perimeter, double *rec_area)
// {
//   *rec_area = length * breadth;
//   *perimeter = 2 * (length + breadth);
// }

// int main()
// {
//   float l, b, r;
//   double perimeter, circle_area, circumference, rec_area;

//   printf("Enter the length, breadth, and radius.\n");
//   scanf("%f%f%f", &l, &b, &r);

//   calc_circle(r, &circle_area, &circumference);
//   calc_rectangle(l, b, &perimeter, &rec_area);

//   printf("The area of the rectangle is : %.2lf and perimeter is : %.2lf\n", rec_area, perimeter);
//   printf("The area of the circle is : %.2lf and circumference is : %.2lf\n", circle_area, circumference);

//   return 0;
// }

/*Two numbers are input through the keyboard into two
locations C and D. Write a program to interchange the
contents of C and D.*/

// #include <stdio.h>

// void swap(int *C, int *D)
// {
//   int temp;
//   temp = *C;
//   *C = *D;
//   *D = temp;
// }
// int main()
// {
//   int C, D;
//   scanf("%d%d", &C, &D);
//   printf("C=%d, D=%d\n", C, D);
//   swap(&C, &D);
//   printf("C=%d, D=%d\n", C, D);

//   return 0;
// }

/*If a five-digit number is input through the keyboard, write a
program to calculate the sum of its digits.*/

// #include <stdio.h>
// int main()
// {
//   int num, sum = 0;
//   scanf("%d", &num);
//   for (int i = 0; i < 5; i++)
//   {
//     sum += num % 10;
//     // printf("Sum=%d\n", sum);
//     num = num / 10;
//     // printf("Num=%d\n", num);
//   }
//   printf("Sum= %d\n", sum);
//   return 0;
// }

/*If a five-digit number is input through the keyboard, write a
program to reverse the number. Also check for pallindrome.*/

// #include <stdio.h>
// int main()
// {
//   int num, reverse = 0, original;
//   printf("Enter a five digit num.\n");
//   scanf("%d", &num);
//   original = num;
//   while (num != 0)
//   {
//     reverse = reverse * 10 + num % 10;
//     // printf("Rev=%d", reverse);
//     num = num / 10;
//   }
//   printf("The reverse = %d.\n", reverse);
//   (original == reverse) ? printf("Pallindrome.\n") : printf("Not a pallindrome.\n");
//   printf("%d\n", original);
//   printf("%d\n", reverse);
//   return 0;
// }

/*If a four-digit number is input through the keyboard, write a
program to obtain the sum of the first and last digit of this
number.*/

// #include <stdio.h>
// int main()
// {
//   int num, sum;
//   printf("Enter a num.\n");
//   scanf("%d", &num);
//   sum = (num / 1000) + (num % 10);
//   printf("Sum=%d\n", sum);
//   return 0;
// }

/*In a town, the percentage of men is 52. The percentage of
total literacy is 48. If total percentage of literate men is 35 of
the total population, write a program to find the total number of illiterate men and women if the population of the town is
80,000.*/

// #include <stdio.h>

// int main()
// {
//   int population = 80000;
//   float percentage_men = 0.52;
//   float total_literacy = 0.48;
//   float literate_men = 0.35;

//   float total_illiterate_men = (population * percentage_men) - (population * literate_men);
//   float total_illiterate_women = population - (total_illiterate_men + (population * literate_men));

//   printf("Total number of illiterate men: %.0f\n", total_illiterate_men);
//   printf("Total number of illiterate women: %.0f\n", total_illiterate_women);

//   return 0;
// }

/*If a five-digit number is input through the keyboard, write a
program to print a new number by adding one to each of its
digits. For example if the number that is input is 12391 then
the output should be displayed as 23402.*/
// #include <stdio.h>

// int main()
// {
//   int num, digit, new_num = 0, multiplier = 1;

//   printf("Enter a five-digit number: ");
//   scanf("%d", &num);

//   while (num != 0)
//   {
//     digit = (num % 10) + 1;
//     if (digit > 9)
//     {
//       digit = 0; // If the digit becomes 10 after adding 1, reset it to 0
//     }

//     new_num = (digit * multiplier) + new_num;
//     multiplier *= 10;
//     num /= 10;
//   }

//   printf("The new number is: %05d\n", new_num);

//   return 0;
// }

/*Any year is input through the keyboard. Write a program to
determine whether the year is a leap year or not.*/

// #include <stdio.h>

// void leap_year(int year)
// {
//   if (year % 4 == 0)
//   {
//     if (year % 100 == 0)
//     {
//       if (year % 400 == 0)
//         printf("Leap year.\n");
//       else
//         printf("Not leap year.\n");
//     }
//     else
//       printf("Leap year.\n");
//   }
//   else
//     printf("Not leap year.\n");
// }
// int main()
// {
//   int year;
//   scanf("%d", &year);
//   leap_year(year);
//   return 0;
// }

/*Given three points (x1, y1), (x2, y2) and (x3, y3), write a
program to check if all the three points fall on one straight line.*/

// #include <stdio.h>
// void straight_line(int x1, int y1, int x2, int y2, int x3, int y3, int *m1, int *m2)
// {
//   *m1 = (y2 - y1) / (x2 - x1);
//   *m2 = (y3 - y2) / (x3 - x2);
// }

// void test_straight_line(int x1, int y1, int x2, int y2, int x3, int y3, int expected_result)
// {
//   int m1, m2;
//   straight_line(x1, y1, x2, y2, x3, y3, &m1, &m2);

//   if ((m1 == m2) == expected_result)
//     printf("Test Passed: ");
//   else
//     printf("Test Failed: ");

//   printf("Points (%d, %d), (%d, %d), (%d, %d) - Expected: %s\n", x1, y1, x2, y2, x3, y3, expected_result ? "Straight line" : "Not a straight line");
// }

// int main()
// {
//   int x1, x2, x3, y1, y2, y3;
//   float m1, m2;
//   printf("Enter the co-ordinates.\n");
//   scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
//   straight_line(x1, y1, x2, y2, x3, y3, &m1, &m2);
//   if (m1 == m2)
//     printf("Straight line.\n");
//   else
//     printf("Not a straight line.\n");

//   // Test cases
//   test_straight_line(1, 1, 2, 2, 3, 3, 1); // All points fall on a straight line
//   test_straight_line(1, 1, 2, 2, 4, 4, 0); // Not all points fall on a straight line

//   return 0;
// }

/*Any character is entered through the keyboard, write a
program to determine whether the character entered is a
capital letter, a small case letter, a digit or a special symbol.*/

// #include <stdio.h>
// void check(char ch)
// {
//   if ((ch >= 123 && ch <= 127) || (ch >= 0 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96))
//     printf("Special characters.\n");
//   else if (ch >= 48 && ch <= 57)
//     printf("Digits.\n");
//   else if (ch >= 97 && ch <= 122)
//     printf("Small case.\n");
//   else if (ch >= 65 && ch <= 90)
//     printf("Upper case.\n");
//   else
//     printf("Inavalid input.\n");
// }
// int main()
// {
//   char ch;
//   printf("Enter a character.\n");
//   scanf("%c", &ch);
//   check(ch);

//   // Test code
//   //  char test[10] = {'a', 'J', '1', '*', 's', 'F', ')'};
//   //  for (int i = 0; i < 7; i++)
//   //  {
//   //    check(test[i]);
//   //  }

//   return 0;
// }

/*An Insurance company follows following rules to calculate
premium.
(1) If a person’s health is excellent and the person is between
25 and 35 years of age and lives in a city and is a male
then the premium is Rs. 4 per thousand and his policy
amount cannot exceed Rs. 2 lakhs.
(2) If a person satisfies all the above conditions except that
the sex is female then the premium is Rs. 3 per thousand
and her policy amount cannot exceed Rs. 1 lakh.
(3) If a person’s health is poor and the person is between 25
and 35 years of age and lives in a village and is a male then the premium is Rs. 6 per thousand and his policy
cannot exceed Rs. 10,000.
(4) In all other cases the person is not insured.
Write a program to output whether the person should be
insured or not, his/her premium rate and maximum amount
for which he/she can be insured.*/

// #include <stdio.h>
// #include <string.h>

// void insurance(char h[], char s, char l[], int age)
// {
//   if ((strcmp(h, "excellent") == 0) && (age >= 25 && age <= 35) && (strcmp(l, "city") == 0))
//   {
//     if (s == 'M')
//     {
//       printf("Can be insured, Premium: Rs 4 per thousand, Max Policy = 200000.\n");
//     }
//     else if (s == 'F')
//     {
//       printf("Can be insured, Premium: Rs 3 per thousand, Max Policy = 100000.\n");
//     }
//   }
//   else if (strcmp(h, "poor") == 0 && strcmp(l, "village") == 0 && s == 'M')
//   {
//     printf("Can be insured, Premium: Rs 6 per thousand, Max Policy = 10000.\n");
//   }
//   else
//     printf("Cannot be insured.\n");
// }

// int main()
// {
//   char health[10], sex, location[10];
//   int age;
//   printf("Enter the health condition, age, location, and sex.\n");
//   scanf("%s %d %s %c", health, &age, location, &sex);
//   insurance(health, sex, location, age);
//   return 0;
// }

/*factorial using recursion*/

// #include <stdio.h>
// int factorial(int num)
// {
//   if (num == 1)
//   {
//     return 1;
//   }
//   else
//   {
//     return num * factorial(num - 1);
//   }
// }
// int main()
// {
//   int num;
//   printf("Enter a number.\n");
//   scanf("%d", &num);
//   printf("The factorial of %d is %d.\n", num, factorial(num));
//   // Test code
//   // int numbers[4] = {5, 6, 3, 7};
//   // for (int i = 0; i < 4; i++)
//   // {
//   //   int currentNum = numbers[i];
//   //   printf("The factorial of %d is %d.\n", currentNum, factorial(currentNum));
//   // }
//   return 0;
// }

// fibonacci sq using recursion

// #include <stdio.h>
// int fibonacci(int n)
// {
//     if (n == 0)
//         return 0;
//     else if (n == 1 || n == 2)
//         return 1;
//     else
//         return fibonacci(n - 1) + fibonacci(n - 2);
// }

// int main()
// {
//     int num;
//     printf("Enter how many terms of fibonacci sq you want to obtain.\n");
//     scanf("%d", &num);
//     for (int i = 0; i < num; i++)
//     {
//         printf("%d", fibonacci(i));
//     }
//     printf("\n");
//     return 0;
// }

// Pyramid of stars

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of rows.\n");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= (2 * n - 1); j++)
//         {
//             if (j >= n - (i - 1) && j <= n + (i - 1))
//                 printf("*");
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// Pallindrome

// #include <stdio.h>
// int main()
// {
//     int num, r, q, reverse = 0, original_num;
//     printf("Enter a number to check for pallindrome and obtain it's reverse.\n");
//     scanf("%d", &num);
//     original_num = num;
//     while (num)
//     {
//         r = num % 10;
//         num = num / 10;
//         reverse = reverse * 10 + r;
//     }
//     printf("The reversed number is %d\n", reverse);
//     if (reverse == original_num)
//         printf("It is a pallindrome.\n");
//     else
//         printf("It is not a pallindrome.\n");
// }

// pattern: 2 1 4 3 6 5 8 7 10 9 (Indirect recursion)
// #include <stdio.h>

// void even();
// void odd();
// int n = 1;
// void odd()
// {
//     if (n <= 10)
//     {
//         printf("%d ", n + 1);
//         n++;
//         even();
//     }
//     return;
// }

// void even()
// {
//     if (n <= 10)
//     {
//         printf("%d ", n - 1);
//         n++;
//         odd();
//     }
//     return;
// }

// int main()
// {
//     odd();
//     printf("\n");
//     return 0;
// }

// factorial with ternary operator

// #include <stdio.h>
// int factorial(int n)
// {
//     return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
// }
// int main()
// {
//     int num;
//     printf("Enter a number.\n");
//     scanf("%d", &num);
//     printf("%d\n", factorial(num));
//     return 0;
// }

// WAP to print the following numbers in reverse order:34 56 54 32 67 89 90 32 21

// #include <stdio.h>
// int main()
// {
//     int arr[] = {34, 56, 54, 32, 67, 89, 90, 32, 21};
//     int length = sizeof(arr) / sizeof(arr[0]);
//     for (int i = length - 1; i >= 0; i--)
//         printf("%d ", arr[i]);
//     printf("\n");
//     return 0;
// }

// WAP a program to check whether any of the digits in a number appears more than once.

#include <stdio.h>
int main()
{
    int num, seen[10] = {0}, r;
    printf("Enter a number.\n");
    scanf("%d", &num);
    while (num > 0)
    {
        r = num % 10;
        if (seen[r] == 1)
            break;
        seen[r] = 1;
        num = num / 10;
    }
    if (num > 0)
        printf("Yes.\n");
    else
        printf("No.\n");
    return 0;
}