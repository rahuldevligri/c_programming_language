//C program to find Grade of a students using switch case.
#include<stdio.h>

int main()
{
    int marks;
        printf("Enter your marks\n");
        scanf("%d", &marks);
        if(marks < 0 || marks > 100)
        {
            printf("Invalid Entry\n");
        }
        switch (marks/10)
        {
            case 10:
            case 9:
                printf("Your Grade is A");
                break;

            case 8:
                printf("Your Grade is B");
                break;
            case 7:
                printf("Your grade is C");
                break;
            case 6:
                printf("Your grade is D");
                break;
            default:
                printf("Your grade is F"); 
                break;

        }
            
    return 0;
}
