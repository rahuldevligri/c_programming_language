#include<stdio.h>

int main(){
    int age;
        printf("Enter your age\n");
        scanf("%d", & age);
    if(age <= 25){
        printf("You can't participate");
    }
    else{
        printf("You can participate");
    }
    return 0;
}