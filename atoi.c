#include <stdio.h>
#include <ctype.h>
#include <string.h>

int myatoi(const char s[])
{
    int n = 0;
    int i = 0;

    for (i = 0; i < strlen(s); i++)
    {
        n = n * 10; // Die aktuelle Zahl um eine Dezimalstelle nach links verschieben, damit die neue Ziffer die letzte Null ersetzen kann. 
        n += s[i]-'0';
    }
    return n;
}

int main(void)
{
    printf("%d\n", myatoi("1280")/2);
    return 0;
}