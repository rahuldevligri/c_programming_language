/*Write a program to compute the perimeter and
the area of a circle  with a  given radius
*/
#include <stdio.h>

int main(){
int radius=6;
float area,perimeter,pi = 3.14;

perimeter =2*pi*radius;
printf("perimeter of the circle = %f inches\n",perimeter);

area =2*pi*radius;
printf("area of the cricle = %f inches\n",area);    
    return 0;
}