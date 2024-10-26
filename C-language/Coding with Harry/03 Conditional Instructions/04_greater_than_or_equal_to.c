#include<stdio.h>

int main()
{
    int age;
    printf("enter your age\n");
    scanf("%d", &age);
    if(age>=90){
      printf("You can not drive");  
    }
    else{
        printf("You can drive");
    }
    return 0;
}