#include<stdio.h>
void Display(); //function prototype
int main(){
    int a;
    printf("Initializing Display Function\n");
    Display();//Function Call
    printf("Display Function Finished its work\n");
    return 0;
}
// Function Defintion
void Display(){
    printf("This is Display\n");
}