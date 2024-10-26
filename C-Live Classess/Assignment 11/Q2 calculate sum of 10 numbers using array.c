#include<stdio.h>

int main()
{
    int arr[10],sum=0,avg;
    printf("Enter 10 numbers");
    for(int i=0;i<10;i++)
    {
      scanf("%d",&arr[i]);
      sum+=arr[i];
    }
    printf("sum of 10 numbers is %d",sum);
    return 0;
    
}