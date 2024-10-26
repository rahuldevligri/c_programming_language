/* Write a C program to input radius of circle from user
 and find diameter, circumference and area of the given
 circle using function. How to find diameter, 
 circumference and area of a circle using function in C programming.*/

#include <stdio.h>
#include <math.h> // Used for constant PI referred as M_PI
 
double circle(int radius){
    double circumference,diameter,area;
    diameter = 2 * radius; 
        printf("Diameter of the circle = %.2f units\n",diameter);
    circumference = 2 * M_PI * radius;  //M_PI = PI = 3.14 ... 
        printf("Circumference of the circle = %.2f units\n",circumference);
    area = M_PI * radius * radius; //M_PI = PI = 3.14 ... 
        printf("Area of the circle = %.2f sq. units",area);
} 
int main(){
    int radius;
    double c;
        printf("Enter a radius of circle: ");
        scanf("%d",&radius);
    circle(radius);
return 0;
}