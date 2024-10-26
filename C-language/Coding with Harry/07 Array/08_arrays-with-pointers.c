#include<stdio.h>

int main()
{
    int marks[4];
    int *ptr;
    // ptr = &marks[0];
    ptr = marks;
    for (int i = 0; i < 4; i++)
    {
        printf("\nEnter the value of marks for student %d: ",i+1);
        scanf("%d",ptr);
        ptr++;
    }
    for(int i=0;i<4;i++)
    {
        printf("\nThe value of marks for student %d is %d \n",i,marks[i]);
    }
return 0;
}