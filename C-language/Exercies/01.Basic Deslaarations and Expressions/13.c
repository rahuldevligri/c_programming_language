/*Write a program that */

#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b,c,max,result;
    printf("Enter the three digit \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

result=(+a+b+abs(a-b))/2;
max=(result+c+abs(result-c))/2;
printf("\nMaximum value of three digit = %d", max);
printf("\n");
    return 0;
}