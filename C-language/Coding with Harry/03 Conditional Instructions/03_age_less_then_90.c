#include<stdio.h>

int main(){
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    if(age > 90){
        printf("You are above 90,You cannot drive");
    }
    else{
        printf("you can drive");
    }
    return 0;
    }