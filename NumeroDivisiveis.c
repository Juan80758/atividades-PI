#include <stdio.h>

int main(){
    int numero, A, B;

    printf("Digite o valor para numero: ");
    scanf("%d", &numero);

    printf("Digite um valor para A: ");
    scanf("%d", &A);

    printf("Digite um valor para B: ");
    scanf("%d", &B);

    int divA = (numero % A == 0);
    int divB = (numero % B == 0)

    if ((numero % A == 0 && numero % B != 0) ) { 
    printf("numero (%d) eh divisivel apenas por A (%d)\n", numero, A);
    printf("E satisfeita a condição\n");
}
    else if ( (numero % B == 0 && numero % A != 0) ) {
        printf("numero (%d) eh divisivel apenas por B\n", numero, B); 
}
    else {
        printf("numero (%d) nao eh divisivel nem por A (%d) e nem por B(%d)\n", numero, A, B);
        printf("Nao atende a condicao\n");
    }

   return 0;
}