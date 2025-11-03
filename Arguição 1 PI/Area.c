#include <stdio.h>
int main(){

    float base, altura, area;

    printf("Digite aqui a base (em m): \n");
    scanf("%f", &base);

    printf("Agora digite a altura (em m): \n");
    scanf ("%f", &altura);

    area = (base * altura) / 2.0;

    printf("A area desse triangulo eh de: %.2f m2\n", area);

    return 0;
}