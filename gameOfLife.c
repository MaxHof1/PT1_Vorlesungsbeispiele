#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

const int w = 30; // width
const int h = 30; // height

void show(bool world[h][w]) {
  printf("\x1B[H"); // ANSI escape code to move to beginning of screen
  for (int y = 0; y < h; y++) {
    for (int x = 0; x < w; x++)
      printf(world[y][x] ? "\x1B[07m  \x1B[m" : "  ");
    printf("\x1B[E");
  }
  fflush(stdout);
}

void evolve(bool world[h][w]) {
  bool new[h][w];
    for(int y = 0; y < h; y++)
        for (int x = 0; x < w; x++ ){
            int n = 0; 
            for(int y1 = y - 1; y1 <= y + 1; y1++ )
                for(int x1 = x - 1; x1 <= x + 1; x1++){
                    if(world[(y1 + h) % h][(x1 + w ) % w]) n += 1;
                }
            if(world[x][y])n -= 1;
            new[y][x] = (n == 3||(n == 2 && world[y][x]));
    }
 

  // TOOD: fill in details to compute new world state
  
  for (int y = 0; y < h; y++)
    for (int x = 0; x < w; x++)
      world[y][x] = new[y][x];
}

int main(void) {
  bool world[h][w];
  // empty the world
  for (int y = 0; y < h; y++)
    for (int x = 0; x < w; x++)
      world[y][x] = 0;
  // initialize with https://conwaylife.com/wiki/R-pentomino
  world[h/2-1][w/2] = true;
  world[h/2-1][w/2+1] = true;
  world[h/2][w/2-1] = true;
  world[h/2][w/2] = true;
  world[h/2+1][w/2] = true;
  
  // randomize
  for (int y = 0; y < h; y++)
    for (int x = 0; x < w; x++)
      world[y][x] = rand() < RAND_MAX / 10 ? 1 : 0;
  
  while (true) {
    show(world);
    evolve(world);
    usleep(200000); // decrease later
  }
}