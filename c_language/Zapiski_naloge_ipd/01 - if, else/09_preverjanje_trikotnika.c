// Uvoz potrebne knjižnice
#include <stdio.h>

// Glavna funkcija programa
int main() {
    // Deklaracija spremenljivk za dolžine stranic
    int a, b, c;

    // Zahteva za vnos dolžin stranic
    printf("Vnesite dolžino prve stranice: ");
    scanf("%d", &a);
    printf("Vnesite dolžino druge stranice: ");
    scanf("%d", &b);
    printf("Vnesite dolžino tretje stranice: ");
    scanf("%d", &c);

    // Preverjanje, ali stranice tvorijo trikotnik
    if (a + b > c && a + c > b && b + c > a) {
        // Izpis, če stranice tvorijo trikotnik
        printf("Stranice lahko tvorijo trikotnik.\n");
    } else {
        // Izpis, če stranice ne tvorijo trikotnika
        printf("Stranice ne morejo tvoriti trikotnika.\n");
    }

    // Konec programa
    return 0;
}
