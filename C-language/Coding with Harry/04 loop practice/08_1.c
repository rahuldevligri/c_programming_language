#include<stdio.h>
int main(){
    int i=0,n=6,factorial=1;
    for(i=1;i<=n;i++){
        factorial *=i;
    }
      printf("thr of factorial %d is %d ",n,factorial);
    return 0;
}