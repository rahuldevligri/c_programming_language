#include <stdio.h>

int main(){
    int radius;
    printf("Enter the value of radius \n");
    scanf("%d", &radius);

    float pi = 3.14;
    printf("The value of pi is %f\n", pi);

    printf("The area of this circle is %f", radius * radius * pi);

    return 0;
}