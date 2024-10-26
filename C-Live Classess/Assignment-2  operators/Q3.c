/*
Write a program to print last digit of a given number.
*/

void main(){
   int num,ldigit;
   printf("print last digit of a given number");
   printf("\nEnter the a number: ");
   scanf("%d",&num);

ldigit = num % 10;
printf("\nLast digit of %d is %d ",num,ldigit);
getch();

}
