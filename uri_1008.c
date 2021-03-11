#include <stdio.h>

typedef struct funcionario{
    int numero;
    int horas;
    float recebe;
    float salario;
}Funcionario;

int main(){
    Funcionario funcionario;

    scanf("%i", &funcionario.numero);
    scanf("%i", &funcionario.horas);
    scanf("%f", &funcionario.recebe);

    funcionario.salario = funcionario.recebe * funcionario.horas;

    printf("NUMBER = %i\n", funcionario.numero);
    printf("SALARY = U$ %.2f\n", funcionario.salario);

    return 0;
}