#include <stdio.h>

int main(){
int a=1,i,b;
printf("Input number of rows ");
scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(b=0;b<=i;b++)
        printf(" %d ",i);
        printf("\n");
    }
    return 0;
}