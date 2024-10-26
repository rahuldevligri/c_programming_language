#include <stdio.h>
int fib();
int main(){
int n,result;
    result = fib(n);
     printf ("Enter the Nth Number: ");
  scanf ("%d", &n);
   printf ("The %dth number in Fibonacci series is %d\n",result);
    return 0;
}
int fib(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return (fib(n-1)+fib(n-2));
    }
}