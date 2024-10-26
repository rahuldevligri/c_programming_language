/*
Write a program to check whether a
given number positive or not-positive.
*/

#include<stdio.h>
#include<conio.h>

void main(){
   int num;

   printf("check positive or not-positive number\n");
   printf("Enter a number: ");
   scanf("%d",&num);
   if(num > 0){
       printf("%d is Positive",num);
   }
   else{
       printf("%d is Non-positive",num);
   }
   //in one line.....
//(num>0)? printf("%d is Positive",num):printf("%d is Non-positive",num);
}

