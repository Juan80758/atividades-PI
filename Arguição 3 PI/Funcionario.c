#include <stdio.h>

void kmParaMilha(float medida);
void milhaParaKM(float medida);
void kgParaLibra(float medida);
void metroParaPes(float medida);
char menu();

int main() {
    float medida;
    char opcao;

    printf("Digite aqui a medida que voce quer que seja convertida: \n");
    scanf("%f", &medida);

    opcao = menu();

    switch (opcao) {
        case '1': kmParaMilha(medida); break;
        case '2': milhaParaKM(medida); break;
        case '3': kgParaLibra(medida); break;
        case '4': metroParaPes(medida); break;
        default: printf("Opcao invalida!\n");
    }

    return 0;
}

char menu() {
    char opcao;
    printf("Escolha o tipo de conversao:\n");
    printf("1 - Km para Milhas\n");
    printf("2 - Milhas para Km\n");
    printf("3 - Kg para Libras\n");
    printf("4 - Metros para Pes\n");
    printf("Opcao: ");
    scanf(" %c", &opcao); 
    return opcao;
}

void kmParaMilha(float medida) {
    printf("Resultado: %.2f milhas\n", medida * 0.621371);
}

void milhaParaKM(float medida) {
    printf("Resultado: %.2f km\n", medida * 1.60934);
}

void kgParaLibra(float medida) {
    printf("Resultado: %.2f libras\n", medida * 2.20462);
}

void metroParaPes(float medida) {
    printf("Resultado: %.2f pes\n", medida * 3.28084);
}
