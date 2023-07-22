# Jezik C - Osnove

## Spremenljivke in Tipi Podatkov

V C-ju imamo različne tipe podatkov, kot so:

- `int`: Za cela števila.
- `float`: Za decimalna ali plavajoča števila.
- `char`: Za znake.
- `double`: Za decimalna števila z dvojno natančnostjo.
- `bool`: Za logične vrednosti (prav ali narobe).

Primer deklaracije spremenljivk:

```c
#include <stdio.h>

int main() {
    int celoStevilo = 5;
    float decimalnoStevilo = 3.14;
    char znak = 'A';
    
    printf("Celo stevilo: %d\n", celoStevilo);
    printf("Decimalno stevilo: %f\n", decimalnoStevilo);
    printf("Znak: %c\n", znak);

    return 0;
}
```

## Tipi spremenljivk v jeziku C

Spremenljivke v jeziku C so kategorizirane v več različnih tipov, vključno z:

### Celostevilski tipi:

- `int`: Se uporablja za shranjevanje celih števil.

```c
#include<stdio.h>
int main() {
    int a = 10;
    printf("Vrednost a: %d\\n", a);
    return 0;
}
```

- `short`: Manjši celoštevilski tip v primerjavi z `int`.

```c
#include<stdio.h>
int main() {
    short a = 5;
    printf("Vrednost a: %d\\n", a);
    return 0;
}
```

- `long`: Večji celoštevilski tip v primerjavi z `int`.

```c
#include<stdio.h>
int main() {
    long a = 1000000L;
    printf("Vrednost a: %ld\\n", a);
    return 0;
}
```

### Tipi s plavajočo vejico:

## Razlika med Float in Double

V jeziku C sta `float` in `double` oba tipa podatkov za shranjevanje števil s plavajočo vejico. Kljub temu sta oba različna glede na svojo velikost in natančnost:

### Float
`float`: Je tip s plavajočo vejico, ki zavzame 4 bajte pomnilnika. Natančnost števil s plavajočo vejico je omejena, kar približno ustreza 7 decimalnim mestom.

Primer uporabe `float`:

```c
#include <stdio.h>

int main() {
    float num = 1.123456789;
    printf("Vrednost num je: %.7f", num);
    return 0;
}
```

Iz tega primera je razvidno, da je `num` deklariran kot `float` in ga poskušamo natisniti z devetimi decimalnimi mesti. Rezultat pa ne bo prikazal vseh devetih decimalnih mest natančno, ker `float` ne more zagotoviti take natančnosti.

### Double
`double`: Je tip s plavajočo vejico, ki zavzame 8 bajtov pomnilnika. Omogoča večjo natančnost in lahko zadrži približno 15-16 decimalnih mest.

Primer uporabe `double`:

```c
#include <stdio.h>

int main() {
    double num = 1.123456789123456;
    printf("Vrednost num je: %.15lf", num);
    return 0;
}
```

V tem primeru `num` deklariramo kot `double` in poskušamo natisniti s petnajstimi decimalnimi mesti. `double` lahko zagotovi večjo natančnost in zato lahko prikaže vseh petnajst decimalnih mest natančno.

Glede na potrebe vašega programa lahko izberete med `float` in `double`. Če potrebujete večjo natančnost, uporabite `double`. Če želite prihraniti pomnilnik in natančnost ni kritična, uporabite `float`.


### Logični tipi:

- `bool`: Se uporablja za shranjevanje logičnih vrednosti, kot so `true` (resnično) ali `false` (neresnično).

```c
#include<stdio.h>
#include<stdbool.h>
int main() {
    bool a = true;
    printf("Vrednost a: %d\\n", a);
    return 0;
}
```

### Znakovni tipi:

- `char`: Se uporablja za shranjevanje enega samega znaka.

```c
#include<stdio.h>
int main() {
    char a = 'A';
    printf("Vrednost a: %c\\n", a);
    return 0;
}
```



## Več o Operatorjih

Obstaja več različnih vrst operatorjev v jeziku C, ki jih lahko uporabimo, vključno z:

### Relacijski Operatorji:

- `==`: Preveri, ali sta dva izraza enaka.

```c
#include<stdio.h>
int main() {
    int a = 5, b = 5;
    if (a == b) {
        printf("a in b sta enaka\\n");
    }
    return 0;
}
```

- `!=`: Preveri, ali sta dva izraza neenaka.

```c
#include<stdio.h>
int main() {
    int a = 5, b = 6;
    if (a != b) {
        printf("a in b nista enaka\\n");
    }
    return 0;
}
```

- `<`: Preveri, ali je levi izraz manjši od desnega.

```c
#include<stdio.h>
int main() {
    int a = 4, b = 5;
    if (a < b) {
        printf("a je manjše od b\\n");
    }
    return 0;
}
```

- `>`: Preveri, ali je levi izraz večji od desnega.

```c
#include<stdio.h>
int main() {
    int a = 6, b = 5;
    if (a > b) {
        printf("a je večje od b\\n");
    }
    return 0;
}
```

- `<=`: Preveri, ali je levi izraz manjši ali enak desnemu.

```c
#include<stdio.h>
int main() {
    int a = 5, b = 5;
    if (a <= b) {
        printf("a je manjše ali enako b\\n");
    }
    return 0;
}
```

- `>=`: Preveri, ali je levi izraz večji ali enak desnemu.

```c
#include<stdio.h>
int main() {
    int a = 6, b = 5;
    if (a >= b) {
        printf("a je večje ali enako b\\n");
    }
    return 0;
}
```

### Logični Operatorji:

- `&&`: Logični IN operator. Če sta oba izraza resnična, potem je rezultat tudi resničen.

```c
#include<stdio.h>
int main() {
    int a = 5, b = 6;
    if (a < 10 && b < 10) {
        printf("Oba a in b sta manjša od 10\\n");
    }
    return 0;
}
```

- `||`: Logični ALI operator. Če je katerikoli izraz resničen, potem je rezultat tudi resničen.

```c
#include<stdio.h>
int main() {
    int a = 15, b = 6;
    if (a < 10 || b < 10) {
        printf("Ali a ali b je manjše od 10\\n");
    }
    return 0;
}
```

- `!`: Logični NE operator. Uporablja se za obrnitev logičnega stanja svojega operand.

```c
#include<stdio.h>
int main() {
    int a = 5;
    if (!a == 10) {
        printf("a ni enako 10\\n");
    }
    return 0;
}
```

### Operatorji Dodelitve:

- `=`: Dodeli vrednost iz desne strani izrazov na levo.

```c
#include<stdio.h>
int main() {
    int a = 5;
    printf("Vrednost a: %d\\n", a);
    return 0;
}
```

- `+=`: Sešteje desno in levo stran izrazov ter rezultat dodeli levemu operandu.

```c
#include<stdio.h>
int main() {
    int a = 5;
    a += 5; // a = a + 5
    printf("Vrednost a: %d\\n", a);
    return 0;
}
```

- `-=`: Odšteje desno od leve strani izrazov ter rezultat dodeli levemu operandu.

```c
#include<stdio.h>
int main() {
    int a = 10;
    a -= 5; // a = a - 5
    printf("Vrednost a: %d\\n", a);
    return 0;
}
```

- `*=`: Pomnoži desno in levo stran izrazov ter rezultat dodeli levemu operandu.

```c
#include<stdio.h>
int main() {
    int a = 5;
    a *= 5; // a = a * 5
    printf("Vrednost a: %d\\n", a);
    return 0;
}
```

- `/=`: Razdeli levo stran izrazov z desno stranjo ter rezultat dodeli levemu operandu.

```c
#include<stdio.h>
int main() {
    int a = 10;
    a /= 5; // a = a / 5
    printf("Vrednost a: %d\\n", a);
    return 0;
}
```

- `%=`: Izračuna ostanek deljenja leve strani izrazov z desno stranjo ter rezultat dodeli levemu operandu.

```c
#include<stdio.h>
int main() {
    int a = 10;
    a %= 3; // a = a % 3
    printf("Vrednost a: %d\\n", a);
    return 0;
}
```

### Bitni Operatorji:

- `&`: Bitni IN operator.

```c
#include<stdio.h>
int main() {
    int a = 12, b = 25;
    printf("Vrednost a&b: %d\\n", a&b);
    return 0;
}
```

- `|`: Bitni ALI operator.

```c
#include<stdio.h>
int main() {
    int a = 12, b = 25;
    printf("Vrednost a|b: %d\\n", a|b);
    return 0;
}
```

- `^`: Bitni XOR operator.

```c
#include<stdio.h>
int main() {
    int a = 12, b = 25;
    printf("Vrednost a^b: %d\\n", a^b);
    return 0;
}
```

- `~`: Bitni komplement (ali NOT).

```c
#include<stdio.h>
int main() {
    int a = 12;
    printf("Vrednost ~a: %d\\n", ~a);
    return 0;
}
```

- `<<`: Levo bitno premikanje.

```c
#include<stdio.h>
int main() {
    int a = 12;
    printf("Vrednost a<<1: %d\\n", a<<1);
    return 0;
}
```

- `>>`: Desno bitno premikanje.

```c
#include<stdio.h>
int main() {
    int a = 12;
    printf("Vrednost a>>1: %d\\n", a>>1);
    return 0;
}
```
