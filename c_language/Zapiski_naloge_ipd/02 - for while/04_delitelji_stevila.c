#include <stdio.h>

int main() {
  int stevilo, i;

  // Vprašamo uporabnika po številu.
  printf("Vnesite število: ");
  scanf("%d", &stevilo);

  // Za vsako vrednost indeksa od 1 do števila.
  for (i = 1; i <= stevilo; i++) {

    // Če je stevilo deljivo z i, ga izpišemo.
    if (stevilo % i == 0) {
      printf("%d ", i);
    }
  }

  // Izpisemo prelomno vrstico.
  printf("\n");

  // Vrnemo vrednost 0.
  return 0;
}