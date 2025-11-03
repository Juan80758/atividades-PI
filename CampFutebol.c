#include <stdio.h>

int main() {
    int Cv, Ce, Cs; // vitórias, empates e saldo do Cormengo
    int Fv, Fe, Fs; // vitórias, empates e saldo do Flaminthians
    int pontosC, pontosF;

    
    printf("Digite os dados (Cv Ce Cs Fv Fe Fs): ");
    scanf("%d %d %d %d %d %d", &Cv, &Ce, &Cs, &Fv, &Fe, &Fs);

    
    pontosC = (Cv * 3) + Ce;
    pontosF = (Fv * 3) + Fe;

    
    printf("\nCormengo: %d pontos, saldo de gols = %d", pontosC, Cs);
    printf("\nFlaminthians: %d pontos, saldo de gols = %d\n", pontosF, Fs);

    // Verificacao
    if (pontosC > pontosF) {
        printf("\nResultado: Cormengo esta melhor classificado (C)\n");
    } else if (pontosF > pontosC) {
        printf("\nResultado: Flaminthians esta melhor classificado (F)\n");
    } else {
        // Pontos iguais, compara saldo
        if (Cs > Fs) {
            printf("\nResultado: Cormengo esta melhor classificado (C)\n");
        } else if (Fs > Cs) {
            printf("\nResultado: Flaminthians esta melhor classificado (F)\n");
        } else {
            printf("\nResultado: Os times estao empatados (=)\n");
        }
    }

    return 0;
}
