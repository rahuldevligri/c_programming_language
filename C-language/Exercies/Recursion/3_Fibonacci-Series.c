// Write a program in C to Print Fibonacci Series using recursion.

#include <stdio.h>
int fibonacci(int n){
    if (n==0){
        return 0;
    }
    else if (n==1){
        return 1;
    }
    else {
       return (fibonacci (n - 1) + fibonacci (n - 2));
    }
}
int main(){
int n,result;
    printf("Enter the Number ");
    scanf("%d",&n);
    result = fibonacci(n);
   printf("The %dth number in Fibonacci series is %d\n",n,result);
    
    return 0;
}