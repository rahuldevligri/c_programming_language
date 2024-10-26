#include <stdio.h>

int main()
{
    int b=0,a;
    
for(a=1; a<=10;a++){
    b=b+a;
    printf(" %d ", a );
}
    printf("\nThe sum is : %d\n", b);
    
    return 0;
}