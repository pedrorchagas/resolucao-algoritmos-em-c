

int main() {
    float N1, N2, N3, N4, Media;
    printf("Escreva o valor da nota 01");
    scanf("%if", &N1);
    printf("Escreva o valor da nota 02");
    scanf("%f", &N2);
    printf("Escreva o valor da nota 03");
    scanf("%f", &N3);
    printf("Escreva o valor da nota 04");
    scanf("%f", &N4);

    Media = (N1 + N2 + N3 + N4 ) / 4;

    printf("O valor da média é %.2f", Media);

    return 0;
}