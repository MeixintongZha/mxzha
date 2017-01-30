//
//  Life2.c
//  
//
//  Created by Herta Remedy on 1/29/17.
//
//

#include "Life2.h"


#include <stdio.h>
#include <stdlib.h>
#include "life.h"
int **A, **B, **C;
int Y;

int main(int argc, char *argv[]){
    
    int X,gens,i;
    FILE *input;
    int c;
    
    
    
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
    
    for(int j=0; j<3*X;j++) {
        for(int i=0; i<3*Y; i++) {
            printf("%d",B[j][i]);
        }
        printf("\n");
    }
    
    
    for(int j=0; j<3*X;j++) {
        for(int i=0; i<3*Y; i++) {
            printf("%d",B[j][i]);
        }
        printf("\n");
    }
    play_one(X, Y, B[3*X][3*Y], C[3*X][3*Y]);
    
    
    
    
    printf("%d %d %d\n", X,Y,gens);
    
    
    
}
