#include<stdio.h>

int main(){
    int a;
       printf("Enter the numbers of terms ");
       scanf("%d",&a);
       for(int i=0;i<=a;i++)
       {
        printf("Number id : %d and the cube of the %d is : %d \n",i,i,i*i*i);
       }



    return 0;
}