#include <stdio.h>

int main() {
  int stevilo, i;

  // Vprašamo uporabnika po številu.
  printf("Vnesite število: ");
  scanf("%d", &stevilo);

  // Za vsako vrednost indeksa od 1 do števila.
  for (i = 1; i <= stevilo; i++) {

    // Če je število deljivo s 3, ga izpišemo.
    if (i % 3 == 0) {
      printf("%d ", i);
    }
  }

  printf("\n");

  return 0;
}
