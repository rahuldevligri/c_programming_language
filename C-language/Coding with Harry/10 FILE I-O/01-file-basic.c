#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("sample.txt","r"); //<--for reading this file
    ptr = fopen("sample2.txt","w"); //<--for writing this file
    return 0;
}