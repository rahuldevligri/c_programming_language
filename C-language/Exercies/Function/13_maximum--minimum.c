//Program to find maximum and minimum between two numbers using functions...

#include<stdio.h>

int max(int num1,int num2){
    return  (num1 > num2 ) ? num1 : num2;
 }
int mini(int num1, int num2){
    return (num1 < num2 ) ? num1 : num2;
}
int main(){
    int num1,num2;
    int a,b;
        printf("Enter 2 Number: \n");
        scanf("%d%d",&num1,&num2);
a=max(num1,num2);
   printf("Maximum = %d\n",a);
b=mini(num1,num2);
   printf("Minimum = %d\n",b);

return 0;
}