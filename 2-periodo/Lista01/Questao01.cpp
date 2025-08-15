#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float Nota01, Nota02, Nota03, Nota04, Nota05, Nota06, Nota07, Nota08, Nota09, Nota10, SomaTotal, QntNotas = 10, Media, NotaMedia = 6;

    do {
        printf(" Valor da 1° nota: ");
        scanf("%f", &Nota01);
        if (Nota01 < 0 || Nota01 > 10) {
            printf("\nVALOR INSERIDO NÃO É VÁLIDO!!!\n\n");
            printf(" Informe o valor entre 0 e 10!!\n");
            system("pause");
        }
    } while(Nota01 < 0 || Nota01 > 10);

    do {
        printf(" Valor da 2° nota: ");
        scanf("%f", &Nota02);
        if (Nota02 < 0 || Nota02 > 10) {
            printf("\nVALOR INSERIDO NÃO É VÁLIDO!!!\n\n");
            printf(" Informe o valor entre 0 e 10!!\n");
            system("pause");
        }
    } while(Nota02 < 0 || Nota02 > 10);

    do {
        printf(" Valor da 3° nota: ");
        scanf("%f", &Nota03);
        if (Nota03 < 0 || Nota03 > 10) {
            printf("\nVALOR INSERIDO NÃO É VÁLIDO!!!\n\n");
            printf(" Informe o valor entre 0 e 10!!\n");
            system("pause");
        }
    } while(Nota03 < 0 || Nota03 > 10);

    do {
        printf(" Valor da 4° nota: ");
        scanf("%f", &Nota04);
        if (Nota04 < 0 || Nota04 > 10) {
            printf("\nVALOR INSERIDO NÃO É VÁLIDO!!!\n\n");
            printf(" Informe o valor entre 0 e 10!!\n");
            system("pause");
        }
    } while(Nota04 < 0 || Nota04 > 10);

    do {
        printf(" Valor da 5° nota: ");
        scanf("%f", &Nota05);
        if (Nota05 < 0 || Nota05 > 10) {
            printf("\nVALOR INSERIDO NÃO É VÁLIDO!!!\n\n");
            printf(" Informe o valor entre 0 e 10!!\n");
            system("pause");
        }
    } while(Nota05 < 0 || Nota05 > 10);

    do {
        printf(" Valor da 6° nota: ");
        scanf("%f", &Nota06);
        if (Nota06 < 0 || Nota06 > 10) {
            printf("\nVALOR INSERIDO NÃO É VÁLIDO!!!\n\n");
            printf(" Informe o valor entre 0 e 10!!\n");
            system("pause");
        }
    } while(Nota06 < 0 || Nota06 > 10);

    do {
        printf(" Valor da 7° nota: ");
        scanf("%f", &Nota07);
        if (Nota07 < 0 || Nota07 > 10) {
            printf("\nVALOR INSERIDO NÃO É VÁLIDO!!!\n\n");
            printf(" Informe o valor entre 0 e 10!!\n");
            system("pause");
        }
    } while(Nota07 < 0 || Nota07 > 10);

    do {
        printf(" Valor da 8° nota: ");
        scanf("%f", &Nota08);
        if (Nota08 < 0 || Nota08 > 10) {
            printf("\nVALOR INSERIDO NÃO É VÁLIDO!!!\n\n");
            printf(" Informe o valor entre 0 e 10!!\n");
            system("pause");
        }
    } while(Nota08 < 0 || Nota08 > 10);

    do {
        printf(" Valor da 9° nota: ");
        scanf("%f", &Nota09);
        if (Nota09 < 0 || Nota09 > 10) {
            printf("\nVALOR INSERIDO NÃO É VÁLIDO!!!\n\n");
            printf(" Informe o valor entre 0 e 10!!\n");
            system("pause");
        }
    } while(Nota09 < 0 || Nota09 > 10);

    do {
        printf(" Valor da 10° nota: ");
        scanf("%f", &Nota10);
        if (Nota10 < 0 || Nota10 > 10) {
            printf("\nVALOR INSERIDO NÃO É VÁLIDO!!!\n\n");
            printf(" Informe o valor entre 0 e 10!!\n");
            system("pause");
        }
    } while(Nota10 < 0 || Nota10 > 10);

    SomaTotal = Nota01 + Nota02 + Nota03 + Nota04 + Nota05 + Nota06 + Nota07 + Nota08 + Nota09 + Nota10;
    Media = SomaTotal/QntNotas;
    printf("\n\nA média das notas é %.2f\n", Media);

    printf("As notas a cima da média foram:\n");

    if(Nota01 >= NotaMedia && Nota01 <= 10) {
        printf("1° Nota: %.2f\n", Nota01);
    }
    if(Nota02 >= NotaMedia && Nota02 <= 10) {
        printf("2° Nota: %.2f\n", Nota02);
    }
    if(Nota03 >= NotaMedia && Nota03 <= 10) {
        printf("3° Nota: %.2f\n", Nota03);
    }
    if(Nota04 >= NotaMedia && Nota04 <= 10) {
        printf("4° Nota: %.2f\n", Nota04);
    }
    if(Nota05 >= NotaMedia && Nota05 <= 10) {
        printf("5° Nota: %.2f\n", Nota05);
    }
    if(Nota06 >= NotaMedia && Nota06 <= 10) {
        printf("6° Nota: %.2f\n", Nota06);
    }
    if(Nota07 >= NotaMedia && Nota07 <= 10) {
        printf("7° Nota: %.2f\n", Nota07);
    }
    if(Nota08 >= NotaMedia && Nota08 <= 10) {
        printf("8° Nota: %.2f\n", Nota08);
    }
    if(Nota09 >= NotaMedia && Nota09 <= 10) {
        printf("9° Nota: %.2f\n", Nota09);
    }
    if(Nota10 >= NotaMedia && Nota10 <= 10) {
        printf("10° Nota: %.2f\n", Nota10);
    }
    
    return 0;
}