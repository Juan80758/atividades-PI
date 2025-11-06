#include <stdio.h>

void divisaoIgual(float total);
void divisaoProporcional(float total);
void rateioPesos(float total);
char menu();

int main() {
    char opcao;
    float total;

    opcao = menu();

    printf("Informe o valor total da conta (R$): ");
    scanf("%f", &total);

    if (total <= 0) {
        printf("Valor total invalido!\n");
        return 1;
    }

    switch (opcao) {
        case 'D':
            divisaoIgual(total);
            break;

        case 'P':
            divisaoProporcional(total);
            break;

        case 'R':
            rateioPesos(total);
            break;

        default:
            printf("Opcao invalida! \n");
    }

    return 0;
}

char menu() {
    char opcao;
    printf("Selecione o tipo de divisao: \n");
    printf("(D) - Divisao Igual Simples \n");
    printf("(P) - Divisao Proporcional ao Consumo \n");
    printf("(R) - Rateio com Pesos Diferentes \n");
    printf("Opcao: ");
    scanf(" %c", &opcao); 
    return opcao;
}

void divisaoIgual(float total) {
    float valorPorPessoa = total / 4;
    printf("Divisao igual: \n");
    printf("Cada estudante deve pagar: R$ %.2f\n", valorPorPessoa);
}

void divisaoProporcional(float total) {
    float consumo[4], somaPercentual = 0;

    printf("Informe o percentual de consumo de cada estudante (em %%): \n");
    for (int i = 0; i < 4; i++) {
        printf("Estudante %d: ", i + 1);
        scanf("%f", &consumo[i]);

        if (consumo[i] < 0) {
            printf("Consumo negativo! \n");
            return;
        }
        somaPercentual += consumo[i];
    }

    if (somaPercentual <= 0) {
        printf("Soma dos percentuais invalida! \n");
        return;
    }

    printf("Divisao proporcional ao consumo: \n");
    for (int i = 0; i < 4; i++) {
        float valor = (consumo[i] / somaPercentual) * total;
        printf("Estudante %d: R$ %.2f (%.2f%% do total)\n", i + 1, valor, consumo[i]);
    }
}

void rateioPesos(float total) {
    float peso[4], somaPesos = 0;

    printf("\nInforme o peso de consumo de cada estudante:\n");
    for (int i = 0; i < 4; i++) {
        printf("Estudante %d: ", i + 1);
        scanf("%f", &peso[i]);

        if (peso[i] < 0) {
            printf("Peso negativo! \n");
            return;
        }
        somaPesos += peso[i];
    }

    if (somaPesos <= 0) {
        printf("Soma dos pesos invalida (zero ou negativa)! \n");
        return;
    }

    printf("Rateio com pesos diferentes: \n");
    for (int i = 0; i < 4; i++) {
        float valor = (peso[i] / somaPesos) * total;
        printf("Estudante %d: R$ %.2f (peso %.2f) \n", i + 1, valor, peso[i]);
    }
}
