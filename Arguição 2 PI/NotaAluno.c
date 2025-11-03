#include <stdio.h> 
int main() {
    float nota1, nota2, nota3, media;
    printf("Digite aqui sua primeira nota: ");
    scanf("%f", &nota1);

    // while (getchar() != '\n');

    printf("Digite aqui sua segunda nota: ");
    scanf("%f", &nota2); 

    //while(getchar() != '\n'); 

    
    printf("Digite aqui sua terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 * 1 + nota2 * 2 + nota3 * 3) / (1 + 2 + 3);
    
    printf("\nA Media final eh %.2f\n", media);

    if (media >= 7) {
        printf("Situacao: Aprovado\n");
    }
    else if (media >=5) {
        printf("Situacao: Esta em recuperacao\n ");
    }
    else{
        printf("Situacao: Reprovado\n");
    }
    return 0;
}