 /*Write a C program to find the eligibility of admission for a 
  professional course based on the following criteria: Go to the editor
  Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and 
  Marks in Chem>=50 and Total in all three subject >=190 
  or Total in Maths and Physics >=140  Input the marks obtained 
  in Physics :65 Input the marks obtained in Chemistry :51 
  Input the marks obtained in Mathematics :72 Total marks of Maths, 
  Physics and Chemistry : 188 Total marks of Maths and 
  Physics : 137 The candidate is not eligible.
*/
#include<stdio.h>

int main()
{
 int phy,maths,chem,total;

    printf("Enter your Maths , Physics and Chemistory Marks\n");
    scanf("%d%d%d",&maths,&phy,&chem);
    
    total = maths+phy+chem;
         printf("Total Marks = %d\n",maths+phy+chem);

    if(maths>=100 || maths < 0 && phy >=100 || phy < 0 && chem >=100 && chem < 0)
    {
     printf("enter Valid Marks between 0 to 100 ");

    }
    
    else if (maths >=65 && phy >=55 && chem >=50 || total >=190 || maths + phy >=140)
    {
        printf("The candidate is eligible for admission");
    }
    else{
        printf("The candidate is not eligible for admission");
    }
    return 0;
}