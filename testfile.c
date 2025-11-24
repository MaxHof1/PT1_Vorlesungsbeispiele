#include <stdio.h>
#include <math.h>

int main(void)
{
    FILE *out = fopen("test.txt", "w");
    if (out == NULL)
    {
        printf("Fehler!\n");
        return 1;
    }
    const float radius = 3;
    const float pi = 3.14159;
    float fläche = (radius * radius) * pi;
    fprintf(out, "Der Flächeninhalt beträgt %.2f", fläche);
    fclose(out);
    return 0;
}