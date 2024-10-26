#include <stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[10];
}; // --> semicolon is important
int main(){
int s = 34;
char b = 'R';
float d = 12.432;
//employee e1;
//e1.salary = 34.23; ---> wont work without employee structure 
struct employee e1;
e1.code = 100;
e1.salary = 50.555;
//e1.name = "Rahul"--> wont work
strcpy(e1.name,"Rahul");

printf("%d\n",e1.code);
printf("%.3f\n",e1.salary);
printf("%s\n",e1.name);
    return 0;
}