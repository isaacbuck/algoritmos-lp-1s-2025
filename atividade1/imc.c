int main()
{

    float altura, peso, imc;

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    printf("O seu IMC é: %.2f\n", imc);


return 0;
}
