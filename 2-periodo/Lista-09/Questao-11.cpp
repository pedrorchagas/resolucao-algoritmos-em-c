#include <locale>
#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void lerSalarios(float *Vetor, int Tamanho) {
  for(int i = 0; i < Tamanho; i++) {
    printf("Digite o %io salário: ", i + 1); scanf("%f", &Vetor[i]);
  }
}

void imprimirVetor(float *Vetor, int Tamanho) {
  for(int i = 0; i < Tamanho; i++) 
    printf("%.2f ", Vetor[i]);
  printf("\n");
}

float procurarSalario(float *Vetor, int Tamanho, float Salario) {
  int PosicaoSalario = -1;
  for(int i = 0; i < Tamanho; i++) {
    if(Vetor[i] == Salario) {
      PosicaoSalario = i;
      break;
    }
  }
  return PosicaoSalario;
}


int main (int argc, char *argv[]) {
  setlocale(LC_ALL, "Portuguese");
  float Salarios[TAM], SalarioProcurado;
  int IndiceSalarioProcurado;
  lerSalarios(Salarios,TAM);
  printf("Vetor gerado com os salários: \n");
  imprimirVetor(Salarios, TAM);
  printf("Digite o salário a ser procurado: "); scanf("%f", &SalarioProcurado);
  IndiceSalarioProcurado = procurarSalario(Salarios,TAM, SalarioProcurado);
  printf("Posição do salário procurado: %i\n", IndiceSalarioProcurado);
  printf("Se o programa retornar -1 como posição do salário procurado, ele não existe dentro do vetor!\n");
  return 0;
}
