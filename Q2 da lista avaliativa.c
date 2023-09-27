#include <stdio.h>

int main()
{
    int numero, temp, algarismo, soma_dos_algarismos = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        printf("%d eh par.\n", numero);
    }
    else
    {
        printf("%d eh impar.\n", numero);
    }

    temp = numero;
    while (temp != 0)
    {
        algarismo = temp % 10;
        soma_dos_algarismos = soma_dos_algarismos + algarismo;
        temp = temp / 10;
    }

    printf("A soma dos digitos de %d eh %d\n", numero, soma_dos_algarismos);

    return 0;
}