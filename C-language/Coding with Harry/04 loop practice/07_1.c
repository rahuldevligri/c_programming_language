#include<stdio.h>
int main(){
   int n=8,i,m=1;
   
    for(i=1;i<=10;i++)
    {
        m=i*n;
        printf("%d X %d  = %d\n",n,i,m);
    }
    return 0;
}