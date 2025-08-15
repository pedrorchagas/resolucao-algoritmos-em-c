
#include<stdio.h>
int main() {
    float Nota1, Nota2, Media;
    printf("Informe a primeira nota: ");
    scanf("%f",&Nota1);
    printf("Informe a segunda nota: ");
    scanf("%f",&Nota2);

    Media = (Nota1 + Nota2)/2;

    printf("A média final é: %.2f\n", Media);
    return 0;
}