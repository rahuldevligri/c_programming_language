#include <stdio.h>

int main(){
    int i=34;
    int *ptr=&i;
        printf("----------Integer----------\n");
        printf("The value of ptr is %u\n",ptr);
        ptr = ptr - 1;
        printf("The value of ptr is %u\n",ptr);
        ptr = ptr + 1;
        printf("The value of ptr is %u\n",ptr);
        ptr++;
        printf("The value of ptr is %u\n",ptr);
        ptr--;
        printf("The value of ptr is %u\n",ptr);

    char c=34;
    char *ptrc= &c;
        printf("\n----------FLoat----------\n");
        printf("The value of ptr is %u\n",ptrc);
        ptrc = ptrc - 1;
        printf("The value of ptr is %u\n",ptrc);
        ptrc = ptrc + 1;
        printf("The value of ptr is %u\n",ptrc);
        ptrc++;
        printf("The value of ptr is %u\n",ptrc);
        ptrc--;
        printf("The value of ptr is %u\n",ptrc);

    float f=34;
    float *ptrf= &f;
        printf("\n---------Character---------\n");
        printf("The value of ptr is %u\n",ptrf);
        ptrf = ptrf - 1;
        printf("The value of ptr is %u\n",ptrf);
        ptrf = ptrf + 1;
        printf("The value of ptr is %u\n",ptrf);
        ptrf++;
        printf("The value of ptr is %u\n",ptrf);
        ptrf--;
        printf("The value of ptr is %u\n",ptrf);    
    return 0;
}