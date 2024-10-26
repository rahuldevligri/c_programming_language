#include<stdio.h>

int main()
{
    int a[5],b[5],c=0,i,j=0;

    printf("Enter 5 number");
    for(i=0;i<=4;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
      for(j=0;j<=3;j++)
      {
         if(a[j]>a[j+1])
         {
             c=a[j];
             a[j]=a[j+1];
              a[j+1]=c;
          }
        }
      }
    for(i=0;i<5;i++)
    {
    printf("%d ",a[i]);
    }
    return 0;
}