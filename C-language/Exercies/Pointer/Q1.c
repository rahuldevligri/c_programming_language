/*Write a program to print the address of a variable. 
Use this address to get the value of this variable.*/
#include<stdio.h>

int main(){
    int a=6,*b=&a;
    printf("The Address of a is %u\n",b);
    printf("The Address of a is %u\n",&a);
    printf("The Address of b is %u\n",&b);
    printf("the Value of a is %d",*b);
 return 0;   
}