#include <stdio.h>
#include <math.h>

int main()
{
    float r, A;

    printf("Digite o raio (r) do círculo: ");
    scanf("%f", &r);

    A = M_PI * r * r;

    printf("A área do círculo é: %.2f\n", A);

    return 0;
}
