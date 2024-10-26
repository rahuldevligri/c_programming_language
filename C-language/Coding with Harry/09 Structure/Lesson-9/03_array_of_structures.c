#include <stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){
struct employee facebook[100];

facebook[0].code = 100;
facebook[0].salary = 999.9;
strcpy(facebook[0].name,"Rahul");

facebook[1].code = 100;
facebook[1].salary = 999.9;
strcpy(facebook[1].name,"Rohit");

facebook[2].code = 100;
facebook[2].salary = 999.9;
strcpy(facebook[2].name,"Love");
    
    return 0;
}