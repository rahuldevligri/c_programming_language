#include <stdio.h>

int main(){
int a=1,b=1;
    if(a--||(b--&&++a))
      printf("%d %d",a,b);
    else
      printf("%d %d",b,a);  
    return 0;
}
//a=1,b=1;
// a-- <-- post dicrement
// first evoliate then dicrement
// a = 0;
// if or(||) left operator is ture 
// then left operator will skip and if condition is ture
// printf == a=0 , b=1