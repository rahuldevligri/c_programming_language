//1.Write a program to swap values of two int variables.
main()
{
    int a,b;
    printf("Enter two Numbers: ");
    scanf("%d%d",&a,&b);
    printf("a = %d & b = %d",a,b);
    printf("\n After Swpping...\n");
    b = (a+b) - (a=b);
    printf("a = %d & b = %d",a,b);
    getch();
}
