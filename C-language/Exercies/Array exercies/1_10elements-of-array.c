/*1. Write a program in C to store elements in an array and print it. Go to the editor
Test Data :
Input 10 elements in the array :
element - 0 : 1
element - 1 : 1
element - 2 : 2
.......*/

#include <stdio.h>

int main(){
int i, arry[10];
for (i = 0; i < 10; i++)
{
    printf("Enter The Elements %d of Number ",i+1);
    scanf("%d",&arry[i]);
}
    printf("\nElements in array are: ");
    for ( i = 0; i <10 ; i++)
    {
        printf("%d  ", arry[i]);
    }
        printf("\n");
    return 0;
}