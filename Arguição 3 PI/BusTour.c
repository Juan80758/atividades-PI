#include <stdio.h>

float custoViagem(float litros, float preco);
float consumoMedio(float distancia, float litros);
float autonomia(float litrosTanque, float consumoMedio);
float custoPorKM(float custo, float distancia);
char menu();

int main() {
    char opcao;
    float distancia, litros, preco, consumo, litrosTanque, custo;

    opcao = menu();

    switch (opcao) {
        case 'C':  
            printf("Informe a quantidade de litros consumidos: ");
            scanf("%f", &litros);
            printf("Informe o preco do combustivel (R$ por litro): ");
            scanf("%f", &preco);
            printf("Custo total da viagem: R$ %.2f\n", custoViagem(litros, preco));
            break;

        case 'M': 
            printf("Informe a distancia percorrida (km): ");
            scanf("%f", &distancia);
            printf("Informe a quantidade de litros consumidos: ");
            scanf("%f", &litros);
            printf("Consumo medio: %.2f km/l\n", consumoMedio(distancia, litros));
            break;

        case 'A': 
            printf("Informe a quantidade de litros no tanque: ");
            scanf("%f", &litrosTanque);
            printf("Informe o consumo medio do veiculo (km/l): ");
            scanf("%f", &consumo);
            printf("Autonomia estimada: %.2f km\n", autonomia(litrosTanque, consumo));
            break;

        case 'Q':  
            printf("Informe o custo total da viagem (R$): ");
            scanf("%f", &custo);
            printf("Informe a distancia percorrida (km): ");
            scanf("%f", &distancia);
            printf("Custo por quilometro: R$ %.2f/km\n", custoPorKM(custo, distancia));
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}

char menu() {
    char opcao;
    printf("\nSelecione o tipo de calculo:\n");
    printf("(C) - Custo da viagem\n");
    printf"(M) - Consumo medio\n");
    printf("(A) - Autonomia estimada\n");
    printf("(Q) - Custo por quilometro\n");
    printf("Opcao: ");
    scanf(" %c", &opcao); 
    return opcao;
}

float custoViagem(float litros, float preco) {
    return litros * preco;
}

float consumoMedio(float distancia, float litros) {
    return distancia / litros;
}

float autonomia(float litrosTanque, float consumoMedio) {
    return litrosTanque * consumoMedio;
}

float custoPorKM(float custo, float distancia) {
    return custo / distancia;
}
