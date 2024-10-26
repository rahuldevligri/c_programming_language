/* write a program to find average marks obtained 
   by a class of 10 studentes in a test.
*/

#include <stdio.h>

int main(){
int avg,sum=0;
int i;
int marks[30]; //array declaration
for(i=0;i<30;i++){
    printf("Enter marks");
    scanf("%d",&marks[i]); //store data in array
}
    for(i=0;i<30;i++){
        sum=sum+marks[i]; //read data from an array
    }
        avg = sum/30;
        printf("%d Average marks=%d\n",sum,avg);
    
    return 0;
}