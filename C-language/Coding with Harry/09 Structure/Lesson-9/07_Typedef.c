#include<stdio.h>
#include<string.h>

typedef struct employee{
    int code;
    float salary;
    char name[20];
}emp;

void show(emp e1){
    printf("The code of employee is: %d\n",e1.code);
    printf("The code of employee is: %f\n",e1.salary);
    printf("The code of employee is: %s\n",e1.name);
}
int main(){
    emp e1;
    emp  *ptr = & e1;

    ptr -> code = 101;
    ptr -> salary = 9999.9;
    strcpy(ptr -> name, "Rahul");

    show(e1);

    return 0;
}