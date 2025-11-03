#include <stdio.h>
int main(){
    float nota1, nota2, nota3, media, soma;

    media = 5;

    printf("Digite aqui sua primeira nota: \n", nota1);
    scanf("%f", &nota1);
    
    printf("Digite aqui sua segunda nota: \n", nota2);
    scanf("%f",&nota2);

    soma = media * 3;
     
    nota3 = soma - (nota1 + nota2);

    if(nota3 <= 10.0 && nota3 >= 0.0 ) {

    printf("Voce ira precisar: %.2f na terceira nota.\n", nota3);

    }

    else if (nota3 < 0.0) {

    printf("Parabens ja esta passado. \n", nota3, nota1, nota2);

    }

    return 0;
}