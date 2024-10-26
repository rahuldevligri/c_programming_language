#include <stdio.h>

int main(){
int a,b,c;
printf("Enter the number\n");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);

// if (a>b==a && a>c==a || b>a==b && b>c==b)
// if((a>b,c)|| b>a,c)
// if(a>b,c)
if(a>b && a>c)
{
    printf(" %d is greater then %d and %d",a,b,c);
}
//  else if (b>a,c)
 else if (b>a && b>c)
{
    printf(" %d is greater then %d and %d",b,a,c);
}
else
{
    printf(" %d is greater then %d and %d ",c,a,b);
}
   return 0;
}