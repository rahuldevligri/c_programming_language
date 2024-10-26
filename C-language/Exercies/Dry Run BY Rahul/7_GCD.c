#include <stdio.h>

int main(){
    int a,b,gcd;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
 //logic-1--->
            // gcd = b%a; //60%36=24
            // b = a%gcd; //36%24=12 <--- ans 
            // a = gcd%b; //24%12=0
        //printf("\nGCD is %d\n",b); 
//logic-2--->
        gcd = b-a; //36-60=24
        b = a-gcd; //60-24=12
        a = gcd-b; //24-12=12 <-- ans
        gcd = a-b; //12-12=0
    //printf("\nGCD is %d\n",a); 
   //printf("\nGCD is %d\n",b);

//logic-3--->
while(a!=b)
{
    if(a>b)
        a = a-b;
    else
       b = b-a;
} 
printf("\nGCD is %d\n",b);
return 0;
}
