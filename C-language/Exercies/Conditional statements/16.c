#include <stdio.h>

int main(){
int a=3,b=4;
    a>b?a=b:b=a;
    // (a>b?a=b:b)=a;
    //   first     second
    printf("%d %d",a,b);
    
    return 0;
}
/*  error: lvalue required as left operand of assignment
     a>b?a=b:b=a;
              ^ 
*/