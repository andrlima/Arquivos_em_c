#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


struct ponto{
    float x;
    float y;
};

main(void){

    struct ponto p;// Declara p como sendo uma variável do tipo struct ponto

    printf("Digite às coordenadas do ponto x e y: ");
    scanf("%f %f", &p.x, &p.y);

    printf("O ponto fornecido foi: (%.2f, %.2f)\n", p.x, p.y);
}

