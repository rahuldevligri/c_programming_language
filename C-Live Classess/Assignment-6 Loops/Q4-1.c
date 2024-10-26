/*Write a program to print next prime number of a given number.*/

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,c=0;
    printf("Enter a no.:");
    scanf("%d",&i);
    for(i+=1;;i++)
    {
        for(j=1;j<=i;j++)
        {
            if((i)%j==0)
            {
                c++;
            }
        }
        if (c<=2)
        {
            printf("%d ",i);
            break;
        }
        c=0;

    }
getch();
}