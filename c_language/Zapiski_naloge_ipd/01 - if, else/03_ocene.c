#include <stdio.h>

int main() {
    int ocena = 4;

    if (ocena == 5) {
        printf("Ocena je odlična.\n");
    } 
    else if (ocena == 4) {
        printf("Ocena je prav dobra.\n");
    } 
    else if (ocena == 3) {
        printf("Ocena je dobra.\n");
    } 
    else if (ocena == 2) {
        printf("Ocena je zadostna.\n");
    }
    else {
        printf("Ocena je nezadostna.\n");
    }

    return 0;
}
