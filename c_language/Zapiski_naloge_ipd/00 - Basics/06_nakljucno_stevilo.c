// Ta program izbere naključno število med 1 in 100.

// Uvozimo knjižnico stdlib.h, ki vsebuje funkcijo rand().
#include <stdlib.h>

// Glavni program.
int main() {
  // Izberemo naključno število med 1 in 100.
  int nakljucno_stevilo = rand() % 100 + 1;

  // Izpišemo na zaslon.
  printf("Nakljucno število je %d\n", nakljucno_stevilo);

  // Vrnemo vrednost 0.
  return 0;
}
