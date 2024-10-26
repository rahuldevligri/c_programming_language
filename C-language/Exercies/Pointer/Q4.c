/* 
  Write a program using a function that calculates the sum 
  and average of two numbers. Use pointers and print the 
  values of sum and average in main().
*/  

#include<stdio.h>

void SumAvg(int a,int b,int *sum,float *avg){
    *sum = a+b;
    *avg = (float)(*sum)/2;
}
int main(){
    int a=3,b=6,sum;
    float avg;

    SumAvg(a,b,&sum,&avg);
    printf("Sum of %d and %d is %d\n",a,b,sum);
    printf("Avg of %d and %d is %.2f",a,b,avg);
    return 0;
}