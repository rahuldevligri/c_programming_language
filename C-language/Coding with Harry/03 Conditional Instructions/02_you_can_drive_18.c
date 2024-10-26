#include<stdio.h>

int main(){
    int a;
     printf("Enter the age\n");
    scanf("%d", &a);
    
    if (a > 18){
    printf("%d You can drive\n",a);
    }
    else {
        printf("%d You can't drive",a);
    }
    return 0;
}