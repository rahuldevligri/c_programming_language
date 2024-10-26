#include<stdio.h>

int main()
{
int principle, rate, year;

printf("Enter the value of principle \n");
scanf("%d", &principle);

printf("Enter the value of rate\n");
scanf("%d", &rate);

printf("Enter the value of year\n");
scanf("%d", &year);

printf("The value of simple intrest is %d", (principle * rate * year)/100 );
    return 0;
}