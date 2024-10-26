#include<stdio.h>

int main(){
    int age;
    printf("Enter your age\n");
    scanf("%d", & age);
    if(age < 18){
        printf("You can't enter\n");
    }
    else{
        printf("You can enter\n");
    }
    if (age > 25)
    {
        printf("but You can enter with your partner\n");
    }
   
    if (age >= 75)
    {
       printf("but You can't dance\n");
    }
    if (age <= 50)
    {
        printf("and you don't have to pay dinner");
    }
    return 0;
}