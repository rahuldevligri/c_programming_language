/* Write a program to check whether a number is even or odd?*/
void main()
{
    int x;
    printf("Enter a Number:");
    scanf("%d",&x);
    if(x%2)
        printf("odd");
    if(!(x%2))
        printf("even");

    getch();
}
