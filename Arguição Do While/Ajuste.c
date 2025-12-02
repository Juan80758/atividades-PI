#include <stdio.h>

// Adicionei o parâmetro 'int num' para receber o contador 
void ValidaCompra(float *L, int num){
    float D;
    
    // Exibindo o número da compra antes de pedir o valor 
    printf("--- Compra numero %d ---\n", num);
    
    printf("Debito: ");
    scanf("%f",&D);
    
    if (*L - D >= 0){
        printf("Compra possivel! \n");
        *L = *L - D;
    }
    else {
        printf("Compra ""estourarah"" o cartao! \n");
    }
    
    printf("Limite restante: %.2f \n\n",*L);
}

int main(){
    float Limite;
    int Contador = 1; // Variável para contar as compras 

    printf("Limite do cartao: ");
    scanf("%f",&Limite);

    while (Limite > 0) {
        ValidaCompra(&Limite, Contador);
        
        Contador++; 
    }
    
    printf("Seu limite de compras acabou!");
    return 0;
}