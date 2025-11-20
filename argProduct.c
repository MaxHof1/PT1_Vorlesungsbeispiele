#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[])
{
    int product = 1;
    for (int i = 1; i < argc; i++)
    {
        if(atoi(argv[i])) product *= atoi(argv[i]);
        
    }


    printf("Produkt: %d\n", product);
    return 0;
}