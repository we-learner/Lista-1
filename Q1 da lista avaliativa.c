#include <stdio.h>

int main()
{
    int ano;
    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (ano <= 2022 && ano >= 1896 && (ano - 1896) % 4 == 0 && ano != 1916 && ano != 1940 && ano != 1944)
    {
        printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d.\n", ano);
    }
    else if (ano <= 2022 && ano >= 1930 && (ano - 1930) % 4 == 0 && ano != 1942 && ano != 1946)
    {
        printf("A Copa do Mundo de Futebol ocorreu no ano de %d.\n", ano);
    }
    else if (ano >= 1800 && ano <= 2022)
    {
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo de Futebol no ano %d.\n", ano);
    }
    else
    {
        printf("Ano fora do intervalo valido.\n");
        return 1;
    }
    return 0;
}