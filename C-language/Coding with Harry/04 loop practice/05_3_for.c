/* 05_3--> Write a program to find the sum of first 
         10 natural numbers using a for loop.?*/

#include<stdio.h>

int main()
{
   int n=10,i,sum=0;
   for(i=1;i<=n;i++)
   {
       sum+=i;
    //    printf("The of 10 natural numbers is %d",sum); <--never write printf in loop bracket
   }
          printf("The of 10 natural numbers is %d",sum);
    return 0;
}