//C program to print natural numbers in reverse from n to 1 in while loop
#include<stdio.h>

int main(){
    int i;
    printf("Enter the number ");
    scanf("%d",&i);
while(i>=1){
        printf("%d\n", i);
        i--;
    }
return 0;  
}