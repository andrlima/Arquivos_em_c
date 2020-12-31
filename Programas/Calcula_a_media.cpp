// Calcula a média dos valores dentro do vetor
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float num;
float media;

float CalcularMedia(float valor){

    float vet[4]; 
    float media = 0;
    
    // Preenche o vetor
	for(int i = 0; i < 4; i++){
		
		scanf("%f", &vet[i]); // Faz a leitura dos dados 
			
		media = media + vet[i]; // Faz a soma dos valors do vetor
			
	}
	
	// Imprime os valores do vetor
	for(int i = 0; i < 4; i++){
		
		printf("Posição %d: %f \n", i, vet[i]);
		
	}
	
    // Divide por 4 pois é o temanho do vetor
	return media = media / 4; 
	
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	media = CalcularMedia(num);

    printf("Média = %f \n", media);
	
}






