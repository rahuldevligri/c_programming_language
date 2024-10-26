#include <stdio.h>

int main(){
    // char ptr[] = "Rahul";
    // ptr = "Kush";    <--Error
    // printf("%s",ptr);  

char *ptr = "Rahul";
    printf("%s\n",ptr);
ptr = "Kush";
    printf("%s",ptr);
    return 0;
}