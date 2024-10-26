/* Write a C program to input any number
 from user and find cube of the given number
 using function. How to find cube of a given
 number using function in C programming.
 Write a C function to find cube of a given number. */

#include<stdio.h>
double cube(double num){
    return (num*num*num);
}
int main (){
    int num;
        printf("Enter any number: ");
        scanf("%d",&num);
cube(num);
    printf("Cube of %d is %.2f ",num,cube(num));
}