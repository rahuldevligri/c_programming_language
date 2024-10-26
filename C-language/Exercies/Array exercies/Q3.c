/*  
Create a 2-d array by taking input from the user. Write a display 
function to print the content of this 2-d array on the screen.
*/

#include <stdio.h>
void fundis(int marks[][3],int student,int subject){
    for(int i=0;i<student;i++){
        for(int j=0;j<subject;j++){
           printf("The Markes of student %d in sunject %d is %d\n",i+1,j+1,marks[i][j]);
        }
    }
}
int main(){
    int student=2;
    int subject=3;
    int marks[2][3];

    for(int i=0;i<student;i++){
        for(int j=0;j<subject;j++){
            printf("Enter the markes of student %d to subject %d\n",i+1,j+1);
            scanf("%d",&marks[i][j]);
        }
    }
fundis(marks,2,3);
    return 0;
}