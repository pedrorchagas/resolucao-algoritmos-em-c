#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{
 setlocale(LC_ALL, "Portuguese"); 
 float Peso, Altura, IMC;

 printf("Peso: ");
 scanf("%f", &Peso);
 printf("Altura: ");
 scanf("%f", &Altura);

 IMC = Peso / pow(Altura, 2);
 printf("Seu IMC é: %.2f\n", IMC);
 if (IMC < 17) {
   printf("Muito abaixo do peso\n");
 }
 else if (IMC < 18.5) {
   printf("Abaixo do peso\n");
 }
 else if (IMC < 25) {
    printf("Peso Normal\n");
 }
 else if (IMC < 30) {
   printf("Acima do peso\n");
 }
 else if (IMC < 35) {
   printf("Obesidade I\n");
 }
 else if (IMC < 40) {
   printf("Obesidade II (severa)\n");
 }
 else {
  printf("Obesidade III (morbida)\n");
 }
  return 0;
}
