//Question3-->Write a program to check whether a number is divisible 97 or not?

#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    printf("Divisibility test return: %d\n", num%97);
    return 0;
}