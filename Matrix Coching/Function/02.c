/* write a function to print pow of a nummber.*/
#include<stdio.h>

int fib(int n)
{
    if(n<=1)
            return n;
    return fib(n-1)+fib(n-2);
}
void main()
{
    int n;
    printf("Enter a no: ");
    scanf("%d",&n);
    printf("ans of %d is %d",n,fib(n));
}