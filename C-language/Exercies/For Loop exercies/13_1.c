#include<stdio.h>

int main()
{
   int a,b,c,d,e,f=1;
    printf("Input number of rows = ");
    scanf("%d",&d);
    c=d+4-1;
    for(a=1;a<=d;a++)
    {
          for(e=c;e>=1;e--)
             {
               printf(" ");
             }
        for(b=1;b<=a;b++)
        printf("%d ",f++);
      printf("\n");
      c--;  
    }
    return 0;
}