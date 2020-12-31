#include <stdio.h>
#include <stdlib.h>

int num;
int total;

int SomarTodosOsValoresDoVetor(int valor){
	
	int vet[4]; 
	int total = 0;
	
	for(int i = 0; i < 4; i++){
		
		scanf("%d", &vet[i]); 
			
		total = total + vet[i];
			
	}
	

	for(int i = 0; i < 4; i++){
		
		printf("Posição %d: %d \n", i, vet[i]);
		
	}
	
	return total;
	
}

int main(){
	
	total = SomarTodosOsValoresDoVetor(num);
	
    printf("A soma de todos os valores do vetor é: %d", total);
	
}





