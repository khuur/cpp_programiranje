// Ta program izračuna kvadratni koren števila.

// Uvozimo knjižnico math.h, ki vsebuje funkcijo sqrt().
#include <math.h>

// Glavni program.
int main() {
  // Izpišimo vprašanje uporabniku.
  printf("Vnesite število: ");

  // Preberemo število.
  double stevilo;
  scanf("%lf", &stevilo);

  // Izračunamo kvadratni koren števila.
  double kvadratna_korenina = sqrt(stevilo);

  // Izpišemo kvadratni koren na zaslon.
  printf("Kvadratna korenina %f je %f\n", stevilo, kvadratna_korenina);

  // Vrnemo vrednost 0.
  return 0;
}
