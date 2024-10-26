#include <stdio.h>

int main(){
int a=2,b=3;
 printf("Before Swapping\t\n\t\ta = %d : b = %d\n",a,b);

//Method-1: Using Arithmetic Operators (+ and -)

//logic-1    // a=a+b; //2+3=5 a=5
            // b=a-b; //3-5=2  b=2
           // a=a-b; //4-2=3   a=3

//logic-2 // a=b-a; //3-2=1;   a=1 
         // b=b-a; //3-1=2;    b=2
        // a=b+a; //2+1=3;     a=3

//logic-3 // a=(a+b)-(b=a); 
         // a=(2+3) - (b=2)    b=2
        // a=(5)-(2) = 3       a=3

//Method-2: Using Arithmetic Operators (* and /)

//logic-4 // a=a*b; //2*3=6;   a=6   
         // b=a/b; //6/3=2     b=2
        // a=a/b; //6/2=3      a=3

//logic-5 // a = (a*b)/(b=a);
         //  a = (2*3)/(b=2)   b=2
        //   a = 6/2 = 3       a=3

//Method-3: Using Bit-Wise Operators

//logic-6  ---> Bit-wise X-OR operator 
        a=a^b; //a=2,b=3
              // binary of  2 = 00110010  
              //  binary of 3 = 00110011
              //        ans   = 00000001  <-- a=1
                //    --->same & same = 0
        
        b=a^b;  // a=1,b=3              
                // binary of 1 = 00110001  
              //   binary of 3 = 00110011
              //        ans   =  00000010  <-- b=2
        
        a=b^a; //a=1,b=2;
              // binary of 1 = 00110001
              // binary of 2 = 00110010 
              //      ans   =  00000011  <-- a=2+1=3
    printf("After Swapping\t\n\t\ta = %d : b = %d",a,b);
    return 0;
}