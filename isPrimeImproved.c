#include <stdbool.h>
#include<stdio.h>



int main(void)
{
    const int sieve_size = 2000000; 
    bool sieve[sieve_size]; //Array setzen
    sieve[0] = false; // 0 keine prim
    sieve[1] = false; // 1 keine prim
    for (int i = 2; i<sieve_size; i++)
    {
        sieve[i]= true; // Annahme, dass jede andere Zahl eine Primzahl ist 
    }
    for (int i = 2; i*i < sieve_size; i++) // i*i um Zeit zu sparen, denn wenn die vielfache von i nicht in sieve_size sind, wird sich der Output eh nicht ändern
    {
        if (sieve[i])
        {
            for (int j = i*i; j < sieve_size; j += i) // Vielfache von i können keine Primzahlen sein
            {
                sieve[j] = false; //aus dem Array entfernen
            }
        }
    }
    for (int i = 0; i < sieve_size; i++) // Printschleife
    {
        if (sieve[i])
        {
            printf("%d is prime\n", i);
        } 
    }
    return 0;
}