#include<stdio.h>
int main (void){
    FILE *out = fopen("test.txt", "w");
    if(out == NULL) return 1;
    const float radius = 3, pi = 3.14595;
    fprintf(out,"Der Flächeninhalt beträgt %.2f", pi * (radius * radius));
    fclose(out);
    return 0;}
