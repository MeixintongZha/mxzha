//
//  life.h
//  
//
//  Created by Meixintong Zha on 1/29/17.
//
//

#ifndef life_h
#define life_h

int count_nei(int x, int y, int **B, int m, int n);
void play_one(int X, int Y, int **D, int **C, int runtimes);
void swap(int **A, int **B, int **C, int X, int Y);
int checkTerminal(int **A, int **B, int **C, int gens, int runtimes, int X, int Y);

void playmore(int **A, int **B, int **C, int gens, int runtimes, int X, int Y);
#endif /* life_h */



