/*
Write a program to print a given number but without last digit.
*/

void main(){
   int num,fdigit;
   printf("print a given number but without last digit");
   printf("\nEnter the a number: ");
   scanf("%d",&num);

    fdigit = num / 10;
    printf("\nFirst digit of %d is %d ",num,fdigit);
    getch();
}
