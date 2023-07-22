#include <stdio.h>

int main() {
  // Vprašamo uporabnika po številu.
  int stevilo;
  printf("Vnesite število: ");
  scanf("%d", &stevilo);

  // Preverimo, ali je število praštevilo.
  int i;
  for (i = 2; i <= stevilo / 2; i++) {
    if (stevilo % i == 0) {
      // Število ni praštevilo.
      printf("Število ni praštevilo.\n");
      return 0;
    }
  }

  // Število je praštevilo.
  printf("Število je praštevilo.\n");

  return 0;
}