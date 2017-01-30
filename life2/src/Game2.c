//
//  Game2.c
//  
//
//  Created by Herta Remedy on 1/30/17.
//
//

#include "Game2.h"
#include <stdio.h>

/*#define IN_ARENA(X,Y) ((3*X) >= 0 && (3*X) < WIDTH && (3*Y) >= 0 && (3*Y) < HEIGHT)
#define WAS_OCCUPIED(a, X, Y) (a[X][Y] >> 1 & 1)
#define IS_OCCUPIED(a, x, y) (a[x][y] & 1)
#define WAS_OCCUPIED_ANY(a, x, y) (IN_ARENA(x,y) ? WAS_OCCUPIED(a, x, y) : 0)

static void
evolve(int B[3*X][3*Y])
{
    int X, Y;
    
    // First shift each cell to the left so its occupied status
    // is in bit 1 rather than bit 0
    for (x = 0; x < WIDTH; x++)
        for (y = 0; y < HEIGHT; y++)
            arena[x][y] <<= 1;
    
    // Decide whether each cell should be occupied based on the
    // number of previously occupied neighbours etc.
    for (x = 0; x < WIDTH; x++)
        for (y = 0; y < HEIGHT; y++) {
            int neighbours = 0;
            
            neighbours += WAS_OCCUPIED_ANY(arena, x - 1, y - 1);
            neighbours += WAS_OCCUPIED_ANY(arena, x - 1, y);
            neighbours += WAS_OCCUPIED_ANY(arena, x - 1, y + 1);
            neighbours += WAS_OCCUPIED_ANY(arena, x, y - 1);
            neighbours += WAS_OCCUPIED_ANY(arena, x, y + 1);
            neighbours += WAS_OCCUPIED_ANY(arena, x + 1, y - 1);
            neighbours += WAS_OCCUPIED_ANY(arena, x + 1, y);
            neighbours += WAS_OCCUPIED_ANY(arena, x + 1, y + 1);
            if (neighbours == 3 || (neighbours == 2 && WAS_OCCUPIED_ANY(arena,x,y)))
                arena[x][y] |= 1;
        }
}
*/

int count_nei(int x, int y, int **B, int m, int n) {
    int sum;
    
    if (m==0 && n==0)
    {sum= B[0][1] + B[1][0] + B[1][1];}
    else if (m==0 && n==3*y-1)
    {sum=B[0][3*y-2]+B[1][3*y-1]+B[1][3*y-2];}
    else if (m==3*x-1 && n==0)
    {sum=B[m-1][n]+B[m][n+1]+B[m-1][n+1];}
    else if (m==3*x-1 && n==3*y-1)
    {sum=B[m-1][n]+B[m][n-1]+B[m-1][n-1];}
    else if (m==0 && n!=0 && n!=3*y-1) {
        sum=B[m][n-1]+B[m][n+1]+B[m-1][n-1]+B[m-1][n]+B[m-1][n+1];
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
void play_one(int X, int Y, int **D, int **C) {
    int j,i;
    int sum;
    for(i=0; i<3*X;i++) {
        for(j=0;j<3*Y;j++) {
            sum=count_nei(X, Y, D, i, j);
            if (sum ==2 && D[i][j]==1){
                C[i][j]=1;
                
            }//*(C + i * x + j)=1;
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
