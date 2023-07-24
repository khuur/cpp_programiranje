# Tabele v C jeziku

V jeziku C lahko ustvarimo različne vrste tabel, ki omogočajo shranjevanje več elementov istega tipa pod isto ime. Tabele so uporabne za shranjevanje podatkov, kot so števila, znaki ali nize znakov.

## Deklaracija tabel

Tabelo deklariramo s podajanjem tipa elementov, ki jih bo tabela vsebovala, in imena tabele. Velikost tabele (število elementov) je lahko določena ob deklaraciji ali pa jo določimo kasneje med izvajanjem programa.

### Primer deklaracije in inicializacije tabele:

\```c
// Deklaracija in inicializacija tabele s 5 celimi števili
int tabela[5] = {1, 2, 3, 4, 5};
\```

## Dostopanje do elementov tabele

Do elementov tabele dostopamo s pomočjo indeksiranja. Indeksiranje se začne z vrednostjo 0 za prvi element, 1 za drugi element in tako naprej. Indeksiranje omogoča, da dostopamo do posameznih elementov tabele ali pa do njihovih vrednosti obhodno s pomočjo zanke.

### Primer dostopanja do elementov tabele:

\```c
int tabela[5] = {1, 2, 3, 4, 5};

// Dostop do posameznih elementov tabele
int prvi_element = tabela[0]; // Vrednost prvega elementa (1)
int drugi_element = tabela[1]; // Vrednost drugega elementa (2)

// Obhod tabele s pomočjo zanke
for (int i = 0; i < 5; i++) {
    printf("Element %d: %d\\n", i + 1, tabela[i]);
}
\```

## Večdimenzionalne tabele

Poleg enodimenzionalnih tabel lahko v jeziku C ustvarimo tudi večdimenzionalne tabele, ki so v resnici tabeli tabel. To nam omogoča shranjevanje podatkov v večdimenzionalni matriki.

### Primer večdimenzionalne tabele:

\```c
// Deklaracija in inicializacija 2D tabele s 3 vrsticami in 4 stolpci
int tabela_2d[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
};

// Dostop do elementov večdimenzionalne tabele
int vrednost = tabela_2d[1][2]; // Vrednost elementa v drugi vrstici in tretjem stolpcu (7)
\```

## Dinamične tabele

V C-ju lahko tudi ustvarjamo dinamične tabele, kjer določimo velikost tabele med izvajanjem programa s pomočjo funkcij, kot sta `malloc` in `calloc`. Dinamične tabele so uporabne, ko želimo določiti velikost tabele glede na uporabnikov vnos ali obseg podatkov.

### Primer dinamične tabele:

\```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Vnesite velikost tabele: ");
    scanf("%d", &n);

    // Dinamična tabela
    int *dinamicna_tabela = (int *)malloc(n * sizeof(int));

    // Preverimo, ali je bila tabela uspešno ustvarjena
    if (dinamicna_tabela == NULL) {
        printf("Napaka pri ustvarjanju dinamične tabele.\\n");
        return 1;
    }

    // Uporaba dinamične tabele

    // Ko je tabela več ne potrebujemo, jo je potrebno sprostiti iz pomnilnika
    free(dinamicna_tabela);

    return 0;
}
\```

## Uporaba tabel v funkcijah

Tabele lahko uporabimo tudi v funkcijah, tako da jih podamo kot argumente funkcijam ali pa funkcije vračajo tabele. To omogoča preprosto delo z velikimi količinami podatkov v programu.

### Primer uporabe tabele v funkcijah:

\```c
#include <stdio.h>

// Funkcija za izpis tabele
void izpisi_tabelo(int tabela[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", tabela[i]);
    }
    printf("\\n");
}

int main() {
    int tabela[5] = {1, 2, 3, 4, 5};

    // Izpis tabele
    izpisi_tabelo(tabela, 5);

    return 0;
}
\```
