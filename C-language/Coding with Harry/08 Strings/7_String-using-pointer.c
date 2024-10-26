#include <stdio.h>

int main(){
char *ptr;

printf("Enter your name: ");
gets(ptr);
printf("Your name is "); 
puts(ptr);

//char *ptr = "RAHUL DEVLIGRI";
//printf("%s",ptr); 
    
    return 0;
}