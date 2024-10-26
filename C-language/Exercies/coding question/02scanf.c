#include<stdio.h> 

int main()
{
    int radius;
    printf("radius \n");
    scanf("%d", &radius);

    float pi;
    printf("pi \n");
    scanf("%f", &pi);

    printf("circle %f", pi * radius * radius);

    return 0;
}
