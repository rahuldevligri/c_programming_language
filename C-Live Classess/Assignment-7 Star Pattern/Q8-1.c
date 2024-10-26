#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,p=0;

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
       {
            if(j>=5-i&&j<=8-i)
            {
                p++;
                if(p==i)
                {
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
