void main()
{
    int x,a;
    printf("Enter a no.");
    scanf("%d",&x);
    a=x/2;
    if(a*2==x)
        printf("even");
    if(a*2!=x)
        printf("odd");
    getch();
}
