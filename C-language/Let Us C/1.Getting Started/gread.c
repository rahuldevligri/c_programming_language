#include<stdio.h>

void main()
{
    int p;
    printf("Enter your percentage:");
    scanf("%d",&p);

    if(p<0 ||p>100)
    {
        printf("Enter Valid Marks");
    }
    else if (p>=90)
    {
        printf("Grade A");
    }
    else if (p>=80)
    {
        printf("Grade B");
    }
    else if (p>=70)
    {
        printf("Grade C");
    }
    else if (p>=60)
    {
        printf("Grade D");
    }
    else if (p>=40)
    {
        printf("Grade E");
    }
    // else if (p=40)
    // {
    //     printf("Grade F");
    // }
    else
    {
        printf("Grade F");
    }  
}