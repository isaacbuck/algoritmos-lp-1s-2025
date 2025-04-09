#include <stdio.h>

int main()
{
    float B, b, h, A;

    printf("Digite a base maior (B) do trapézio: ");
    scanf("%f", &B);

    printf("Digite a base menor (b) do trapézio: ");
    scanf("%f", &b);

    printf("Digite a altura (h) do trapézio: ");
    scanf("%f", &h);

    A = ((B + b) * h) / 2;

    printf("A área do trapézio é: %.2f\n", A);

    return 0;
}
