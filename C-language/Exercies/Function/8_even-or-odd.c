//Write a program in C to check a given number is even or odd using the function.

#include<stdio.h>

int sum(int num){
   if(num%2==0){
       printf("\n%d is an even number",num);
   }
   else {
       printf("\n%d is a odd number",num);
   }
}

int main(){
   int a,b;
       printf("Enter a number to check odd or even\n");
       scanf("%d",&a);
    b=sum(a); //calling the function


}