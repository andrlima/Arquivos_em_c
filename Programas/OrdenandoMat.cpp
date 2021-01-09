#include <stdio.h>
#include <stdlib.h>

int main(){

    int n = 3;

    int matriz[n][n] = {{4, 5}, {2, 1}, {3, 6}};

    //Ordenando a matriz

    // Vai percorrer as linhas [A1]
    for(int linha = 0; linha < n; linha++){

        // Vau percorrer a coluna [A1][A1]
        for(int coluna = 0; coluna < n; coluna++){

            // Percorrer a matriz para trocar de lugar os valores
            for(int lin = 0; lin < n; lin++){
                
                for(int col = 0; col < n; col++){

                    if(matriz[linha][coluna] < matriz[lin][col]){

                        int aux = matriz[linha][coluna];
                        matriz[linha][coluna] = matriz[lin][col];
                        matriz[lin][col] = aux;

                    }

                }

            }

        }

    }
    
    //Imprimindo a matriz
    for(int linha = 0; linha < n; linha++){

        for(int coluna = 0; coluna < n; coluna++){

            printf(" %02d", matriz[linha][coluna]);
            
        }
      
        printf("\n");

    }


}