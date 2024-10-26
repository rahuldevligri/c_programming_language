#include <stdio.h>

int main()
{
int a,i,b;
printf("enter the number ");
scanf("%d",&a);

for(i=1;i<=a;i++)
{
    for(b=1;b<=i;b++)

    if(b<=a-1)
        printf("%dx%d = %d ",b,i,i*b);
        
    else    
        printf("%dx%d = %d ",b,i,i*b);
     {
         printf("\n");
     }    
}
    return 0;
}