#include<stdio.h>

int main()
{
    int lenght, breath;
    printf("what is the lenght of the rectangle\n");
    scanf("%d", &lenght);

    printf("What is the bright of the rectangle\n");
    scanf("%d", &breath);

    printf("The area of your rectangle is %d\n", lenght * breath);
    return 0;
}
