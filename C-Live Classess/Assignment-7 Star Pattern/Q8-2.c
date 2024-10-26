#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,p=0;

    for(i=4;i>=1;i--)
    {
        for(j=1;j<=7;j++)
       {
            if(j>=i)
            {
                p++;
                if(p==5-i)
                {
                  printf("%d",p);
                //p--; 
                }
            else if(j>5-i)  
            {
             p++;
             printf("%d",p);
            }  
                else if(p>i)
                {
                    p--;
                }
                else
                printf("%d",p);
                 
            }
            else
            printf(" ");
        }
    printf("\n");
    p=0;
    }
}
