// Uvoz potrebne knjižnice
#include <stdio.h>

// Glavna funkcija programa
int main() {
    // Deklaracija spremenljivke za število
    int num;

    // Zahteva za vnos števila
    printf("Vnesite število: ");
    scanf("%d", &num);

    // Preverjanje, ali je število pozitivno, negativno ali nič
    if (num > 0) {
        // Izpis, če je število pozitivno
        printf("Število je pozitivno.\n");
    } else if (num < 0) {
        // Izpis, če je število negativno
        printf("Število je negativno.\n");
    } else {
        // Izpis, če je število nič
        printf("Število je nič.\n");
    }

    // Konec programa
    return 0;
}
