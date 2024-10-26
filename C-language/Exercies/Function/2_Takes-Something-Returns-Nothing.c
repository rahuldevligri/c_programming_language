//Takes Something Returns Nothing...
#include <stdio.h>

void add(int,int); //global declaration
void main(){
int x,y;
    printf("Enter Two Numbers\n");
    scanf("%d%d",&x,&y);    
    add(x,y); //Actual Arguments : Call By Value
}
void add(int a,int b){ //formal Arguments 
    int c=a+b;
    printf("Sum is %d",c);
}