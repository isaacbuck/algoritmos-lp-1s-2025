#include <stdio.h>

int main()
{
    float L, A;

    /
        printf("Digite o comprimento do lado do quadrado (L): ");
    scanf("%f", &L);

    A = L * L;

    printf("A área do quadrado é: %.2f\n", A);

    return 0;
}
