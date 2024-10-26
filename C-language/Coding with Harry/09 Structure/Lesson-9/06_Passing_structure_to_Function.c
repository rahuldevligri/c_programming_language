/*
void show(struct employee e); =>Function prototype

Quick Quiz: Complete this show function 
to display the content of the employee.
*/
#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

void show(struct employee emp){
    printf("The code of employee is: %d\n",emp.code);
    printf("The code of employee is: %f\n",emp.salary);
    printf("The code of employee is: %s\n",emp.name);
    emp.code = 34; //<-- dont change emp.code value
}
int main(){
    struct employee e1;
    struct employee *ptr = & e1;

    ptr -> code = 101;
    ptr->salary = 999.9;
    strcpy(ptr->name,"Rahul");

show(e1);
printf("The code of employee is: %d\n",e1.code);
    return 0;
}