#include<stdio.h>

int main()
{
    int a[5],b[5],c=0,i,j=0,k;

    printf("Enter 5 number");
    for(k=0;k<=4;k++)
    {
      scanf("%d",&a[k]);
    }
    for(i=0;i<5;i++)
    {
      for(j=0;j<=3;j++)
      {
  
         if(a[j]>a[j+1])
            c=a[j+1];
         else
         {
             c=a[j];
             a[j]=a[j+1];
              a[j+1] = c;
         }
       }
        b[i]=c;
      }
        printf("\n");
    for(i=0;i<5;i++)
    {
    printf("%d ",a[i]);
    }
    return 0;
}