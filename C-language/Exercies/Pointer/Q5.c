/* Write a program to print the value of a variable i 
   by using the "pointer to pointer" type of variable.
*/

#include<stdio.h>

int main(){
    int i=345,*ptr=&i,**ptr_ptr=&ptr;
    printf("The Address of i is %d",**ptr_ptr);
    return 0;
}