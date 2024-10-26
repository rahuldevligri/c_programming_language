// 02--> Write a program to find the sum of first 10 natural numbers
#include <stdio.h>

int main(){
int a,b=0;
    printf("The first 10 natural numbers is: \n");
    for ( a = 1; a <= 10; a++)
    {
        b=b+a;
        printf("%d ", a);
    }
        printf("\n The sum is : %d \n" , b );
   
    return 0;
}