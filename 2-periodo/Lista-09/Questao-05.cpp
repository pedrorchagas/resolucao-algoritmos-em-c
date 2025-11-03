#include <stdio.h>
#include <math.h>
 void calcesfera(float R, float *Area, float *Volume) {
  *Area = 4 * M_PI * pow(R, 2);
  *Volume = 4.0 / 3.0 * M_PI * pow(R, 3);
}
int main() {
  float Area, Raio, Volume;
  printf("Digite o raio: "); scanf("%f", &Raio);
  calcesfera(Raio, &Area, &Volume);
  printf("Area: %.2f\nVolume: %.2f", Area, Volume);
  return 0;
}
