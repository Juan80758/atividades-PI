#include <stdio.h>

int main() {
    int i;           
    int impar = 51;  //Variável que guarda o número ímpar atual 

    printf("--- Os 30 primeiros numeros impares a partir de 51 ---\n");

    
    for (i = 1; i <= 30; i++) {
        
       
        printf("%d\n", impar);

        // Prepara o próximo número ímpar somando 2
        impar = impar + 2;
    }

    return 0;
}