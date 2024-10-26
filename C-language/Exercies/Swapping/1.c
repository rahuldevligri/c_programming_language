// Swapping of two integers...
#include <stdio.h>

int main(){
    int num1,num2,temp;
        printf("Enter Two Numbers:\n");
        scanf("%d%d",&num1,&num2);
    temp=num1;
    num1=num2;
    num2=temp;
        printf("a=%d b=%d",num1,num2);
    return 0;
}