//Write a program to calculate average of three numbers.

main()
{
    int a,b,c;
    float avg;
    printf("Enter three Integer Number:\n");
    scanf("%d%d%d",&a,&b,&c);
    avg = (a+b+c)/3.0;
    printf("Average of %d, %d and %d is %f",a,b,c,avg);
}
