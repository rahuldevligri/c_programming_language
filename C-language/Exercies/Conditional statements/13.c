#include <stdio.h>

int main(){
    int x=0,y=0;
        if(x++ && y++) //always first left operator solve
            printf("x=%d y=%d",x,y); 
        else
            printf("y=%d x=%d",y,x);
    return 0;
}
// x++ <-- post increment
// and(&&) operator first solve left operator 
// First evoluvate Ture  or flase or false then post increment
// x=0 is false then increment so x now is x=1
//if left operator is false it means control not forward ahead 
//control ignore y++ and no increment in y 
//else --> y=0 and x=1