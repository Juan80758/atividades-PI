#include <stdio.h>
int main(){

    float celsius, fanhrenheit, kelvin, calculof, calculok;

    printf("Digite aqui a temperatura (em Celsius): \n");
    scanf("%f", &celsius);

    calculof = (celsius * 1.8) + 32;
    calculok = (celsius + 273.15);

    printf("A temperatura em Fanhreinheit eh: %.2f \n", calculof);

    printf("A temperatura em Kelvin eh: %.2f \n", calculok);

   return 0;
}