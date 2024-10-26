#include <stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary; 
    char name[10];
};

int main(){
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;

   //(*ptr).code = 101; <--Both are right
    ptr->code = 101;  //  <-|
    (*ptr).salary = 123.456;
    strcpy(ptr->name,"Rahul");

    printf("%d\n",e1.code);
    printf("%.3f\n",e1.salary);
    printf("%s\n",e1.name);
    return 0;
}