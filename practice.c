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

#include <stdio.h>

int PI = 3.14;
void calc_circle(float radius, double *circle_area, double *circumference)
{
  *circle_area = PI * radius * radius;
  *circumference = 2 * PI * radius;
}

void calc_rectangle(float length, float breadth, double *perimeter, double *rec_area)
{
  *rec_area = length * breadth;
  *perimeter = 2 * (length + breadth);
}

int main()
{
  float l, b, r;
  double perimeter, circle_area, circumference, rec_area;

  printf("Enter the length, breadth, and radius.\n");
  scanf("%f%f%f", &l, &b, &r);

  calc_circle(r, &circle_area, &circumference);
  calc_rectangle(l, b, &perimeter, &rec_area);

  printf("The area of the rectangle is : %.2lf and perimeter is : %.2lf\n", rec_area, perimeter);
  printf("The area of the circle is : %.2lf and circumference is : %.2lf\n", circle_area, circumference);

  return 0;
}
