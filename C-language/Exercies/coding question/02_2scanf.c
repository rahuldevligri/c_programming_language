#include<stdio.h> 

int main()
{
    int radius;
    printf("radius \n");
    scanf("%d", &radius);

    float pi = 3.14;
    printf("pi %f\n", pi);
    
    float f = pi * radius * radius;
    printf("circle %f", f);

    return 0;
}
