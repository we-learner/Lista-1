#include <stdio.h>

int main()
{
    int senha_correta, senha_inserida;

    printf("Crie uma senha: ");
    scanf("%d", &senha_correta);

    while(senha_correta >= 9999)
    {
        printf("Esta senha nao pode ser usada! Ela deve ter no maximo quatro algarismos.\n");
        printf("Crie uma senha: ");
        scanf("%d", &senha_correta);
    }
    
    printf("Digite a senha: ");
    scanf("%d", &senha_inserida);

    while(senha_inserida != senha_correta)
    {
        printf("Senha incorreta. Tente novamente: ");
        scanf("%d", &senha_inserida);
    }

    printf("Senha correta! Acesso permitido.\n");

    return 0;
}