/*
   Write a program to check whether given 3(Integer)numbers
   can be the lenght of sides of a triangle or not.
*/

#include <stdio.h>

void main()
{
    int a,b,c;
        printf("Enter Length of Three Sides of a Triangle\n");
        scanf("%d %d %d", &a, &b, &c);
    if(a+c>b)
    {
       if(a+b>c)
           printf("It is a Valid Triangle\n");
       else
           printf("It is not a invalid Triangle");
    }
    else
    {
      if(b+c>a)
         printf("It is a Valid Triangle\n");
      else
         printf("It is not a invalid Triangle");
    }
getch();
}
