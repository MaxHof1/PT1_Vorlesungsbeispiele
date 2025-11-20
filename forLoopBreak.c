#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[] = "Anna        ";
    char nameFix[100];
    int len = strlen(name);
    int j = 0;

    for (int i = 0; i <= len; i++)
    {
        if(name[i] == ' ') continue;
        nameFix[j] = name[i];
        j++;
    }
    

    printf("Hello, %s!\n", nameFix);
}