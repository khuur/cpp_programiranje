// Uvoz potrebne knjižnice
#include <stdio.h>

// Glavna funkcija programa
int main() {
    // Deklaracija spremenljivke za leto
    int year;

    // Zahteva za vnos leta
    printf("Vnesite leto: ");
    scanf("%d", &year);

    // Preverjanje, ali je leto prestopno
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        // Izpis, če je leto prestopno
        printf("%d je prestopno leto.\n", year);
    } else {
        // Izpis, če leto ni prestopno
        printf("%d ni prestopno leto.\n", year);
    }

    // Konec programa
    return 0;
}
