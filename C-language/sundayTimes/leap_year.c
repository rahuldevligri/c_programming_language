#include <stdio.h>

int main(){
int a;
printf("enter a year ");
scanf("%d", &a);

    if (a%400==0)
    { 
       printf("%d a leap year",a);
    }
    else if (a%4==0)
    {
        printf("%d a leap year",a);
    }
    else if (a%100==0)
    {
        printf("%d not a leap year",a);
    }
    else
    {
        printf("%d not a leap year",a);
    }
   return 0;
}