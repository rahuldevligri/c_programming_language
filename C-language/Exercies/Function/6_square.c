//Write a program in C to find the square of any number using the function.

#include<stdio.h>
int square(double a){
int c = (a*a);
return c;
}
int main(){
   int num;
    double n;
	printf("\n\n Function : find square of any number :\n");
	printf("------------------------------------------------\n");	
     
    printf("Input any number for square : ");
    scanf("%d", &num);
    n = square(num);
    printf("The square of %d is : %.2f\n", num, n); 
    return 0;
}