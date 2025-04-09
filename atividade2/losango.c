#include <stdio.h>

int main()
{
    float D, d, A;

    printf("Digite a diagonal maior (D) do losango: ");
    scanf("%f", &D);

    printf("Digite a diagonal menor (d) do losango: ");
    scanf("%f", &d);

    A = (D * d) / 2;

    printf("A área do losango é: %.2f\n", A);

    return 0;
}
