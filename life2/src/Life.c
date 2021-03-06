/*
 * Life.c
 *
 *  Created on: Jan 28, 2017
 *      Author: meixintongzha
 */
/*Life.c by Meixintong Zha*/

#include <stdio.h>
#include <stdlib.h>
#include "life.h"
int **A, **B, **C;


int main(int argc, char *argv[]){
	
	int gens,i,runtimes;
	FILE *input;
    int c;
    runtimes=0;
 int X,Y;
	
        
	if (argc<5) {
        printf("Error: invalid input");
		exit(-1);
	}
		
	X=atoi(argv[1]);
		
	Y=atoi(argv[2]);
		
	gens=atoi(argv[3]);
               
        input=fopen(argv[4], "r");
    
  
	//int getc( );
	
                
    A = malloc(3 * X * (sizeof (int *)));
    
    for(int j=0;j<3*X;j++) {
        A[j] = malloc(3*Y *sizeof(int));
        if (!A[j]) {
            exit (-1);}
    }
    
    B = malloc(3 * X * (sizeof (int *)));
    
    for(int j=0;j<3*X;j++) {
        B[j] = malloc(3*Y *sizeof(int));
        if (!B[j]) {
            exit (-1);}
    }
    
    C = malloc(3 * X * (sizeof (int *)));
    
    for(int j=0;j<3*X;j++) {
        C[j] = malloc(3*Y *sizeof(int));
        if (!C[j]) {
            exit (-1);}
    }
    
    for(int j=0; j<3*X;j++) {
        for(int i=0; i<3*Y; i++) {
            A[j][i]=0;
            B[j][i]=0;
            C[j][i]=0;
        }
    }
    
    for(int j=X; j< 2*X; j++) {
        i= Y;
        c= fgetc(input);
        while (c!=EOF) {
            if(c ==  120){
                B[j][i]=1;
            }
            if(c == 10){
                break;
            }
            c = fgetc(input);
            i++;
        }
    }

    
   play_one(X, Y, B, C, runtimes);
 
   if (runtimes==gens) {
        for(int j=0; j<3*X;j++) {
            for(int i=0; i<3*Y; i++) {
                printf("%d", C[j][i]);
                }}
   printf("a predefined number of generations is reached\n");
   exit(0);}
    
   swap(A, B, C, X, Y);
    
   play_one(X, Y, B, C, runtimes);
    
  checkTerminal(A, B, C, gens, runtimes, X, Y);
        
playmore(A, B, C, gens, runtimes, X, Y);


}
