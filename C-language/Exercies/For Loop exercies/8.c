#include<stdio.h>

int main(){
    int i,n,sum=0;
    printf("Input numbers of terms = ");
    scanf("%d",&n);
    printf("The odd numbers are = ");
    for (i=1;i<=n; i++)
    {
       printf(" %d ",2*i-1);
    sum+=2*i-1;
    }
     printf("\nTHe Sum of odd natural number upto %d terms = %d \n",n,sum);
    return 0;
}