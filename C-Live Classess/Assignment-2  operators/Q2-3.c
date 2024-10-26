/*
Write a program to swap values of two int
variables without using third variable.
*/

main(){
    int c,d;
    printf("Swap Values of two int varianles\nwithout using third variable");
    printf("\nEnter two numbers:\n");
    scanf("%d%d",&c,&d);
    printf("\n***Before swap numbers***\n");
    printf("Num1 = %d\n Num2 = %d",c,d);
// logic-3
    printf("\n***After swap numbers***\n");
    c = c ^ d;
    d = c ^ d;
    c = c ^ d;

    printf("Num1 = %d\nNum2 = %d",c,d);
}
