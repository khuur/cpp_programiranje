#include <stdio.h>

int main() {
  int stevilo;
  printf("Vnesi stevilo:");
  scanf("%d", &stevilo);

  if (stevilo > 10) {
    printf("Število je večje od 10.\n");
  } else if (stevilo > 5) {
    printf("Število je med 5 in 10.\n");
  } else {
    printf("Število je manjše ali enako 5.\n");
  }

  return 0;
}