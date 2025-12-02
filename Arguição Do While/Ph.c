#include <stdio.h>


int validar_ph(float ph);
int classificar_ph(float ph);

int main() {
    
    int qtd_acido_forte = 0;
    int qtd_acido_fraco = 0;
    int qtd_neutro = 0;
    int qtd_basico_fraco = 0;
    int qtd_basico_forte = 0;
    

    float ph, min_ph = 15.0, max_ph = -1.0;
    int total_analises = 0;
    int qtd_perigosos = 0;
    char continuar;
    int codigo;

    printf("SISTEMA DE ANALISE DE pH \n");

    do {
        
        printf("Digite o valor do pH (0.0 a 14.0): ");
        scanf("%f", &ph);

        while (validar_ph(ph) == 0) {
            printf(">>> Valor invalido! Tente novamente: ");
            scanf("%f", &ph);
        }

        
        codigo = classificar_ph(ph);
        total_analises++;

        switch (codigo) {
            case 1:
                qtd_acido_forte++;
                printf("Classificacao: ACIDO FORTE (PERIGOSO)\n");
                break;
            case 2:
                qtd_acido_fraco++;
                printf("Classificacao: ACIDO FRACO\n");
                break;
            case 3:
                qtd_neutro++;
                printf("Classificacao: NEUTRO\n");
                break;
            case 4:
                qtd_basico_fraco++;
                printf("Classificacao: BASICO FRACO\n");
                break;
            case 5:
                qtd_basico_forte++;
                printf("Classificacao: BASICO FORTE (PERIGOSO)\n");
                break;
        }
        
        printf("----------------------------------------\n");

        
        if (total_analises == 1) {
            min_ph = ph;
            max_ph = ph;
        } else {
            if (ph < min_ph) min_ph = ph;
            if (ph > max_ph) max_ph = ph;
        }

        printf("Deseja analisar outra substancia? (S/N): ");
        scanf(" %c", &continuar); 
        printf("\n");

    } while (continuar == 'S' || continuar == 's');

    printf("        RELATORIO FINAL DE ANALISE      \n");
    
    if (total_analises > 0) {
        printf("1. Total de substancias analisadas: %d\n\n", total_analises);

        printf("2. Detalhamento por classificacao:\n");
        
        printf("   - ACIDO FORTE: %d (%.2f%%)\n", 
               qtd_acido_forte, (float)qtd_acido_forte/total_analises * 100);
               
        printf("   - ACIDO FRACO: %d (%.2f%%)\n", 
               qtd_acido_fraco, (float)qtd_acido_fraco/total_analises * 100);
               
        printf("   - NEUTRO:      %d (%.2f%%)\n", 
               qtd_neutro,      (float)qtd_neutro/total_analises * 100);
               
        printf("   - BASICO FRACO:%d (%.2f%%)\n", 
               qtd_basico_fraco,(float)qtd_basico_fraco/total_analises * 100);
               
        printf("   - BASICO FORTE:%d (%.2f%%)\n", 
               qtd_basico_forte,(float)qtd_basico_forte/total_analises * 100);

        printf("\n3. Extremos registrados:\n");
        printf("   - Menor pH: %.2f\n", min_ph);
        printf("   - Maior pH: %.2f\n", max_ph);

        qtd_perigosos = qtd_acido_forte + qtd_basico_forte;
        
        printf("\n4. ALERTA DE SEGURANCA:\n");
        if (qtd_perigosos > 0) {
            printf("   !!! ATENCAO !!!\n");
            printf("   Foram detectadas %d substancias PERIGOSAS\n", qtd_perigosos);
        } else {
            printf("   Nenhuma substancia perigosa detectada.\n");
        }
    } else {
        printf("Nenhuma analise foi realizada.\n");
    }

    return 0;
}

int validar_ph(float ph) {
    if (ph >= 0.0 && ph <= 14.0) return 1;
    else return 0;
}

int classificar_ph(float ph) {
    if (ph < 3.0) return 1;
    else if (ph < 7.0) return 2;
    else if (ph == 7.0) return 3;
    else if (ph <= 11.0) return 4;
    else return 5;
}