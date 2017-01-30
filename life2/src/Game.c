#include<stdio.h>
#include "life.h"
#include <stdlib.h>


int count_nei(int x, int y, int **B, int m, int n) {
    int sum;
    
    if (m==0 && n==0)
    {sum= B[0][1] + B[1][0] + B[1][1];}
    else if (m==0 && n==3*y-1)
    {sum=B[0][3*y-2]+B[1][3*y-1]+B[1][3*y-2];}
    else if (m==3*x-1 && n==0)
    {sum=B[3*x-2][0]+B[3*x-1][1]+B[3*x-2][1];}
    else if (m==3*x-1 && n==3*y-1)
    {sum=B[m-1][n]+B[m][n-1]+B[m-1][n-1];}
    else if (m==0 && n!=0 && n!=3*y-1) {
        sum=B[0][n-1]+B[0][n+1]+B[1][n-1]+B[1][n]+B[1][n+1];
    }
    else if (m==3*x-1 &&n!=0 && n!=3*y-1) {
        sum=B[m-1][n-1]+B[m-1][n]+B[m-1][n+1]+B[m][n-1]+B[m][n+1];
    }
    else if (n==0 && m!=0 && m!=3*x-1) {
        sum=B[m-1][n]+B[m-1][n+1]+B[m][n+1]+B[m+1][n]+B[m+1][n+1];
    }
    else if (n==3*y-1 && m!=0 && m!=3*x-1) {
        sum=B[m-1][n-1]+B[m-1][n]+B[m][n-1]+B[m+1][n-1]+B[m+1][n];
    }
    else {
        sum=B[m-1][n-1]+B[m-1][n]+B[m-1][n+1]+B[m][n-1]+B[m][n+1]+
        B[m+1][n-1]+B[m+1][n]+B[m+1][n+1];}
    
    return sum;
}
void play_one(int X, int Y, int **D, int **C, int runtimes) {
    
    int sum,i,j;
    for(i=0; i<3*X;i++) {
        for(j=0;j<3*Y;j++) {
            sum=count_nei(X, Y, D, i, j);
            if (sum ==2 && D[i][j]==1){
                C[i][j]=1;
                
            }
            else if (sum==2 && D[i][j]==0) {
                C[i][j]=0;
            }
            else if (sum==3) {
                C[i][j]=1;
            }
            else if (sum>3)
            {C[i][j]=0;
            }
            else {C[i][j]=0;
            }
        }
        
    }
    
}


    
    
    
    

