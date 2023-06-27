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

#include <stdio.h>

void leap_year(int year)
{
  if (year % 4 == 0)
  {
    if (year % 100 == 0)
    {
      if (year % 400 == 0)
        printf("Leap year.\n");
      else
        printf("Not leap year.\n");
    }
    else
      printf("Leap year.\n");
  }
  else
    printf("Not leap year.\n");
}
int main()
{
  int year;
  scanf("%d", &year);
  leap_year(year);
  return 0;
}
