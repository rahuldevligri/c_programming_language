//Write a program to check whether a given number is positive,negative or zero.
#include <stdio.h>

int main(){
int num;

    printf("Enter a number: ");
    scanf("%d",&num);


    if(num > 0){
        printf("positive number");
    }
    if(num < 0)
    {
        printf("Negative number");
    }
     if(num == 0)
    {
        printf("Zero number");
    }
    return 0;
}
