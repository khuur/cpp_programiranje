# Uvod v zanke v jeziku C

## Zanka `for`

Zanka `for` v C se uporablja, ko želimo izvajati nekaj ukazov za določeno število iteracij. Splošna oblika `for` zanke je:

```c
for ( inicializacija; pogoj; inkrement ) {
   // koda, ki se bo izvajala
}
```

- **Inicializacija**: Ta del se izvede enkrat na začetku zanke. Praviloma se tu inicializira števec zanke.
- **Pogoj**: Ta izraz se preverja pred vsako iteracijo zanke. Če je pogoj resničen, se izvajanje nadaljuje, sicer se zanka zaključi.
- **Inkrement**: Ta del se izvede po vsaki iteraciji zanke. Praviloma se tu poveča ali zmanjša števec zanke.

### Primer:

```c
#include <stdio.h>

int main() {
    // Izvajanje zanke petkrat
    for (int i = 1; i <= 5; i++) {
        // Izpis trenutnega števila
        printf("%d\n", i);
    }
    return 0;
}
```

## Zanka `while`

Zanka `while` se uporablja, ko želimo izvajati nekaj ukazov, dokler je določen pogoj resničen. Splošna oblika `while` zanke je:

```c
while (pogoj) {
   // koda, ki se bo izvajala
}
```

- **Pogoj**: Ta izraz se preverja pred vsako iteracijo zanke. Če je pogoj resničen, se izvajanje nadaljuje, sicer se zanka zaključi.

### Primer:

```c
#include <stdio.h>

int main() {
    // Inicializacija števca
    int i = 1;

    // Izvajanje zanke, dokler je i manjše ali enako 5
    while (i <= 5) {
        // Izpis trenutnega števila
        printf("%d\n", i);

        // Povečanje števca
        i++;
    }
    return 0;
}
```
