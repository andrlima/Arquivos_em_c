#include < stdio.h >
#include < stdlib.h >
#include < time.h >

void ordenaMatriz (int n, int mat[n][n]) {
    
    int i, j, l, c;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
                
            for (l = 0; l < n; l++) {
                for (c = 0; c < n; c++) {
                        
                    if (mat[i][j] < mat[l][c]) {
                        int aux = mat[i][j];
                        mat[i][j] = mat[l][c];
                        mat[l][c] = aux;
                    }
                }
            }
        }
    }
}

int main (void) {
        
    int i, j, n = 5, mat[n][n];
        
    srand(time(NULL));
        
    printf("\n ORDENACAO DE MATRIZES\n");
        
    printf("\n\n Ordem Inicial:\n\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            mat[i][j] = rand() % 99 + 1;
            printf(" %02d", mat[i][j]);
        }
        printf("\n");
    }
            
    ordenaMatriz(n, mat);

    printf("\n\n Apos Ordenacao:\n\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf(" %02d", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n\n ");
    system("pause");
           
    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	int mat[3][3] = {{4, 5}, {2, 1}, {3, 6}};
	int n = 3;
  
 
    for (int i = 0; i < n; i++) {
    	
        for (int j = 0; j < n; j++) {
                
            for (int l = 0; l < n; l++) {
            	
                for (int c = 0; c < n; c++) {
                        
                    if (mat[i][j] < mat[l][c]) {
                        int aux = mat[i][j];
                        mat[i][j] = mat[l][c];
                        mat[l][c] = aux;
                    }
                }
            }
        }
    }
       
            
    printf("\n\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf(" %02d", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
 
           
    return 0;
}