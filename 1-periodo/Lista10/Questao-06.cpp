#include<stdio.h>

int main() {
    char Letra;
    int Contagem = 0;
    bool Loop = true;
    do {
        scanf(" %c", &Letra);
        //printf("Letra: %c\n", Letra);
        switch (Letra){
            case 'x':
            case 'X':
                Loop = false;
                break;
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                Contagem++;
                break;
            default:
                break;
        }
    } while (Loop);
    printf("%i vogais foram digitadas.\n", Contagem);

    return 0;
}