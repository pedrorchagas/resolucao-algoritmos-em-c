#include<stdio.h>

int main() {
    char Opcao;
    bool Resposta = true;
    while(Resposta)
    { 
        printf("Você gosta de ler[S/N]: ");
        scanf(" %c ", &Opcao);
        switch (Opcao)
        {
            case 'S':
            case 's':
                Resposta = false;
                break;
            case 'N':
            case 'n':
                Resposta = false;
                break;
            default:
                
                printf("Resposta inválida, digite S ou N.\n ");
        }
    }
    

    return 0;
}