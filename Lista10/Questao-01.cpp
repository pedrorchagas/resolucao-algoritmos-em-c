#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char Reposta;
    bool Loop = true;

    do {
        printf("Você gosta de ler? [S/N]: ");
        scanf(" %c", &Reposta);
        switch (Reposta){
            case 'n':
            case 'N':
            case 'S':
            case 's':
                Loop = false;
                break;
            default:
                printf("Resposta inválida, digite S ou N.\n");
                break;
        }

    } while(Loop);


    return 0;
}