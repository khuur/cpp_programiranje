#include <stdio.h>

int main() {
  int stevilo, i, temp, reverse = 0;

  // Vprašamo uporabnika po številu.
  printf("Vnesite število: ");
  scanf("%d", &stevilo);

  // Shranimo število v spremenljivko temp.
  temp = stevilo;

  // Za vsako vrednost indeksa od 1 do števila.
  for (i = 1; i <= stevilo; i++) {

    // Pomnožimo reverse s 10 in dodamo zadnjo številko števila.
    reverse = reverse * 10 + temp % 10;

    // Skrajšamo število za zadnjo številko.
    temp = temp / 10;
  }

  // Če je število enako reverse, je to palindrom.
  if (stevilo == reverse) {
    printf("Število je palindrom.\n");
  } else {
    printf("Število ni palindrom.\n");
  }

  return 0;
}
