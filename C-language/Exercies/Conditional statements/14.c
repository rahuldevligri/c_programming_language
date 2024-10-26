#include <stdio.h>

int main(){
 int x=0,y=0;
        if(x++ && y++) //always first solve left operator
            printf("x=%d y=%d",x,y); 
        else
            printf("y=%d x=%d",y,x);
    return 0;
    
    return 0;
}
// ++x <-- pre increment
// and(&&) operator first solve left operator 
// First evoluvate Ture  or flase then increment
// pre increment priverty 1st so 1st increment then evoluvate
// it means first increment ++x --> x=1 then evoluate so xis Ture
//if left operator is Ture it control forward left operator 
//y++ --> y=0 then increment so y is now y=1 but condition is false
// control is forward else condition 
//else --> y=1 and x=1