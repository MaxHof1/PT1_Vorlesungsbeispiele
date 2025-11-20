#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int stayWins = 0, changeWins = 0, trials = 1000000;
    for (int i = 0; i < trials; i++)
    {
        int car = rand() % 3;
        int pick = rand() % 3;
        int open;

        do open = rand()%3; 
        
        while (open == car || open == pick);

        if (pick == car) stayWins++;
        int other = 0 + 1 + 2 - pick - open;
        if(other == car) changeWins++;

    }
    printf("Stay wins: %f %%\n", 100.0*stayWins / trials);
    printf("Chg. wins: %f %%\n", 100.0*changeWins / trials);
}