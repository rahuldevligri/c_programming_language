#include <stdio.h>

int main(){
    int n_students;
    int n_subjects;
int marks[10][10];
    printf("Enter the no of student: \n");
    scanf("%d",&n_students);
    printf("Enter the no of subjects: \n");
    scanf("%d",&n_subjects);
    for(int i=0;i<n_students;i++)
    {
    for(int j=0;j<n_subjects;j++)
    {
        printf("Enter the marks of students %d in subjects %d\n",i+1,j+1);
        scanf("%d",&marks[i][j]);
    }  
    }
    printf("Two Dimensional array elements:\n");
   for(int i=0; i<n_students; i++) {
      for(int j=0;j<n_subjects;j++) {
         printf("%d ", marks[i][j]);
         if(j==n_subjects-1){
            printf("\n");
        }
      }
   }
    return 0;
}