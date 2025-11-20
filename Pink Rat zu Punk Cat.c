#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>


int main (void)
{
    char s [] = "pink rat"; 
    char *p = s;
    p += 1;
    *p += 12;
    p += 4;
    *p -= 15;
    printf(s);
    return 0;
}