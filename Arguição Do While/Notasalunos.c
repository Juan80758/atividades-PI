#include <stdio.h>

int main() {
    float n1, n2, n3, n4, media, media_final;
    char opcao;

    do {

        printf("Digite as 3 notas do aluno: ");
        scanf("%f %f %f", &n1, &n2, &n3);

        media = (n1 + n2 + n3) / 3.0;
        printf("Media inicial: %.2f\n", media);

        
        if (media >= 7.0) {
            printf("Resultado: Aprovado!\n");
        }
        else if (media > 3.0) {
            
            printf("Necessario fazer a 4a avaliacao (Recuperacao).\n");
            
            printf("Digite a nota da 4a avaliacao: ");
            scanf("%f", &n4);

            // Cálculo da nova média 
            media_final = (media + n4) / 2.0;
            printf("Media final: %.2f\n", media_final);

            if (media_final >= 5.0) {
                printf("Resultado: Aprovado em recuperacao!\n");
            } else {
                printf("Resultado: Reprovado.\n");
            }
        }
        else {
            
            printf("Resultado: Reprovado direto.\n");
        }

      
        printf("\nDeseja verificar a situacao de outro aluno? (S/N): ");
        
        scanf(" %c", &opcao);
        printf("--------------------------------------------------\n");

    } while (opcao == 'S' || opcao == 's'); 

    return 0;
}