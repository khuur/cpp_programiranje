// Ta program izračuna kvadratno korenino števila.

// Uvozimo knjižnico math.h, ki vsebuje funkcijo sqrt().
#include <math.h>

// Glavni program.
int main() {
  // Izpišimo vprašanje uporabniku.
  printf("Vnesite število: ");

  // Preberemo število.
  double stevilo;
  scanf("%lf", &stevilo);

  // Izračunamo kvadratno korenino števila.
  double kvadratna_korenina = sqrt(stevilo);

  // Izpišemo kvadratno korenino na zaslon.
  printf("Kvadratna korenina %f je %f\n", stevilo, kvadratna_korenina);

  // Vrnemo vrednost 0.
  return 0;
}
