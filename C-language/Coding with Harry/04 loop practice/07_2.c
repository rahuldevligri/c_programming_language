#include<stdio.h>
int main(){
   int n,i,m=1;
    printf("Enter the number ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        m=i*n;
        printf("%d X %d  = %d\n",n,i,m);
    }
    return 0;
}