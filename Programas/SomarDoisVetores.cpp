#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int valor;
int num;

int SomarDoisVetores(int valor){

    int vet1[4];
    int vet2[4];
    int vetSoma[4];

	printf("Preencha o segundo vetor\n");
    for(int i = 0; i < 4; i++){
        scanf("%d", &vet1[i]); // Faz a leitura dos valores

    }

    printf("\nPreencha o segundo vetor\n");
    for(int i = 0; i < 4; i++){
        scanf("%d", &vet2[i]);
    }

    // Faz a soma das posições dos vetores
    for(int i = 0; i < 4; i++){
        vetSoma[i] = vet1[i] + vet2[i];
        
    }
	
    // Imprime o resultado das somas dos vetores
	printf("\nSoma das posições\n");
	for(int i = 0; i < 4; i++){
		printf("[%d] + [%d] = [%d]\n", i, i, vetSoma[i]);

	}
	
}

int main(){

    //Configuração para as acentuações
	setlocale(LC_ALL, "Portuguese");

    // Faz a atribuição dos valores para os vetores
    valor = SomarDoisVetores(num);

}

/*

Soma dos valores dos vetores já preenchidos, como é um procedimendo, basta chamar o no nome dele, no caso
SomarDoisVetores() no main.

SomarDoisVetores(){
	
	int vet1[4] = {1, 2, 3, 4};
	int vet2[4] = {5, 6, 7, 8};
	int vetSoma[4];

    for(int i = 0; i < 4; i++){
        vetSoma[i] = vet1[i] + vet2[i];
        
    }
	
	printf("\nSoma das posições\n");
	for(int i = 0; i < 4; i++){
		printf("[%d] + [%d] = [%d]\n", i, i, vetSoma[i]);

	}
	
}

*/