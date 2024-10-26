/*
//logic-1---> Find LCM of two numbers in C using while loop....
#include<stdio.h>

int main()
{
    int a,b,LCM;
        printf("Enter two numbers:\n");
        scanf("%d%d",&a,&b);
    LCM = (a > b) ? a : b;
while(1)
{
    if(LCM % a == 0 && LCM % b == 0)
    {
        printf("\nLCM of %d and %d is %d\n", a, b,LCM);
        break;
    }
 ++LCM;
} 
   return 0;   
}
*/
/*

//logic-2---> Find LCM of two numbers in C using for loop....

#include<stdio.h>
int main()
{
    int a,b,lcm;
        printf("Enter two numbers:\n");
        scanf("%d%d",&a,&b);
lcm = a>b ? a : b;
for(lcm=1;lcm<=a*b;lcm++)
{
   if(lcm % a == 0 && lcm % b == 0)
    break;
}
    printf("\nLCM of %d and %d is %d\n", a, b,lcm);
  
   return 0;   
}
*/

//logic-3---> Find LCM of two numbers in C using for loop....

#include<stdio.h>
int main()
{
   int a,b,lcm;
        printf("Enter two numbers:\n");
        scanf("%d%d",&a,&b);
    for(lcm=a>b?a:b;lcm<=a*b;lcm++)
    // for(lcm=a>b?a:b;lcm<=a*b;lcm=lcm+(a>b?a:b))
    {
        if(lcm%a==0 && lcm%b==0)
           printf("\nLCM of %d and %d is %d\n", a, b,lcm);
           break;
           
        
    }    
    return 0;
}