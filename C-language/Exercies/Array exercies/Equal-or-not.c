//Write a C program to accept two integers and check whether they are equal or not.?

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the Two Number \n");
    scanf("%d%d",&a,&b);
    if(a==b || b==a){
        printf("%d and %d are equal",a,b);
    }
    else{
        printf("%d and %d are not equal",a,b);
    }
    return 0;
}