/* Write a program that accepts an employee's ID, 
total worked hours of a month and the amount he 
received per hour. print the employee ID and salary
(with two decimal places) of a particular month.? */

#include <stdio.h>

int main(){
char id[10];
double value,salary;
int hour;
printf("Input the employees ID(Max 10 chars): ");
scanf("%s", &id);

printf("\nInput the working hours: ");
scanf("%d",hour);

printf("\nSalary amount/hr");
scanf("%lf", &value);

salary = value * hour;
printf("\nEmployees ID = %s\nSalary = U$ %lf\n",id,salary);
    return 0;
}