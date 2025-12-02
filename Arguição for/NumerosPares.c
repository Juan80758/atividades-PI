#include <stdio.h>

int main() {
    int i;
    int numeroPar;
    int soma = 0; 
    printf("Os 25 primeiros numeros pares são: \n");

    
    for (i = 1; i <= 25; i++) {
        
        // Gera o número par: contador vezes 2
        numeroPar = i * 2; 

        // Exibe o número atual
        printf("%d\n", numeroPar);

        // Acumula o valor na variável soma
        soma = soma + numeroPar;
    }

    printf("-------------------------------------\n");
    printf("A soma total desses numeros e: %d \n", soma);

    return 0;
}