// Ta program izračuna vsoto dveh števil.

// Uvozimo knjižnico stdio, ki vsebuje funkcijo printf() in scanf().
#include <stdio.h>

// Glavni program.
int main() {
  // Izpišimo vprašanje uporabniku.
  printf("Vnesite prvo število: ");

  // Preberemo prvo število.
  int stevilo1;
  scanf("%d", &stevilo1);

  // Izpišimo vprašanje uporabniku.
  printf("Vnesite drugo število: ");

  // Preberemo drugo število.
  int stevilo2;
  scanf("%d", &stevilo2);

  // Izračunamo vsoto dveh števil.
  int vsota = stevilo1 + stevilo2;

  // Izpišemo vsoto na zaslon.
  printf("Vsota %d in %d je %d\n", stevilo1, stevilo2, vsota);

  // Vrnemo vrednost 0.
  return 0;
}
