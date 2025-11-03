#include <stdio.h> // erro no arquivo não sei o motivo ainda

 int main() {
    int dezena, centena, unidade, numero, invertido;
    
    printf("Digite qualquer numero inteiro positivo de tres digitos: ");
    scanf("%d", &numero);

    if (numero < 100 || numero > 999) {
        printf("Este numero eh invalido, digite um numero com tres digitos.\n");
        return 0;
    }
    centena = numero / 100;
    dezena = (numero / 10) % 10;
    unidade = numero % 10;
  
    invertido = unidade * 100 + dezena * 10 + centena;
         
    printf("\nNumero lido = %d\n", numero);
    printf("Numero gerado = %d\n\n", invertido);
    
    if (invertido > numero) {
        printf("Numero gerado é maior que o lido\n");
    }
    else if (invertido < numero) {
        printf("Numero lido maior que numero gerado\n");
    }
    else {
        printf("Numero gerado igual ao numero lido");
    }
}