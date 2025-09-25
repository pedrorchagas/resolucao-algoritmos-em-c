

int main() {
    float Taxa, AplicacaoMensal, NumeroMeses, ValorAcumulado;
    printf("Informe o valor da taxa: ");
    scanf("%f", Taxa);
    printf("Informe o valor da aplicação mensal: ");
    scanf("%f", &AplicacaoMensal);
    printf("Informe o valor do numero de meses: ");
    scanf("%f", &NumeroMeses);

    ValorAcumulado = AplicacaoMensal * ((pow((1+Taxa), NumeroMeses) - 1)/NumeroMeses);

    printf("O valor acumulado no final é %.2f\n", ValorAcumulado);

    return 0;
}