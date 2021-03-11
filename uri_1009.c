#include <stdio.h>

typedef struct vendedor{
    char nome[30];
    double salario;
    double vendas;
    double total; // salario + bonus
}Vendedor;

double calcularTotal(double salario, double vendas){
    double d;

    // calc 15% vendas
    d = vendas / 100;
    d = d * 15;

    // somar com salario base
    d = salario + d;

    return d;
}

int main(){
    Vendedor vendedor;

    scanf("%s", vendedor.nome);
    scanf("%lf", &vendedor.salario);
    scanf("%lf", &vendedor.vendas);

    // set total com retorno da func
    vendedor.total = calcularTotal(vendedor.salario, vendedor.vendas);

    printf("TOTAL = R$ %.2f\n", vendedor.total);

    return 0;
}