#include <stdio.h>
int main(){
    char nome[30];
    float salario_bruto, ir, inss, salario_liquido;

    printf("Digite aqui seu nome: \n");
    scanf("%s", nome);

    printf("Agora digite seu salario: \n");
    scanf("%f", &salario_bruto);

    inss = salario_bruto * 0.075;
    ir = salario_bruto * 0.075;
    salario_liquido = salario_bruto - inss - ir;

    printf("Funcionario: %s \n", nome);
    printf("O seu salario liquido sera de: R$ %.3f \n", salario_liquido);

    return 0;
}