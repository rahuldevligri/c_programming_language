#include <stdio.h>
int max(int a,int b){
    a>b?return(a):return(b);
}
int main(){
 int x,y;
    printf("Greater is %d",max(x,y));
    return 0;
} 
// error: expected expression before 'return'
//      a>b?return(a):return(b);