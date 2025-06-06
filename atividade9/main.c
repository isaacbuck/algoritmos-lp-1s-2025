#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Uso: %s <menor> <maior> <esperado>\n", argv[0]);
        return 1;
    }

    int min = atoi(argv[1]);
    int max = atoi(argv[2]);
    int esperado = atoi(argv[3]);

    // Validações
    if (min >= max) {
        printf("Erro: o número mínimo deve ser menor que o máximo.\n");
        return 1;
    }

    if (esperado < min || esperado > max) {
        printf("Erro: o número esperado deve estar entre %d e %d.\n", min, max);
        return 1;
    }

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));
    int sorteado = (rand() % (max - min + 1)) + min;

    // Verifica se foi sorteado
    const char *resultado = (sorteado == esperado) ? "sorteado" : "não sorteado";

    // Mostra resultado no terminal
    printf("Número sorteado: %d\nResultado: %s\n", sorteado, resultado);

    // Escreve no log.txt
    FILE *arquivo = fopen("log.txt", "a");
    if (arquivo == NULL) {
        perror("Erro ao abrir log.txt");
        return 1;
    }

    fprintf(arquivo, "número mínimo: %d\n", min);
    fprintf(arquivo, "número máximo: %d\n", max);
    fprintf(arquivo, "número esperado: %d\n", esperado);
    fprintf(arquivo, "número sorteado: %d\n", sorteado);
    fprintf(arquivo, "resultado: %s\n\n", resultado);

    fclose(arquivo);
    return 0;
}
