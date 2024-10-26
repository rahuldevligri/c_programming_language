#include<stdio.h>

int area(float r)
   {
     float a,pi;
    pi=3.14;
    a = pi*r*r;
     return a;
   } 
int main()
{
   float radius,a;
   printf("Enter Radius of a circle: ");
   scanf("%f",&radius);
   a= area(radius);
   printf("Radius of a circle is %.2f ",a);
    return 0;
}