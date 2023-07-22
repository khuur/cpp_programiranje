#include <stdio.h>

int main() {
  int stevilo, i, f1 = 0, f2 = 1, fn;

  // Vprašamo uporabnika po številu.
  printf("Vnesite število: ");
  scanf("%d", &stevilo);

  // Za vsako vrednost indeksa od 0 do števila.
  for (i = 0; i <= stevilo; i++) {

    // Izračunamo naslednje fibonaccijevo število.
    fn = f1 + f2;

    // Shranimo naslednje fibonaccijevo število v f1.
    f1 = f2;

    // Shranimo trenutno fibonaccijevo število v f2.
    f2 = fn;

    // Izpisemo fibonaccijevo število.
    printf("%d ", fn);
  }

  printf("\n");

  return 0;
}
