#include<stdio.h>

int main()
{
    int radious;
    printf("Enter the value of radious \n");
    scanf("%d", &radious);

    float pi = 3.14;
    printf("the value of pi is %f\n", pi);

    printf("The area of this cricle is %f\n", pi * radious * radious);

    int height;
    printf("Enter The volume of cylinder \n");
    scanf("%d", &height);

    printf("The area of this cylinder is %f", pi * radious * radious *height);

    return 0;
}
