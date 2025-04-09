#include <stdio.h>

int main()
{
    float b, h, A;

    printf("Digite a base (b) do retângulo: ");
    scanf("%f", &b);

    printf("Digite a altura (h) do retângulo: ");
    scanf("%f", &h);

    A = b * h;

    printf("A área do retângulo é: %.2f\n", A);

    return 0;
}
