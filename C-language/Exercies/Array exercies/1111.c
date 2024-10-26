#include <stdio.h>

int mystery(int p, int q){
     
    int r;
    if ((r = p % q) == 0)
        return q; 
    else return mystery(q, r);
}
int main(){
    int a;
    a=mystery(2,6);
    printf("%d",a);
}