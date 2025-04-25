#include <stdio.h>
#include <string.h>
#define TAM 255
int main(int argc, char *argv[])
{
    char palavra1[] = "conhecimento";
    char palavra2[] = {'C', 'o', 'n', 'h', 'e', 'c', 'i', 'm', 'e', 'n', 't', 'o'};
    char frase1[TAM];
    char palavra3[TAM];
    char palavra4[TAM];

    printf("%s\n", palavra1);
    printf("%s\n", palavra2);

    printf("%c\n", palavra2[4]);

    printf("digite uma frase: ");
    fflush(stdin);
    fgets(frase1, TAM, stdin);

    printf("%s", frase1);

    printf("digite uma palavra: ");
    fflush(stdin);

    fgets(palavra3, TAM, stdin);
    printf("digite outra palavra: ");
    fflush(stdin);
    fgets(palavra4, TAM, stdin);
    {
        if (strcmp(palavra3, palavra4) == 0)
        {
            printf("as palavras sao iguais\n");
        }

        else
        {
            printf("as palavras nao sao iguais\n");
        }

        printf("tamanho da palavra3 eh %d", strlen(palavra3));

        for (int i = 0; i < strlen(palavra3); i++)
        {
            printf("%c\n", palavra3[i]);
            for (int i = 0; i < strlen(palavra3); i++)
            {
                printf("%c\n", palavra3[i]);
            }
        }
    }

    printf("Palavra3 ao contrario: ");
    for (int i = strlen(palavra3) - 1; i >= 0; i--)
    {
        printf("%c", palavra3[i]);
    }
    printf("\n");
    strcat(palavra3, palavra4);
    printf("palavra3 conctenada = %s", palavra3);

    return 0;
}