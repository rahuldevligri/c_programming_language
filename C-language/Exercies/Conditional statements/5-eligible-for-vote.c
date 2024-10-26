#include<stdio.h>

int main(){
    int age;
    printf("Enter Your Age ");
    scanf("%d",&age);
if(age<=0 || age>=125)
{
    printf("Envlid Age ");
}
else if(age>=18){
    printf("Congratulation! You are eligible for casting your vote.");
}
else{
    printf("You aren't eligible for casting your vote Please Try Next Year.");
}



    return 0;
}