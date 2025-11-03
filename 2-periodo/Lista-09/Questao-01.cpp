#include <stdio.h>
int main()
{
  int X, Y, *P;
  Y = 0;
  P = &Y;
  X = *P;
  X = 4;
  (*P)++;
  X--;
  P = &X;
  (*P) += Y;
  printf("X: %i Y: %i  P: %i", X, Y, P);
}