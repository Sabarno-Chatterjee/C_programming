/*Write a program to calculate overtime pay of 10 employees.
Overtime is paid at the rate of Rs. 12.00 per hour for every
hour worked above 40 hours. Assume that employees do not
work for fractional part of an hour.*/

#include <stdio.h>

int main()
{
    int hours_worked, overtime_rate = 12, overtime_pay, overtime, num = 10;

    while (num != 0)
    {
        printf("Enter the number of hours worked: ");
        scanf("%d", &hours_worked);

        if (hours_worked > 40)
        {
            // Calculate the number of overtime hours
            overtime = hours_worked - 40;

            // Calculate the overtime pay
            overtime_pay = overtime * overtime_rate;

            printf("The overtime pay is: Rs. %d\n", overtime_pay);
        }
        else
        {
            overtime = 0;
            printf("There was no overtime.\n");
        }

        num -= 1;
    }

    return 0;
}
