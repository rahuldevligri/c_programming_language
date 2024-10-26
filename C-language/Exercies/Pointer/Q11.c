//Write a program in C to find the maximum number between two numbers using a pointer.

#include<stdio.h>

int main(){
    int i,*ii=&i,j,*jj=&j;
    printf("Enter two Numbers\n");
    scanf("%d%d",&i,&j);
    (*ii > *jj)?printf("Max = %d",*ii) : printf("Max = %d",*jj);
    
    return 0;
}