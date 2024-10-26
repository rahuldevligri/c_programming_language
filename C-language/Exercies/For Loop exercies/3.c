#include <stdio.h>

int main(){
int a,b=0;
printf("The First 7 natural numbers is = \n");
for(a=1;a<=7;a++)
{
    b=b+a;
    printf(" %d ",a);
}
    printf("\nThe sum is = %d",b);
    return 0;
}