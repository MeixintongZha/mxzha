//
//  Board.c
//  
//
//  Created by Herta Remedy on 1/30/17.
//
//

#include "Board.h"
#include "life.h"
#include<stdio.h>
#include<stdlib.h>

void swap(int **A, int **B, int **C, int X, int Y)
{
    
    int newA,newB;
    newA=**B;
    newB=**C;
    for(int j=0; j<3*X;j++) {
        for(int i=0; i<3*Y; i++) {
            
            C[j][i]=0;
        }
    }
}

int compare(int **M, int **N, int X, int Y) {
    int end;
    end=1;
    for(int j=0; j<3*X;j++) {
        for(int i=0; i<3*Y; i++) {
            
            if(M[j][i]!=N[j][i])
            {break;
                end=0;}
        }}
    if (end==0) {
        return 0;
    }
    return 1;
}

int alldie(int **C, int X, int Y) {
    int end;
    end=1;
    for(int j=0; j<3*X;j++) {
        for(int i=0; i<3*Y; i++) {
            
            if(C[j][i]!=1)
            {break;
                end=1;}
        }}
    if (end==1) {
        return 1;
    }
    else {return 0;}
}




int checkTerminal(int **A, int **B, int **C, int gens, int runtimes, int X, int Y) {
    if (compare(C, B, X, Y)==1
            ||
        compare(C, A, X, Y)==1
                )
        {for(int j=0; j<3*X;j++) {
            for(int i=0; i<3*Y; i++) {
                printf("%d", C[j][i]);
            }
            printf("\n");}
        printf("the pattern of organisms repeats itself from a previous generation\n");
            return 0;exit(0);}
    
            else if (runtimes==gens) {
                for(int j=0; j<3*X;j++) {
                    for(int i=0; i<3*Y; i++) {
                        printf("%d", C[j][i]);
                    }
                    printf("\n");}
                    printf("a predefined number of generations is reached\n");
                return 0; exit(0);}
    


            else if (alldie(C, X, Y)==0)
            {
                for(int j=0; j<3*X;j++) {
                    for(int i=0; i<3*Y; i++) {
                        printf("%d", C[j][i]);
                    }
                    printf("\n");}
                            printf("all organisms die\n");
                            return 0; exit(0);
                        }
        
    return 1;
    
    
}

void playmore(int **A, int **B, int **C, int gens, int runtimes, int X, int Y) {
    if (checkTerminal(A, B, C, gens, runtimes, X, Y)==1)
    {   swap(A, B, C, X, Y);
        play_one(X,Y,B, C, runtimes);
        playmore(A, B, C, gens, runtimes, X, Y);
    }
    else if (checkTerminal(A, B, C, gens, runtimes, X, Y)==0)
    {exit(0);}
}
    
        
    
