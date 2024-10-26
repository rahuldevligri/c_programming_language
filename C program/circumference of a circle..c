#include<stdio.h>

int area(float r)
   {
     float a,pi;
    pi=3.14;
    a = 2*pi*r;
     return a;
   } 
int main()
{
   float radius,a;
   printf("Enter Radius: ");
   scanf("%f",&radius);
   a= area(radius);
   printf("circumference of a circle %.2f ",a);
    return 0;
}