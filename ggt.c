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

int ggtrekursive(int a, int b)
{
    if( a % b == 0)
    {
        return b; 
    } 
    int teilergebnis = a / b;
    int rest = a - (teilergebnis * b);
    return ggtrekursive(b, rest);
}

int main(void)
{
    printf("%d\n", ggt(25,10));
    printf("GGT Rekursive: %d\n", ggtrekursive(24, 9));
    return 0;
}