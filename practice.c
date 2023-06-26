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

#include <stdio.h>

int main()
{
  int population = 80000;
  float percentage_men = 0.52;
  float total_literacy = 0.48;
  float literate_men = 0.35;

  float total_illiterate_men = (population * percentage_men) - (population * literate_men);
  float total_illiterate_women = population - (total_illiterate_men + (population * literate_men));

  printf("Total number of illiterate men: %.0f\n", total_illiterate_men);
  printf("Total number of illiterate women: %.0f\n", total_illiterate_women);

  return 0;
}
