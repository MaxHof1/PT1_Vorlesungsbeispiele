#include<stdio.h>

int main (void)
{
    FILE *out = fopen("test.txt", "w");

    if(out == NULL)
    return 1;



    const float radius = 3;
    const float pi = 3.14595;
    float flaeche = pi * (radius * radius);
    fprintf(out,"Der Flächeninhalt beträgt %.2f", flaeche);
    fclose(out);
    return 0;
}