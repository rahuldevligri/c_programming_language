#include <stdio.h>
//logic-2 --->
// int even(int num){
//     return ((num / 2) * 2 == num);
// }

int even(int num){
    int even_no=1;
for(int i=1;i<=num;i++)
even_no = !even_no;
return even_no;    
}
int main(){
int num;
printf("*****Check Odd Even Number*****\n");
    printf("Enter the Number:");
    scanf("%d",&num);

//logic-1 ---> // (num%2==0) ? printf("even") : printf("odd");

//logic-2 ---> Divide and multiply method
// even(num) ? printf("%d is an even number",num) : printf("%d is an odd number",num);

//logic-3 ---> by switching a temporary number
even(num) ? printf("%d is an even number",num) : printf("%d is an odd number",num);
    return 0;
}