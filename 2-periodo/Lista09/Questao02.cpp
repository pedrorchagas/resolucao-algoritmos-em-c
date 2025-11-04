#include<stdio.h>

void verificavalor(int *Maior, int *Menor) {
    if (*Maior < *Menor) {
        int Aux;
        Aux = *Maior;
        *Maior = *Menor;
        *Menor = Aux;
    } 
}


int main() {
    int ValorA, ValorB;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d",&ValorA, &ValorB);
    verificavalor(&ValorA,&ValorB);
    printf("Maior valor: %d\n",ValorA);
    printf("Menor valor: %d\n",ValorB);
    return 0;
}
