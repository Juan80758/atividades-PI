#include <stdio.h>

int main() {
    float Meta, Doacao, Soma = 0;
    
    printf("Meta da vaquinha: ");
    scanf("%f", &Meta);
    
    do {
        printf("Valor da doacao: ");
        scanf("%f", &Doacao);
        
        Soma = Soma + Doacao;
        
        printf("Valor parcial alcancado: %.2f\n", Soma);
        
    } while (Soma < Meta);
    
    // Verificando se ultrapassou ou se atingiu exatamente 
    if (Soma > Meta) {
        printf("A meta da vaquinha foi ultrapassada!\n");
    } else {
        printf("A meta da vaquinha foi alcancada!\n");
    }
    
    return 0;
}