#include<stdio.h>

int main()
{
    int arr[10],e=0,o=0,avg;
    printf("Enter 10 numbers");
    for(int i=0;i<10;i++)
    {
      scanf("%d",&arr[i]);
        if(arr[i]%2)
        {
          o+=arr[i];
        }
        else
         e+=arr[i];
    }
    printf("sum of even %d and odd %d",e,o);
    return 0;
    
}