/* Write a program to compute the perimeter and the area of 
  rectangle with a height of 7 inches.
  and width of 5 inches. 
 */
#include <stdio.h>

int main(){
int height = 7,width = 5;
printf("perimeter of the rectangle is %d\n",2*height+width*2);
// Perimeter of the rectangle foemula =2*height+width*2

printf("area of the rectangle is %d\n",width*height);
// area of the rectangle formula --> area = width * height
    return 0;
}