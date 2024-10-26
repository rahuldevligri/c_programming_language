//Write a C program to check whether a given number is even or odd.?

#include<stdio.h> //header file
int main(){ //integer type main function
    int n; //integer inisiligation
    printf("Enter a Number to check Even or Odd\n"); //prihtf function 
    scanf("%d",&n);
    if(n%2==0){
        printf("%d is an even Number\n",n);
    }
    else{
        printf("%d is an Odd number",n);
    }
    return 0;
}