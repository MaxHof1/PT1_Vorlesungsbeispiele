#include<stdio.h>

int modify(int i, int j, int *array)
{
    j = 1;
    array[i] = 4;
    array[j] = 2;
    return j +1;
}

int main(void)
{
    int i = 0;
    int values[2];
    values[0] = 5;
    values[1] = 10;
    modify(i, i, values);
    printf("%d, %d, %d", i, values[0], values[1]);
    return 0;
}