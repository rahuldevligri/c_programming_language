/* print this shap
    1
    01
    101
    0101
    10101
*/    

#include<stdio.h>
void main()
{
    int i,j,p=0;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
          p=j+i;
            if(p%2)
                printf("%d",0);
            else
            printf("%d",1);
        }
         printf("\n");
    } 
}