// Takes Nothing Returns Nothing...

#include<stdio.h>
void add(void);
void main(){
    add();
}
void add(){
    int c,a,b;
        printf("Enter Two Numbers\n");
        scanf("%d%d",&a,&b);
        c = a+b;
        printf("sum is %d\n",c);
}