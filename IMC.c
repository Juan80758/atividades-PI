#include <stdio.h>

int main(){
    
    float peso, altura, imc;

    printf("Digite o seu peso aqui: ");
    scanf("%f", &peso);

    while(getchar() != '\n'); 


    printf("Digite sua altura aqui: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);


    printf("\nIMC = %.2f\n", imc);
    
    if(imc < 18,5){
        printf("Classificacao: Abaixo do peso\n");
    }
    else if (imc < 25) {
        printf("Classificacao: Esta saudavel\n");
    }
    else if (imc < 30) {
        printf("Classificao: Sobrepeso\n");
    }
    else if (imc < 35) {
        printf("Classificaco: Obesidade Grau 1\n");
    }
    else if (imc < 40) {
        printf("Classificacao: Obesidade Grau 2(Obesidade severa)\n");
    }
    else {
        printf("Classificacao: Obesidade Grau 3(Obsesidade Morbida)\n");
    }

    return 0;
}