#include <stdio.h>
#include <ctype.h>

void uppercase(char *s)
{
    do
    {  
        *s = toupper(*s);
    } while(*s++ != 0);
}

int main (void)
{
    char s[] = "Hello World";
    uppercase(s);
    printf("%s\n", s);
    return 0;
}