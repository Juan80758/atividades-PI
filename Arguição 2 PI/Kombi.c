#include <stdio.h>
int main() {
    int inscritos;
    int capacidade = 11;
    int viagens, coletivo;
     
    printf("Digite aqui o numero de inscritos no passeio: ");
    scanf("%d", &inscritos);

    if (inscritos <= capacidade) {
        viagens = 1;
        coletivo = 0;
    }
    else {
        viagens = inscritos / capacidade;
        coletivo = inscritos % capacidade;
    }

    printf("\nO numero de viagens da Kombi sera: %d\n", viagens);
    printf("Numero de passagens de coletivo: %d\n", coletivo);

    return 0;
}