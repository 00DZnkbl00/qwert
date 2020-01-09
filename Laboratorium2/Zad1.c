#include <stdio.h>
int main() {
  int M;
  int suma = 0;
  int i = 0;
  printf("Podaj liczbe M: ");
  scanf("%d\n", &M);
  while (suma < M) {
     suma=suma+i;
     i=i+1;
  }
  printf("Szukane n to:%d ", i-1);
  return 0;
}