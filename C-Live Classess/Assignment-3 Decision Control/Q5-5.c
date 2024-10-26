/* Write a program to check whether a year is leap year or not?*/
void main()
{
    int year;
    printf("Enter a Year:");
    scanf("%d",&year);
    if(year%4)
        printf("Not a Leap Year");
    else if(year%100)
        printf("Leap Year");
    else if(year%400)
        printf("Not a Leap Year");
    else
        printf("Leap Year");
getch();
}

