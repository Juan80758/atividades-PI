#include <stdio.h>

int main(){
    int gatos;
    int experientes = 4;
    int por_experiente, recem_formado;

    printf("Digite o numero de gatos capturados: ");
    scanf("%d", &gatos);

    if (gatos <= 4) {
        printf("\nAs castracoes ficarao sob a responsabilidade de todos os veterinarios em conjunto.\n");
        
    }
    else  {
        por_experiente = gatos / experientes;
        recem_formado = gatos % experientes;
        
        printf("\nDistribuicao das castracoes:\n");
        printf("Cada veterinario experiente: %d gatos(s)\n", por_experiente);
        printf("Veterinario recem formado: %d gatos(s)\n", recem_formado);
    }

    return 0;
}