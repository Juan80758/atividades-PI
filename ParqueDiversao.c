#include <stdio.h>

int main() {
    int altura, idade;
    int brinquedos = 0;

    printf("Digite aqui sua altura em centimetros: ");
    scanf("%d", &altura);
    
    while(getchar() != '\n');

    printf("Agora digite sua idade: ");
    scanf("%d", &idade);

    // Barca Viking
    if (altura >= 150 && idade >= 12) {
        brinquedos++;
    }

    // Elevator of Death
    if (altura >= 140 && idade >= 14) {
        brinquedos++;
    }

    // Final Killer
    if (altura >= 170 || idade >= 16) {
        brinquedos++;
    }

    printf("\nVoce pode andar em %d brinquedos(s).\n", brinquedos);

    return 0;
}
