#include<stdio.h>

int main(int argc, char const *argv[])
{
    int principle = 350, rate = 4, year = 2;
    int simpleInsteret = (principle * rate * year)/100;
    printf("The valu of simple interest is %d\n", simpleInsteret);
    return 0;
}
