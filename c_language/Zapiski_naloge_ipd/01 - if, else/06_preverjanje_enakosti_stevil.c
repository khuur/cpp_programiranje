// Uvoz potrebne knjižnice
#include <stdio.h>

// Glavna funkcija programa
int main() {
    // Deklaracija spremenljivk za števila
    int num1, num2;

    // Zahteva za vnos števil
    printf("Vnesite prvo število: ");
    scanf("%d", &num1);
    printf("Vnesite drugo število: ");
    scanf("%d", &num2);

    // Preverjanje, ali sta števili enaki
    if (num1 == num2) {
        // Izpis, če sta števili enaki
        printf("Števili sta enaki.\n");
    } else {
        // Izpis, če števili nista enaki
        printf("Števili nista enaki.\n");
    }

    // Konec programa
    return 0;
}
