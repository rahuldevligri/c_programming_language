#include<stdio.h>

int main()
{
    int a,b,c,d,e,f=1;
    printf("Input  number of rows ");
    scanf("%d",&a);
    b=a+4-1;
    for(c=1;c<=a;c++)
    {
    for(d=b;d>=1;d--)
    {
    printf(" ");    
    }
    for(e=1;e<=c;e++)
    printf("%d ",f++);
    printf("\n");
    b--; 
    }
    return 0;
}