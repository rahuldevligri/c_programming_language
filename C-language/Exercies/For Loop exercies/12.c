#include<stdio.h>

int main()
{
    int a,b,c,d=1;
       printf("Enter The Number ");
       scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        for(c=1;c<=b;c++)
        {
            printf(" %d ",d++);
        }
            printf("\n");
    }   

    return 0;
}