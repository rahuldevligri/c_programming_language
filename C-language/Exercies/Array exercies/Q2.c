#include <stdio.h>

int main(){
int arr[]={1,2,3,4,5};
int *ptr = arr;
ptr++;
printf("the valu of arr1 is %d\n",*ptr);
ptr--;
printf("the valu of arr1 is %d\n",*ptr);
ptr=ptr+2;
printf("the valu of arr1 is %d\n",*ptr);
return 0;
}