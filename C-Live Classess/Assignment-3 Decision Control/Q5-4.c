#include<stdio.h>
#include<conio.h>

void main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);

    printf(year%100?year%4?"Non leap year":"leap year":
                 year%400?"Non leap year":"leap year");

getch();
}

