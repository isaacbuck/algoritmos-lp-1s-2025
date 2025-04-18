#include <stdio.h>

int main() {
    int numAlunos, i, aprovados = 0, k;
    float soma = 0.0, maiorNota = 0.0, menorNota = 10.0;

    printf("Digite o número de alunos da turma: ");
    scanf("%d", &numAlunos);

    float notas[numAlunos];  

    
    for (i = 0; i < numAlunos; i++) {
        do {
            printf("Digite a nota do aluno %d (entre 0.0 e 10.0): ", i + 1);
            scanf("%f", &notas[i]);
            if (notas[i] < 0.0 || notas[i] > 10.0) {
                printf("Nota inválida! Digite novamente.\n");
            }
        } while (notas[i] < 0.0 || notas[i] > 10.0);

        soma += notas[i];

        if (notas[i] > maiorNota)
            maiorNota = notas[i];
        if (notas[i] < menorNota)
            menorNota = notas[i];
        if (notas[i] >= 6.0)
            aprovados++;
    }

    printf("Digite a posição (0 a %d) do aluno que deseja ver a nota: ", numAlunos - 1);
    scanf("%d", &k);

    
    printf("\nMédia geral da turma: %.2f\n", soma / numAlunos);
    printf("Maior nota: %.2f\n", maiorNota);
    printf("Menor nota: %.2f\n", menorNota);
    printf("Quantidade de alunos aprovados (nota >= 6.0): %d\n", aprovados);

    if (k >= 0 && k < numAlunos) {
        printf("Nota do aluno na posição %d: %.2f\n", k, notas[k]);
    } else {
        printf("Posição inválida!\n");
    }

    return 0;
}
