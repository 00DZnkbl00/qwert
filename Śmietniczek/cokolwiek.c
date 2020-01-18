#include <stdio.h>

int main () {
  int ref[] = {8, 4, 0, 2};
  int *wsk;
  int indeks;
  for (indeks = 0, wsk = ref; indeks < 4; indeks++, wsk++)
  printf("%d %d\n", ref[indeks], *wsk);
  return 0;
}