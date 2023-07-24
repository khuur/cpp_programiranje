# Funkcije v jeziku C

Funkcije v jeziku C so bloki kode, ki izvajajo določeno nalogo. Uporabljamo jih za organiziranje kode, ponovno uporabo dela kode ter za izboljšanje preglednosti in razumljivosti programa.

## Deklaracija in definicija funkcij

Funkcije deklariramo, preden jih uporabimo v programu. Deklaracija funkcije vsebuje tip podatkov, ki ga funkcija vrača, ime funkcije in seznam parametrov, ki jih funkcija sprejme. Definicija funkcije pa vključuje telo funkcije, kjer je določeno, kaj funkcija dejansko izvaja.

```c
// Deklaracija funkcije brez parametrov in vrnjenega tipa
void pozdrav();

// Definicija funkcije
void pozdrav() {
    printf("Pozdravljeni!\n");
}

// Deklaracija funkcije z dvema parametroma in vrnjenim tipom int
int vsota(int a, int b);

// Definicija funkcije
int vsota(int a, int b) {
    return a + b;
}
```

## Klicanje funkcij

Funkcije kličemo, kadar želimo izvajati določen blok kode, ki ga izvaja funkcija. Klic funkcije vključuje ime funkcije in morebitne argumente, ki jih funkcija sprejme.

```c
// Klic funkcije 'pozdrav'
pozdrav();

// Klic funkcije 'vsota' in shranjevanje rezultata v spremenljivko
int rezultat = vsota(3, 5);
```

## Rekurzivne funkcije

Rekurzivne funkcije so funkcije, ki same sebe kličejo. To lahko uporabimo za reševanje problemov, ki imajo ponavljajoč se vzorec.

```c
// Rekurzivna funkcija za izračun faktorjela
int faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}
```

## Funkcije z nedefiniranim številom argumentov

V jeziku C lahko ustvarimo funkcije, ki sprejmejo poljubno število argumentov. To naredimo s pomočjo standardne knjižnice `stdarg.h`.

```c
#include <stdarg.h>

// Funkcija z nedefiniranim številom argumentov
double povprecje(int stevilo_arg, ...) {
    va_list args;
    va_start(args, stevilo_arg);
    
    double vsota = 0;
    for (int i = 0; i < stevilo_arg; i++) {
        vsota += va_arg(args, int);
    }
    
    va_end(args);
    
    return vsota / stevilo_arg;
}
```

Uporabimo lahko ta format za opisovanje funkcij v jeziku C. Če imate kakršna koli vprašanja ali potrebujete dodatno pomoč, se obrnite na mene!


# Funkcije v jeziku C

Funkcije v jeziku C so bloki kode, ki izvajajo določeno nalogo. Ko kličemo funkcijo, ji lahko podamo vhodne vrednosti, ki jih imenujemo parametri. Funkcije lahko tudi vrnejo izhodno vrednost, ki jo imenujemo vrnjena vrednost.

## Parametri Funkcij

Parametri funkcij so spremenljivke, ki jih funkcija sprejme kot vhodne podatke. Pri deklaraciji funkcije določimo število in vrsto parametrov, ki jih funkcija pričakuje. Ob klicu funkcije ji podamo ustrezne argumente, ki se nato uporabijo v telesu funkcije. Parametri omogočajo, da funkcija deluje z različnimi vrednostmi, ki ji jih podamo.

```c
// Deklaracija funkcije s parametri
int vsota(int a, int b);

// Definicija funkcije
int vsota(int a, int b) {
    return a + b;
}

// Klic funkcije z argumentoma 3 in 5
int rezultat = vsota(3, 5);
```

## Vračanje Vrednosti Funkcije

Funkcije lahko tudi vrnejo vrednost, ki se imenuje vrnjena vrednost. Vrnjena vrednost je tipa, ki smo ga določili v deklaraciji funkcije. Pri definiciji funkcije uporabimo stavek `return`, ki določa, katero vrednost bo funkcija vrnila. Vrednost lahko vrnemo tudi znotraj pogojev ali zanke.

```c
// Deklaracija funkcije z vrnjeno vrednostjo
int kvadrat(int stevilo);

// Definicija funkcije
int kvadrat(int stevilo) {
    return stevilo * stevilo;
}

// Klic funkcije z argumentom 4 in shranjevanje vrnjene vrednosti v spremenljivko
int rezultat = kvadrat(4);
```

## Podpisi Funkcij

Podpis funkcije vključuje ime funkcije, tip vrednosti, ki ga vrača (če funkcija vrača vrednost), in seznam parametrov, ki jih funkcija sprejme. Deklaracija funkcije je vrsta podpisa, ki se uporablja za predstavitev funkcije, preden je definirana. Definicija funkcije vsebuje dejansko telo funkcije, kjer so navedene operacije, ki jih funkcija izvaja.

Podpis funkcije je pomemben, saj določa, kako funkcijo kličemo in kako jo uporabljamo v programu. Pravilno določeni podpisi funkcij zagotavljajo pravilno delovanje programa.

## Primeri podpisov funkcij:

```c
// Podpis funkcije z dvema parametroma in vrnjenim tipom int
int vsota(int a, int b);

// Podpis funkcije brez parametrov in vrnjenim tipom void
void pozdrav();

// Podpis funkcije z enim parametrom tipa float in vrnjenim tipom float
float kvadrat(float stevilo);
```

Uporaba pravilnih podpisov funkcij je ključnega pomena za pravilno delovanje programa in omogoča preprosto razumevanje in vzdrževanje kode.
