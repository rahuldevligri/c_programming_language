#include<stdio.h>
#define PI 3.14159
int main(void)
{ 
 	int radius;
 	printf("Enter radius:");
 	scanf("%d", &radius);
	// printf("volume is : %lf \n\n", (4.00/3)*PI*(radius*radius*radius) );
    printf("volume is : %lf \n\n", 4.00*PI*radius*radius*radius/3 );
	return 0;
}