// Ta program vpraša uporabnika po imenu in ga nato pozdravi.

// Uvozimo knjižnico stdio, ki vsebuje funkcijo printf() in scanf().
#include <stdio.h>

// Glavni program.
int main() {
  // Izpišimo vprašanje uporabniku.
  printf("Kako se imenujete? ");

  // Preberemo uporabnikov odgovor.
  char ime[100];
  scanf("%s", ime);

  // Pozdravimo uporabnika.
  printf("Pozdravljeni, %s!", ime);

  // Vrnemo vrednost 0.
  return 0;
}
