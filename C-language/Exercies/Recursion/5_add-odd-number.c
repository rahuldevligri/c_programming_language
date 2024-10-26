#include<stdio.h>
int even(int n){
    if(n==0)
      return 0;
    
    else
        return n+even(n-2);
}
int odd(int n2){
    if(n2==1)
      return 1;
    else
       return n2+odd(n2-2);  
}
int main(){
    int n,n2,s,t;
       printf("----Add Even Number 1 to n using recursion-----\n");
        printf("Enter value of n:");
        scanf("%d",&n);
       printf("\n----Add Odd Number 1 to n using recursion-----\n");
        printf("Enter value of n:");
        scanf("%d",&n2);
    s=even(n);
        printf("\n Sum of even number is %d",s); 
    t=odd(n2);
        printf("\n Sum of odd number is %d",t);     
return 0;          
}