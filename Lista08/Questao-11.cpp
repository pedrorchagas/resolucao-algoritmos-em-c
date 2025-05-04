#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main (int argc, char *argv[])
{
  setlocale(LC_ALL,"Portuguese");
  const char* Nome;
  char Letra;

  printf("Letra da Garagem: ");
  fflush(stdin);
  scanf("%c", &Letra);
  
  Letra = tolower(Letra);
  switch (Letra) {
    case 'a': Nome = "Rose"; break;
    case 'b': Nome = "Karine"; break;
    case 'c': Nome = "Alice"; break;
    case 'd': Nome = "Paulo"; break;
    case 'e': Nome = "Vilmar"; break;
    case 'f': Nome = "Alexandre"; break;
    case 'g': Nome = "Caio"; break;
    case 'h': Nome = "Itamar"; break;
    case 'i': Nome = "Melissa"; break;
    case 'j': Nome = "Antonia"; break;
    case 'l': Nome = "Maria Lúcia"; break;
    default:
      Nome = "Inexistente";
      break;
  }
  if (Nome == "Inexistente") {
    printf("Garagem não existe.\n");
  } else {
    printf("Inquilino que utiliza a garagem: %s\n", Nome);
  }
  return 0;
}
