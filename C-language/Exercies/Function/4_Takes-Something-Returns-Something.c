//Takes Something Returns Something...

#include<stdio.h>

int add(int a,int b){
    int c =a+b; 
    return (c); //Type 1
}
int sum(int r,int s){

    return (r+s); //Type 2
}
int main (){
    int x,y,z;
       printf("Enter Two numbers\n");
       scanf("%d%d",&x,&y);
    z = add(x,y);
       printf("Sum is %d\n",z);    
    z = sum(x,y);    
       printf("Sum is %d",z);
}