#include <stdio.h>
int main(){

    char nome[30];
    float altura, peso, imc;

    printf("Coloque seu nome completo: \n");
    scanf("%s", &nome);

    int c;
    while ((c = getchar()) != '\n' && c != EOF){}
    
    printf("Agora coloque sua altura: \n");
    scanf(" %f", &altura);
    
    while ((c = getchar()) != '\n' && c != EOF){}

    printf("Agora coloque seu peso: \n");
    scanf(" %f", &peso);

    imc = peso / (altura * altura);

    printf("Paciente: %s\n", nome);
    printf("O resultado do seu IMC eh de: %.2f \n", imc);
    
    return 0;
}