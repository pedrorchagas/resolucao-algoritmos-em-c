#include<stdio.h>

// ESSA RESPOSTA ESTÁ COM UM PROBLEMA, IREI CORRIGIR COM O PROFESSOR
// ATT. PEDRO

int main() {
    char Opcao;
    bool Resposta = true;
    while(Resposta)
    { 
        printf("Você gosta de ler[S/N]: ");
        scanf("%c", &Opcao);
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
                
                printf("Resposta inválida, digite S ou N.\n valor: %c\n", Opcao);
        }
    }
    

    return 0;
}