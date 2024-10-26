/*Write a program to accept two integer 
and check wether they are equal or not.? */
#include<stdio.h>

int main(){
    int x,y;
    printf("Enter Two Numbers\n");
    scanf("%d%d",&x,&y);

    if(x==y) {
        printf("Number 1 and Number 2 are equal");
    }
    else{
        printf("Number 1 and Number 2 aren't equal");
    }

    return 0;
}