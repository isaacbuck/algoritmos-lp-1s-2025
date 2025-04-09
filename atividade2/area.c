#include <stdio.h>
#include <math.h>
int main (int argc, char* argv[]){
char opcao;
 float r, A;
  float D, d,;
  float L,;
   float b, h,;
    float B, b, h,;
    

printf("area.c\n");
printf("Escolha uma opcao: \n");
printf("c - Circulo\n");
printf("l - losango\n");
printf("q _ Quadrado\n");
printf("r - Retangulo\n");
printf("t - triangulo\n");
printf("z- Trapezio\n");
scanf("%c", &opcao);
switch(opcao){
case 'c':
printf("circulo\n");
 printf("Digite o raio (r) do círculo: ");
    scanf("%f", &r);

    A = M_PI * r * r;

    printf("A área do círculo é: %.2f\n", A);
break;
case 'l':
printf("quadrado\n");
  printf("Digite o comprimento do lado do quadrado (L): ");
    scanf("%f", &L);

    A = L * L;

    printf("A área do quadrado é: %.2f\n", A);
break;
case 'r':
printf("retangulo\n");
  printf("Digite a base (b) do retângulo: ");
    scanf("%f", &b);

    printf("Digite a altura (h) do retângulo: ");
    scanf("%f", &h);

    A = b * h;

    printf("A área do retângulo é: %.2f\n", A);
break;
case 'z':
printf("trapezio\n");
 printf("Digite a base maior (B) do trapézio: ");
    scanf("%f", &B);

    printf("Digite a base menor (b) do trapézio: ");
    scanf("%f", &b);

    printf("Digite a altura (h) do trapézio: ");
    scanf("%f", &h);

    A = ((B + b) * h) / 2;

    printf("A área do trapézio é: %.2f\n", A);
break;
case 't':
printf("triangulo\n");
  printf("Digite a base (b) do triângulo: ");
    scanf("%f", &b);

    printf("Digite a altura (h) do triângulo: ");
    scanf("%f", &h);

    A = (b * h) / 2;

    printf("A área do triângulo é: %.2f\n", A);
break;
default:
printf("opcao invalida")
break;
A = 0;
printf("A = %.2f\n",A);


}
return 0;
}