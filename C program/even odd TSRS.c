#include<stdio.h>

int evod(int n)
   {
     if(n%2)
       return 0;
    else
      return 1;
}
void main()
{
   int n;
   printf("Enter a number: ");
   scanf("%d",&n);
printf(evod(n)==0?"odd":"even");
   
}