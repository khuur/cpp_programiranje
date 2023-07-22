# Uvod v pogojne stavke v jeziku C

## Stavek `if`

Stavek `if` v C se uporablja, ko želimo izvesti nekaj ukazov na podlagi določenega pogoja. Splošna oblika `if` stavka je:

```c
if (pogoj) {
   // koda, ki se bo izvajala, če je pogoj resničen
}
```

### Primer:

```c
#include <stdio.h>

int main() {
    int x = 10;

    // Preverjanje, ali je x večje od 5
    if (x > 5) {
        // Izpis sporočila, če je pogoj resničen
        printf("x je večje od 5\n");
    }

    return 0;
}
```

## Stavek `if else`

Stavek `if else` v C se uporablja, ko želimo izvesti nekaj ukazov, če je pogoj resničen, in druge ukaze, če pogoj ni resničen. Splošna oblika `if else` stavka je:

```c
if (pogoj) {
   // koda, ki se bo izvajala, če je pogoj resničen
} else {
   // koda, ki se bo izvajala, če pogoj ni resničen
}
```

### Primer:

```c
#include <stdio.h>

int main() {
    int x = 10;

    // Preverjanje, ali je x večje od 5
    if (x > 5) {
        // Izpis sporočila, če je pogoj resničen
        printf("x je večje od 5\n");
    } else {
        // Izpis sporočila, če pogoj ni resničen
        printf("x ni večje od 5\n");
    }

    return 0;
}
```
