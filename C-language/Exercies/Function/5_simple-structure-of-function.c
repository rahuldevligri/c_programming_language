//Write a program in C to show the simple structure of a function.

#include<stdio.h>

int sum(int a,int b){ ////function declaration and function definition
    return (a+b); //function returning a value
}
int main(){
    int total;
		printf("\n\n Function : a simple structure of function :\n");
		printf("------------------------------------------------\n");	
        total = sum(5, 6);//function call
        printf ("The total is :  %d\n", total);
        return 0;
}