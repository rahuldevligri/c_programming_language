//Write a program in C to calculate the sum of numbers from 1 to n using recursion

#include <stdio.h>
int sumOfRange(int n){
    int result;
        if(n==1){
            return 1;
        }
        else{
            result = n + sumOfRange(n-1); //calling the function sum itself         
        }
}
int main(){
int n,sum;
    printf("\n\n Recursion : calculate the sum of numbers from 1 to n :\n");
	printf("-----------------------------------------------------------\n");    
 
    printf(" Input the last number of the range starting from 1 : ");
    scanf("%d",&n);

sum = sumOfRange(n);
    printf("\n The sum of numbers from 1 to %d : %d\n\n", n, sum);
    
    return 0;
}