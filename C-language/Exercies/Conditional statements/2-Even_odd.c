#include<stdio.h>

int main(){
    int i;
    printf("Enter a Number ");
    scanf("%d",&i);

    if(i%2==0){
        printf("%d is an Even Number",i);
    }
    else{
        printf("%d is an Odd Number",i);
    }
    return 0;
}