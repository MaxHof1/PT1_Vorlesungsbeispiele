#include <stdio.h>
int stack[255];
int top = 0;


void push (int i)
{
    stack[top++] = i;
}

int pop (void)
{
    int n = stack[top -1];
    top--;
    return n;
}

int main (void)
{
    push(10); push(20); push(30);
    int i = pop(); int j = pop(); int k = pop();
    printf("Stack liefert %d, %d, %d\n", i, j, k);
    return 0;
}