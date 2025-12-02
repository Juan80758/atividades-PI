#include <stdio.h>

int main() {
    int N, i, X;
    int in = 0;  
    int out = 0; 

    printf("Quantos numeros voce deseja verificar? ");
    scanf("%d", &N);

    // Laço de repetição para ler cada número
    for (i = 0; i < N; i++) {
        printf("Digite o %do numero: ", i + 1);
        scanf("%d", &X);

        
        
        if (X >= 10 && X <= 20) {
            in++;  
        } else {
            out++; 
        }
    }

    printf("\n%d estao dentro do intervalo [10,20]\n", in);
    printf("%d estao fora do intervalo\n", out);

    return 0;
}