#include <stdio.h>

int main(){
int a,i,b;
printf("Enter the number of rows ");
scanf("%d",&a);
for(i=0;i<=a;i++)
{
    for(b=1;b<=i;b++)
    printf("*");
    printf("\n");
}
    return 0;
}