// Ta program prebere celo število od uporabnika in preveri, ali je sod ali lih

#include <stdio.h>

int main() {
    int num;  // Število, ki ga bo vnesel uporabnik

    // Preberemo število od uporabnika
    printf("Vnesite celo število: ");
    scanf("%d", &num);

    // Preverimo in izpišemo, ali je število sod ali lih
    if (num % 2 == 0) {
        printf("%d je sodo število.\n", num);
    } else {
        printf("%d je liho število.\n", num);
    }

    return 0;  // Program uspešno končan
}
