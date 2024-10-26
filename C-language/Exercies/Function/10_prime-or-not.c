/*Write a program in C to check whether a number
 is a prime number or not using the function. */

#include<stdio.h>
int prime(int x){
      int i; 
        for (i=2; i<=x-1; i++)
        
         if(x%i==0)
         break;
         if(i==x)
            printf("%d is a prime number",x);
         else   
            printf("%d is not a prime number",x);
        
}
int main(){
    int b;
        printf("Enter a number");
        scanf("%d",&b);  
    prime(b);  
return 0;    
}