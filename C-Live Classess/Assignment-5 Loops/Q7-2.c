#include <stdio.h>
void main(){
    int a=0,m,p,N,i;
    printf("Enter a number");
    scanf("%d",&N);

       for(i=5;N!=0;i--)
   {
        m=N%10;
        p=a+m;
        N=N/10;
        a=p*10;

   }
   printf("%d ",p);
}
