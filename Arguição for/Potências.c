#include <stdio.h>
#include <math.h> 

int main() {
    int base;
    int e; 
   
    printf("Digite um número para a base: ");
    scanf("%d", &base);

    printf("Calculando potências de 1 a 10 para o número %d ---\n", base);

    for (e = 1; e <= 10; e++) {
        
        // Cálculo da potência: pow(base, expoente)
        // pow retorna double
        double resultado = pow(base, e);

        printf("%d elevado a %d = %.0f\n", base, e, resultado);
    }

    return 0;
}