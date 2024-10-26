//What will the following line produce in a C program: printf(“%d %d %d\n”,a,++a,a++);

#include <stdio.h>

int main(){
int a=3;
    printf("%d %d %d\n",a,++a,a++); //Right to left
    printf("%d %d %d\n",a,--a,a--); //a=5
    // printf("%d %d %d\n",a,--a,a--);
    // printf("%d\n",--a);
    // printf("%d\n",a--);

    return 0;
}