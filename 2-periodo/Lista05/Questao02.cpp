#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define MAX_CHAR 100

int main() {
    char Frase[MAX_CHAR] = {};
    int i;
    fgets(Frase, MAX_CHAR, stdin);

    while (Frase[i] != '\0') {
        if (isalpha(Frase[i])) {
            switch (tolower(Frase[i])) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'U': break;
                default: {
                    Frase[i] = '@';
                }
            }
        }
        i++;
    }
    printf("String final: ");
    printf("%s", Frase);
    return 0;
}