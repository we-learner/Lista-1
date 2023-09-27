#include <stdio.h>

int main()
{
    int numero1, numero2;
    printf("Digite dois numeros inteiros: ");
    scanf("%d%d", &numero1, &numero2);

    if (numero1 > numero2)
    {
        printf("%d eh maior que %d\n", numero1, numero2);
        if (numero1 % numero2 == 0)
        {
            printf("%d eh multiplo de %d\n", numero1, numero2);
        }
        else
        {
            printf("%d não eh multiplo de %d\n", numero1, numero2);
        }
    }
    else if (numero2 > numero1)
    {
        printf("%d eh menor que %d\n", numero2, numero1);
        if (numero2 % numero1 == 0)
        {
            printf("%d eh multiplo de %d\n", numero2, numero1);
        }
        else
        {
            printf("%d nao e multiplo de %d\n", numero2, numero1);
        }
    } 
    else 
    {
        printf("Os valores lidos sao iguais\n");
    }

    return 0;
}