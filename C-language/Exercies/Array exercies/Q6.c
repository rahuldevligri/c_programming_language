/*
   Repeat problem 5 for a general input 
   provided by the user using scanf()
*/
#include <stdio.h>

int main(){
int mul[10],num;
printf("enter the number you want multification table ");
scanf("%d",&num);
    for(int i=0;i<10;i++){
        mul[i]=num*(i+1);
    } 
    for(int i=0;i<10;i++){
        printf("%dX%d = %d\n",num,i+1,mul[i]);
    }
return 0;
}