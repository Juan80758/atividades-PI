#include <stdio.h>

int main() {
    int Cont, Num, Resultado;


    for (Cont = 1; Cont <= 50; Cont = Cont + 1) {
        printf("Digite um valor: ");
        scanf("%d", &Num);

        // Se for a primeira volta (1), o número digitado é assumido como o maior
        if (Cont == 1) {
            Resultado = Num;
        } 
        else {
            // Nas demais voltas, fazemos a comparação normal
            if (Num > Resultado) {
                Resultado = Num;
            }
        }
    }
    
    printf("Resultado: %d.", Resultado);
    return 0;
}