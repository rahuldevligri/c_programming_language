#include <stdio.h>

int main(){
int a=3,b=4;
    if(!a>-b)
      printf("%d %d",a,b);
    else
      printf("%d %d",b,a);
    return 0;
}
// a=3, b=4
// !3 <--- every non zero valu is Ture 
// in the !not operator Ture is False
// False =0
// 0>-4 <---Ture
// printf = a=3 b=4