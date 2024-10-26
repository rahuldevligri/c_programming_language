#include<stdio.h>

int main()
{
    int arr[10],l=0,g=0,avg;
    printf("Enter 10 numbers");
    for(int i=0;i<10;i++)
    {
      scanf("%d",&arr[i]);
        if(arr[i]>g)
        {
          g=arr[i];
        }
        else
         l=arr[i];
    }
    printf("greatest %d and Lowest %d",g,l);
    return 0;
    
}