#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main ()
{
  setlocale(LC_ALL, "Portuguese");
  char Opcao;
  
  printf("Informe uma classe de campeão(A, M, L, R, ou T):");
  fflush(stdin);
  scanf("%c", &Opcao);

  Opcao = tolower(Opcao);
  switch (Opcao) {
    case 'a':
      printf("Classe Assassino\nCampeões: Akali\n");
      break;
    case 'm': 
      printf("Classe Mago\nCampeões: Ahri, Anivia, Annie, Aurelion Sol, Azir e Brand\n");
      break;
    case 'l': 
      printf("Classe Lutador\nCampeões: Aatrox\n");
      break;
    case 'r': 
      printf("Classe Atirador\nCampeões: Akshan, Aphelios, Ashe e Caitlyn\n");
      break;
    case 's':
      printf("Classe Suporte\nCampeões: Bardo e Braum\n");
      break;
    case 't':
      printf("Classe Tanque\nCampeões: Alistar, Amumu e Blitzcrank\n");
      break;
    default:
      printf("Classe não existe\n");
      break;
  }
  return 0;
}
