/*
Write a program to check whether a
given number is divisible by 5 or not.
*/

#include<stdio.h>

void main(){
    int num;
    printf("check given number is divisible by 5 or not\n");
    printf("Enter a number: ");
    scanf("%d",&num);
if(num % 5)
{
    printf("%d is not divisible by 5",num);

}
if(!(num % 5))
    {
      printf("%d is divisible by 5",num);
   }

    getch();
}
