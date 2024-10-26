#include <stdio.h>

int main(){
    int a,b,c;
    printf("enter 1 number\n");
     scanf("%d",&a);
    printf("enter 2 number\n");
      scanf("%d",&b);
    printf("enter 3 number\n");
    scanf("%d",&c);
   // a=  , 
   //b= 4
   //c = 9
   if (a>b && a>c )// if(true)
   {
       printf("%d is big",a);
   }
   else if (b>a && b>c)
   {
       printf("%d is big",b);
   }
   else if (c>a && c>b)
   {
      printf("%d is big ",c);
   }
   
    return 0;
}