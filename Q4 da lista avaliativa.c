#include <stdio.h>

int main() {
    char categoria;
    float salario;

    printf("Digite a categoria do funcionario: ");
    scanf("%c", &categoria);

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    if(categoria == 'a')
    {
        salario = salario * 1.05;
    }
    else if(categoria == 'b')
    {
        salario = salario * 1.07;
    }
    else if(categoria == 'c')
    {
        salario = salario * 1.08;
    }
    else
    {
        printf("Categoria invalida.\n");
        return 1;
    }

    printf("O novo salario eh: %.2f\n", salario);

    return 0;
}