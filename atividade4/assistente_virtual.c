#include <stdio.h>

int main() {
    int tipoFilme, generoLeve, generoIntenso, tipoTerror, tipoAcao;

    printf("Assistente Virtual de Classificação de Filmes 🎬🎭\n\n");

    printf("1. Escolha o tipo de filme:\n");
    printf("   1 - Filme leve\n");
    printf("   2 - Filme intenso\n");
    printf("Escolha: ");
    scanf("%d", &tipoFilme);

    if (tipoFilme == 1) {
        printf("\n2. Escolha o gênero:\n");
        printf("   1 - Comédia\n");
        printf("   2 - Animação\n");
        printf("Escolha: ");
        scanf("%d", &generoLeve);

        if (generoLeve == 1) {
            printf("\nSugestão: Assista ao filme 'As Branquelas'.\n");
        } else if (generoLeve == 2) {
            printf("\nSugestão: Assista ao filme 'Toy Story'.\n");
        } else {
            printf("\nOpção inválida.\n");
        }

    } else if (tipoFilme == 2) {
        printf("\n2. Escolha o gênero:\n");
        printf("   1 - Terror\n");
        printf("   2 - Ação\n");
        printf("Escolha: ");
        scanf("%d", &generoIntenso);

        if (generoIntenso == 1) {
            printf("\n3. Escolha o tipo de terror:\n");
            printf("   1 - Terror psicológico\n");
            printf("   2 - Terror sobrenatural\n");
            printf("Escolha: ");
            scanf("%d", &tipoTerror);

            if (tipoTerror == 1) {
                printf("\nSugestão: Assista ao filme 'Corra!'.\n");
            } else if (tipoTerror == 2) {
                printf("\nSugestão: Assista ao filme 'Invocação do Mal'.\n");
            } else {
                printf("\nOpção inválida.\n");
            }

        } else if (generoIntenso == 2) {
            printf("\n3. Escolha o tipo de ação:\n");
            printf("   1 - Super-heróis\n");
            printf("   2 - Aventura realista\n");
            printf("Escolha: ");
            scanf("%d", &tipoAcao);

            if (tipoAcao == 1) {
                printf("\nSugestão: Assista ao filme 'Vingadores: Ultimato'.\n");
            } else if (tipoAcao == 2) {
                printf("\nSugestão: Assista ao filme 'Mad Max: Estrada da Fúria'.\n");
            } else {
                printf("\nOpção inválida.\n");
            }

        } else {
            printf("\nOpção inválida.\n");
        }

    } else {
        printf("\nOpção inválida.\n");
    }

    return 0;
}
