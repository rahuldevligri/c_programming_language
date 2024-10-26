#include <stdio.h>

int main(){
    int a,i,b;
        printf("Input number of rows  = ");
        scanf("%d",&a);
    for(i=1;i<=a;i++)
{
    for(b=1;b<=i;b++)
       printf("\n");
       printf("%d ",b);
}
    return 0;
}