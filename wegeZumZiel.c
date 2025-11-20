#include <stdio.h>

long npaths(int N)
{
    long npaths = 1;
    for(int i = 1; i <= N;i++)
    {
        npaths *= (N+i);
        npaths /= i;
    }
    return npaths;
}


int main(void)
{
    printf("%ld\n",npaths(15));
}