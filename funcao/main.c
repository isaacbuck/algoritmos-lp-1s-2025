#include <stdio.h>
int ler_valor_valido(){
    // codigo da funcao
   int opcao;  
}
int main(int argc, char *argv[])
{

    int opcao, resposta;

    do
    {
        printf("escolha uma opcao:\n1 Iniciar quiz\no - Sair");
        scanf("%d", &opcao);
    } while (opcao != 1 && opcao != 0);

    if (opcao == 1)
    {
        do
        {
            printf("escolha uma opcao:\n1 Iniciar quiz\no - Sair");
            scanf("%d", &resposta);
        }

        while (resposta != 1 && opcao != 0);
    }
    else if (resposta == 2)
    {
        printf("voce acertou!\n");
    }
    else
    {
        printf("melhore!!\n");
    }

    return 0;
}