#include<stdio.h>
int sumdigit(n)
{
    if(n<10)
    return n;
 return n%10+sumdigit(n/10);   
}
void main()
{
    int a;
    printf("Enter a no:");
    scanf("%d",&a);
    printf("ans of %d is %d",a,sumdigit(a));
}