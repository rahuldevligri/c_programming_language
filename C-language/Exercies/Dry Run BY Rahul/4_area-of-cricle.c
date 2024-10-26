/*
//Program to find area of a circle using functions...

#include<stdio.h>
#include<math.h>

float area_of_a_circle(float radius)
{
    return  M_PI * radius * radius;
}
int main()
{
    float area, radius;
        printf("\nEnter the radius of the circle : ");
        scanf("%f", &radius);

area = area_of_a_circle(radius);
       printf("\nArea of the circle : %f\n", area);
    return 0;
} 
*/

//Program to find area of a circle using pointers...
#include<stdio.h>
#include<math.h>

float area_of_a_circle(float *radius)
{
    return (*radius) * M_PI * (*radius);
}
int main()
{
   float radius;
        printf("\nEnter the radius of circle: ");
        scanf("%f",&radius);
    printf("\nArea of the circle : %.2f\n",area_of_a_circle(&radius));    
    return 0;
}