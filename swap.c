#include <stdio.h>

void swap (int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(void)
{
    int a = 100, b = 200;
    swap(&a, &b);
    printf("After swap a is %d, and b is %d\n", a, b);
    return 0;
}