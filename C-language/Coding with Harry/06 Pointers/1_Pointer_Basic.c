#include <stdio.h>

int main(){
int i=34;
    int *j = &i; //j will now store the address of i
    printf("The value of i is %d\n",i);
    printf("The value of i is %d\n",*j);
    printf("Thee address of i is %u\n",&i);
    printf("Thee address of i is %u\n",j);
    printf("Thee address of j is %u\n",&j);
    printf("Thee value of j is %u\n",*(&j));

    return 0;
}
