#include <stdio.h>

int main()
{
    float b, h, A;

    printf("Digite a base (b) do triângulo: ");
    scanf("%f", &b);

    printf("Digite a altura (h) do triângulo: ");
    scanf("%f", &h);

    A = (b * h) / 2;

    printf("A área do triângulo é: %.2f\n", A);

    return 0;
}
