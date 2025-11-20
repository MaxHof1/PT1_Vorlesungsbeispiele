#include <stdio.h>
#include <math.h>

int ggt(int n1,int n2)
{
    
    while( n2 > 0)
    {
        int rest = n1 % n2; 
        n1 = n2;
        n2 = rest;
    }
    return n1;
}

int main(void)
{
    printf("%d\n", ggt(25,10));
    return 0;
}