#include <stdio.h>

int main() {
    float valorCompra, frete, valorFinal;

    
    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valorCompra);

    
    if (valorCompra <= 300.00) {
        frete = valorCompra * 0.35;
    } else {
        frete = valorCompra * 0.20;
    }

   
    valorFinal = valorCompra + frete;

    
    printf("\nValor da compra: R$ %.2f", valorCompra);
    printf("\nValor do frete: R$ %.2f", frete);
    printf("\nValor final (com frete): R$ %.2f\n", valorFinal);

    return 0;
}