#include<stdio.h>

int main()
{
    int a,i=0;
    printf("Input the number(Table to be calculated) : ");
    scanf("%d",&a);
while (i<=10)
{
    printf("%d X %d = %d\n",a,i,i*a);
    i++;
}


    return 0;
}