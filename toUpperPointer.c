#include<stdio.h>
#include<ctype.h>
#include<string.h>

const int MAX_LEN = 512;

char *process(char s[]){
   char *p = strstr(s, "aber");
   if (p == NULL) strstr(s, "Aber");
   return p; 
}

int main(void){
    char s[MAX_LEN];
    while ((fgets(s, MAX_LEN, stdin)))
    {
        printf("%s\n",process(s));
    }
    return 0;
}