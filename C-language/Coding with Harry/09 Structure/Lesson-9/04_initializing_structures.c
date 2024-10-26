#include <stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){
struct employee rahul = {100,19.44,"Rahul"};

printf("Code is: %d \n",rahul.code);
printf("Salary: %f \n",rahul.salary);
printf("Name is: %s \n",rahul.name);

return 0;
}