#include <stdio.h>

int main(){
int num;
    printf("Enter a Number:");
    scanf("%d",&num);
/* if(num > 0)
        printf("%d is a positive Number",num);
   else
        printf("%d is a Negative Number",num);
*/
// Using Ternory Operator ---->
num > 0 ? printf("%d is a positive Number",num) : printf("%d is a Negative Number",num);
    return 0;
}