#include <stdio.h>

const char *NOME_CANDIDATOS[] = {
    "", 
    "Maria Silva", 
    "Joao Santos", 
    "Ana Costa", 
    "Pedro Oliveira", 
    "Voto Branco", 
    "Voto Nulo"
};

int verificaValidade(int codigo);
float calculaPercentual(int votos, int total);
int determinaVencedor(int votos[]);
void exibeMenu();

int main() {

    int votos[7] = {0, 0, 0, 0, 0, 0, 0}; 
    int codigoVoto, totalVotos = 0;
    char continuar;

    printf("=== SISTEMA DE VOTACAO ELETRONICA ===\n\n");

    do {
        exibeMenu();
        
        printf("\nDigite o codigo do seu voto: ");
        scanf("%d", &codigoVoto);

        // Validação obrigatória: Repete enquanto a função retornar 0
        while (verificaValidade(codigoVoto) == 0) {
            printf(">>> Codigo invalido! Tente novamente (1-6): ");
            scanf("%d", &codigoVoto);
        }

        votos[codigoVoto]++;
        totalVotos++;

        printf("Voto confirmado para: %s\n", NOME_CANDIDATOS[codigoVoto]);
        printf("----------------------------------------\n");

        printf("Deseja registrar outro voto? (S/N): ");
        scanf(" %c", &continuar); 

    } while (continuar == 'S' || continuar == 's');

    printf("\n\n========================================\n");
    printf("        RELATORIO FINAL DA ELEICAO      \n");
    printf("========================================\n");
    printf("Total de votos computados: %d\n\n", totalVotos);

    // Exibir resultados individuais e percentuais
    if (totalVotos > 0) {
        for (int i = 1; i <= 6; i++) {
            float perc = calculaPercentual(votos[i], totalVotos);
            printf("[%d] %-15s: %d votos (%.2f%%)\n", 
                   i, NOME_CANDIDATOS[i], votos[i], perc);
        }

        printf("\n----------------------------------------\n");
        
        // Determinar Vencedor (apenas entre candidatos 1 a 4)
        int idVencedor = determinaVencedor(votos);
        
        // Verifica se houve votos válidos suficientes para ter um vencedor
        if (votos[idVencedor] > 0) {
            printf("VENCEDOR: %s com %d votos validos.\n", 
                   NOME_CANDIDATOS[idVencedor], votos[idVencedor]);
        } else {
            printf("Nao houve votos validos para candidatos.\n");
        }
        
    } else {
        printf("Nenhum voto foi registrado.\n");
    }

    return 0;
}


// Função que retorna 1 se válido, 0 se inválido
int verificaValidade(int codigo) {
    if (codigo >= 1 && codigo <= 6) {
        return 1;
    } else {
        return 0;
    }
}

// Função que retorna o percentual
float calculaPercentual(int parte, int total) {
    if (total == 0) return 0.0;
    return ((float)parte / total) * 100.0;
}

// Função para determinar vencedor 
int determinaVencedor(int votos[]) {
    int maiorVoto = -1;
    int codigoVencedor = 0;

    // Percorre apenas os candidatos (1 a 4), ignora Branco e Nulo
    for (int i = 1; i <= 4; i++) {
        if (votos[i] > maiorVoto) {
            maiorVoto = votos[i];
            codigoVencedor = i;
        }
    }
    return codigoVencedor;
}

void exibeMenu() {
    printf("\nCANDIDATOS:\n");
    printf("1 - Maria Silva\n");
    printf("2 - Joao Santos\n");
    printf("3 - Ana Costa\n");
    printf("4 - Pedro Oliveira\n");
    printf("5 - Voto Branco\n");
    printf("6 - Voto Nulo\n");
}