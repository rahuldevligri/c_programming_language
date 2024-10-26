//Takes Nothing Returns Something...

#include<stdio.h>

int add(){
    int a,b,c;
       printf("Enter Two Numbers\n");
       scanf("%d%d",&a,&b);
    //    c=a+b;
//return c;
return (a+b);
}
int main(){
    int s;
    s=add();
    printf("Sum is %d",s);
}