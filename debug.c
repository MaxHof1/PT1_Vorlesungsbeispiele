#include <stdio.h>

int main()
{
    int i = 4, j;
    for (j = 1; j < i++; )
    {
        j +=2;

    }
    printf("%u %u", i, j);
    return 0; 
}