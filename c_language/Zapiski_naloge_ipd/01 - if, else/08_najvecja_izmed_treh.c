// Uvoz potrebne knjižnice
#include <stdio.h>

// Glavna funkcija programa
int main() {
    // Deklaracija spremenljivk za števila
    int num1, num2, num3;

    // Zahteva za vnos števil
    printf("Vnesite prvo število: ");
    scanf("%d", &num1);
    printf("Vnesite drugo število: ");
    scanf("%d", &num2);
    printf("Vnesite tretje število: ");
    scanf("%d", &num3);

    // Preverjanje, katero število je največje
    if (num1 > num2 && num1 > num3) {
        // Izpis, če je prvo število največje
        printf("Največje število je %d.\n", num1);
    } else if (num2 > num1 && num2 > num3) {
        // Izpis, če je drugo število največje
        printf("Največje število je %d.\n", num2);
    } else {
        // Izpis, če je tretje število največje
        printf("Največje število je %d.\n", num3);
    }

    // Konec programa
    return 0;
}
