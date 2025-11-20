#include <stdio.h>
#include <ctype.h>
#include <string.h>

void uppercase (char s[])
{
    for(int i = 0; i <= strlen(s); i++)
    {
        s[i] = toupper(s[i]);
    }


}

int main(void)
{
    
    /* char wort[];
    printf("Sag was: ");
    scanf("%s", wort); */
    char s[] = "Hello World";
    uppercase(s);
    printf("%s\n",s);
    return 0;
}