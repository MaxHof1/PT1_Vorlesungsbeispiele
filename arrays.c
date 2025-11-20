#include<stdio.h>



int main(void){
    #define LENGTH_ARR 100
    int liste[LENGTH_ARR];
    liste[1] = 25;


    for(int i = 0; i < LENGTH_ARR; i++)
    {
        printf("%d\n", liste[i]);
    }
return 0;
}
