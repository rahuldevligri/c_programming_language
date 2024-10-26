#include<stdio.h>
#include<conio.h>

void main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);

    if(year%100)
       printf(year%4?"Non leap year":"leap year");
    else
        printf(year%400?"Non leap year":"leap year");
getch();
}
