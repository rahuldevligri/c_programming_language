//Write a program to print first N terms of a Fibonacci series.

#include <stdio.h>

void main(){
    int a=0,b=1,c,N;
    printf("Enter a number");
    scanf("%d",&N);
    printf("%d ",1);
    for(int i=1;i<=N-1;i++)
   {
        c=a+b;
        a=b;
        b=c;
printf("%d ",c);
   }
}
