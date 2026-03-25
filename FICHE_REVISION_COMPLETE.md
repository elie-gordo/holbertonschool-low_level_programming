# Fiche De Cours Complete - Holberton Low Level Programming (C)

## 0) Objectif de cette fiche

Cette fiche te permet de reviser **tout le repo** de facon methodique:

- les projets du repo (version evolutive)
- tous les exercices
- toutes les commandes utilisees
- chaque variable/fonction et son utilite
- la logique de chaque code
- les points de vigilance (sortie exacte, style, flags, contraintes)

Le but est que tu puisses expliquer chaque fichier a l oral, ecrire le code de memoire, et justifier chaque ligne.

---

## 1) Cartographie du repo

Structure du repo:

- `hello_world/`
- `variables_if_else_while/`
- `functions_nested_loops/`
- `intro_debugging/`
- `more_functions_nested_loops/`
- `simple-calculator/`
- `benchmarking/`
- `pointers_arrays_strings/`
- `malloc_free/`
- `more_malloc_free/`
- `structures_typedef/`
- `function_pointers/`
- `variadic_functions/`
- `argc_argv/`
- `recursion/`
- `ai_memory_visualizer_valgrind_tracer/`
- `README.md` (racine)
- `FICHE_REVISION_COMPLETE.md`

Note:

- Le comptage exact de fichiers evolue au fil des ajouts.
- La cartographie ci-dessus est la reference de revision par dossier.

---

## 2) Environnement et regles communes

### 2.1 Plateforme cible

- Ubuntu 20.04 (consigne projet)

### 2.2 Compilation stricte (regle generale)

Commande type:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 fichier.c -o programme
```

Sens des flags:

- `-Wall`: active les warnings courants
- `-Wextra`: active des warnings supplementaires
- `-Werror`: transforme tous les warnings en erreurs
- `-pedantic`: impose une stricte conformite au standard
- `-std=gnu89`: base C89 avec extensions GNU

Exception deja rencontree:

- projet `benchmarking`: ajout de `-Wno-long-long` selon la consigne du sujet

### 2.3 Contraintes recurrentes

- sortie exacte caractere par caractere
- pas de `system`
- style Betty
- fichier termine par `\n`
- respecter exactement les fonctions autorisees/interdites

---

## 3) Methode de travail A-Z (a appliquer a chaque exo)

1. Lire l enonce et isoler les contraintes exactes.
2. Lister les fonctions autorisees.
3. Ecrire la solution minimale.
4. Compiler avec les flags imposes (sauf exception enonce).
5. Executer et comparer la sortie attendue.
6. Passer Betty et Betty-doc.
7. Corriger.
8. Committer.

Commandes utiles:

```bash
betty fichier.c
betty-doc fichier.c
git add .
git commit -m "message"
git push
```

---

## 4) Fondamentaux C utilises dans ce repo

### 4.1 Structure minimale d un programme C

```c
#include <stdio.h>

int main(void)
{
    /* instructions */
    return (0);
}
```

- `#include`: importe declarations necessaires (`printf`, `puts`, etc.)
- `main`: point d entree
- `return (0)`: succes

### 4.2 Types vus

- `char`: caractere
- `int`: entier
- `long int`
- `long long int`
- `float`
- `void`: absence de valeur retour

### 4.3 Controle de flux vus

- `if`, `else if`, `else`
- `while`
- `for`

### 4.4 Operateurs vus

- arithmetiques: `+`, `-`, `*`, `%`
- comparaison: `>`, `<`, `>=`, `<=`, `==`, `!=`
- logiques: `&&`, `||`
- affectation: `=`, `+=`

### 4.5 Fonctions standard vues

- `printf`
- `puts`
- `putchar`
- `rand`, `srand`, `time`
- `sizeof`
- `malloc`
- `free`
- `exit`

### 4.6 ASCII (essentiel)

- `'0'` a `'9'` sont des codes consecutifs
- conversion entier -> char chiffre: `n + '0'`
- exemples:
  - `0 + '0'` -> `'0'`
  - `7 + '0'` -> `'7'`

### 4.7 Mots-cles/syntaxe vus dans le repo

- preprocesseur: `#include`, `#ifndef`, `#define`, `#endif`
- types: `int`, `char`, `void`
- controles: `if`, `else if`, `else`, `while`, `for`
- retours: `return`
- declarations de fonctions: `int f(int x)`, `void g(void)`
- pointeurs: `*ptr`, `int **grid`, `char *str`
- commentaires Betty:
  - bloc `/** ... */`
  - tags `@param`, `Return:`

---

## 5) Projet 1 - `hello_world`

But: comprendre la chaine complete preprocesseur -> compilation -> assemblage -> linkage + premieres sorties.

### Exo 0 - `hello_world/0-preprocessor`

Code:

```bash
#!/bin/bash
cpp "$CFILE" > c
```

Explication:

- `#!/bin/bash`: script interprete par bash
- `"$CFILE"`: variable d environnement contenant le nom du fichier C a traiter
- `cpp`: lance uniquement le preprocesseur C
- `> c`: redirige la sortie vers un fichier nomme `c`

Commandes:

```bash
chmod +x hello_world/0-preprocessor
export CFILE=main.c
./hello_world/0-preprocessor
```

Resultat: creation du fichier `c` (code preprocesse).

### Exo 1 - `hello_world/1-compiler`

Code:

```bash
#!/bin/bash
gcc -c "$CFILE"
```

Explication:

- `-c`: compile sans linker
- produit un fichier objet `.o` (ex: `main.o`)

### Exo 2 - `hello_world/2-assembler`

Code:

```bash
#!/bin/bash
gcc -S "$CFILE"
```

Explication:

- `-S`: compile vers assembleur, sans produire d executable
- resultat: fichier `.s`

### Exo 3 - `hello_world/3-name`

Code:

```bash
#!/bin/bash
gcc "$CFILE" -o cisfun
```

Explication:

- compile + link
- `-o cisfun`: nom explicite de l executable

### Exo 4 - `hello_world/4-puts.c`

Variables/fonctions:

- fonction: `main(void)`
- fonction utilisee: `puts`
- pas de variable locale

Logique:

1. inclure `stdio.h` pour `puts`
2. `puts("\"Programming is like building a multilingual puzzle");`
3. `puts` ajoute automatiquement `\n`
4. retourner 0

Compilation:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 hello_world/4-puts.c -o 4-puts
./4-puts
```

Sortie:

```text
"Programming is like building a multilingual puzzle
```

### Exo 5 - `hello_world/5-printf.c`

Variables/fonctions:

- fonction: `main(void)`
- fonction utilisee: `printf`
- pas de variable locale

Logique:

1. inclure `stdio.h`
2. afficher exactement:
   `with proper grammar, but the outcome is a piece of art,`
3. `\n` gere manuellement dans la chaine
4. `return (0);`

Compilation:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 hello_world/5-printf.c -o 5-printf
./5-printf
```

Sortie:

```text
with proper grammar, but the outcome is a piece of art,
```

### Exo 6 - `hello_world/6-size.c`

Variables/fonctions:

- fonction: `main(void)`
- fonctions utilisees: `printf`, `sizeof`
- pas de variable locale

Logique:

1. afficher la taille de plusieurs types
2. `sizeof(type)` retourne une taille en bytes (`size_t`)
3. le code affiche:
   - `char`
   - `int`
   - `long int`
   - `long long int`
   - `float`

Commande de test pratique:

```bash
gcc hello_world/6-size.c -o 6-size
./6-size
```

Sortie observee sur machine 64 bits:

```text
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
```

Point important:

- avec `-pedantic -std=gnu89 -Werror`, l usage de `long long` peut lever un warning/erreur selon configuration.
- donc cet exo est souvent compile sans flags stricts dans la pratique du cursus.

Commandes exo par exo (hello_world):

```bash
# scripts
chmod +x hello_world/0-preprocessor hello_world/1-compiler hello_world/2-assembler hello_world/3-name
export CFILE=main.c
./hello_world/0-preprocessor
./hello_world/1-compiler
./hello_world/2-assembler
./hello_world/3-name

# programmes C
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 hello_world/4-puts.c -o 4-puts
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 hello_world/5-printf.c -o 5-printf
gcc hello_world/6-size.c -o 6-size
./4-puts
./5-printf
./6-size
```

---

## 6) Projet 2 - `variables_if_else_while`

But: maitriser conditions, boucles, ASCII, affichage controle.

### Exo 0 - `0-positive_or_negative.c`

Variables/fonctions:

- variables: `int n`
- fonctions: `srand`, `time`, `rand`, `printf`

Logique:

1. initialiser aleatoire: `srand(time(0));`
2. generer `n = rand() - RAND_MAX / 2;`
3. tester:
   - `n > 0` -> positive
   - `n == 0` -> zero
   - sinon negative

Commande:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 variables_if_else_while/0-positive_or_negative.c -o 0-positive_or_negative
./0-positive_or_negative
```

Note: sortie variable (aleatoire).

### Exo 1 - `1-last_digit.c`

Variables/fonctions:

- variables: `int n`, `int last_digit`
- fonctions: `srand`, `time`, `rand`, `printf`

Logique:

1. generer `n`
2. extraire dernier chiffre: `last_digit = n % 10;`
3. conditions:
   - `last_digit > 5`
   - `last_digit == 0`
   - sinon "less than 6 and not 0"

Point cle:

- en C, `%` garde le signe de l operande gauche.
- donc avec `n` negatif, `last_digit` peut etre negatif.

### Exo 2 - `2-print_alphabet.c`

Variables/fonctions:

- variable: `char c`
- fonction: `putchar`

Logique:

1. `c = 'a'`
2. boucle `while (c <= 'z')`
3. afficher `c`, puis `c++`
4. afficher `\n`

Sortie:

```text
abcdefghijklmnopqrstuvwxyz
```

### Exo 3 - `3-print_alphabets.c`

Variables/fonctions:

- variable: `char c`
- fonction: `putchar`

Logique:

1. premiere boucle de `'a'` a `'z'`
2. reinitialiser `c = 'A'`
3. deuxieme boucle de `'A'` a `'Z'`
4. newline finale

Sortie:

```text
abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ
```

### Exo 4 - `4-print_alphabt.c`

Variables/fonctions:

- variable: `char c`
- fonction: `putchar`

Logique:

1. parcourir `'a'` a `'z'`
2. condition filtre:
   `if (c != 'e' && c != 'q')`
3. afficher uniquement caracteres autorises

Sortie:

```text
abcdfghijklmnoprstuvwxyz
```

### Exo 5 - `5-print_numbers.c`

Variables/fonctions:

- variable: `int n`
- fonction: `printf`

Logique:

1. `n = 0`
2. tant que `n < 10`, afficher `%d`
3. incrementer `n`
4. newline finale

Sortie:

```text
0123456789
```

### Exo 6 - `6-print_numberz.c`

Variables/fonctions:

- variable: `int n`
- fonction: `putchar`

Logique:

1. boucle de 0 a 9
2. conversion `int -> char` via `n + '0'`
3. newline finale

Sortie:

```text
0123456789
```

### Exo 7 - `7-print_tebahpla.c`

Variables/fonctions:

- variable: `char c`
- fonction: `putchar`

Logique:

1. `c = 'z'`
2. boucle descendante `while (c >= 'a')`
3. afficher puis decrementer

Sortie:

```text
zyxwvutsrqponmlkjihgfedcba
```

### Exo 8 - `8-print_base16.c`

Variables/fonctions:

- variables: `int n`, `char c`
- fonction: `putchar`

Logique:

1. boucle `n` de 0 a 9 -> affiche chiffres
2. boucle `c` de `'a'` a `'f'` -> affiche lettres hex
3. newline

Sortie:

```text
0123456789abcdef
```

### Exo 9 - `9-print_comb.c`

Variables/fonctions:

- variable: `int n`
- fonction: `putchar`

Logique:

1. boucle `n` de 0 a 9
2. afficher chiffre via `n + '0'`
3. si `n < 9`, afficher `,` puis espace
4. evite virgule finale grace a la condition

Sortie:

```text
0, 1, 2, 3, 4, 5, 6, 7, 8, 9
```

Commandes globales de ce projet:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 variables_if_else_while/X-fichier.c -o programme
./programme
betty variables_if_else_while/*.c
betty-doc variables_if_else_while/*.c
```

Commandes exactes exo par exo:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 variables_if_else_while/0-positive_or_negative.c -o 0-positive_or_negative
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 variables_if_else_while/1-last_digit.c -o 1-last_digit
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 variables_if_else_while/2-print_alphabet.c -o 2-print_alphabet
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 variables_if_else_while/3-print_alphabets.c -o 3-print_alphabets
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 variables_if_else_while/4-print_alphabt.c -o 4-print_alphabt
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 variables_if_else_while/5-print_numbers.c -o 5-print_numbers
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 variables_if_else_while/6-print_numberz.c -o 6-print_numberz
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 variables_if_else_while/7-print_tebahpla.c -o 7-print_tebahpla
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 variables_if_else_while/8-print_base16.c -o 8-print_base16
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 variables_if_else_while/9-print_comb.c -o 9-print_comb
```

---

## 7) Projet 3 - `functions_nested_loops`

But: creer des fonctions propres, utiliser un header, et maitriser les boucles imbriquees.

### 7.1 Fichier cle: `functions_nested_loops/main.h`

Code utile:

```c
#ifndef MAIN_H
#define MAIN_H
/* prototypes */
#endif
```

Role:

- `#ifndef / #define / #endif`: guard pour eviter double inclusion
- centralise tous les prototypes
- garantit coherence declaration/definition

Prototypes:

- `int _putchar(char c);`
- `void print_alphabet(void);`
- `void print_alphabet_x10(void);`
- `int _islower(int c);`
- `int _isalpha(int c);`
- `int print_sign(int n);`
- `int _abs(int n);`
- `int print_last_digit(int n);`
- `void jack_bauer(void);`
- `void times_table(void);`
- `int add(int a, int b);`
- `void print_to_98(int n);`

Important:

- `_putchar` est declare, mais son implementation n est pas dans ce repo.
- en correction Holberton, un `_putchar.c` est generalement fourni par le checker ou les fichiers de test.

### Exo 0 - `0-putchar.c`

Variables/fonctions:

- fonction `main`
- appels repetes a `_putchar`
- aucune variable

Logique:

1. afficher successivement `_`, `p`, `u`, `t`, `c`, `h`, `a`, `r`
2. newline

Resultat:

```text
_putchar
```

### Exo 1 - `1-alphabet.c`

Variables/fonctions:

- fonction: `void print_alphabet(void)`
- variable locale: `char c`
- affichage: `_putchar`

Logique:

1. `c = 'a'`
2. boucle jusqu a `'z'`
3. afficher newline

### Exo 2 - `2-print_alphabet_x10.c`

Variables/fonctions:

- fonction: `void print_alphabet_x10(void)`
- variables: `int line`, `char c`

Logique:

1. boucle externe `line < 10`
2. a chaque ligne, reinitialiser `c = 'a'`
3. boucle interne de `'a'` a `'z'`
4. newline a la fin de chaque ligne

Concept central: **boucles imbriquees**.

### Exo 3 - `3-islower.c`

Variables/fonctions:

- fonction: `int _islower(int c)`
- parametre: `c`

Logique:

1. tester intervalle ASCII minuscule:
   `c >= 'a' && c <= 'z'`
2. retourner `1` si vrai, sinon `0`

### Exo 4 - `4-isalpha.c`

Variables/fonctions:

- fonction: `int _isalpha(int c)`
- parametre: `c`

Logique:

1. vrai si `A-Z` OU `a-z`
2. retourne `1` sinon `0`

### Exo 5 - `5-sign.c`

Variables/fonctions:

- fonction: `int print_sign(int n)`
- parametre: `n`

Logique:

1. si `n > 0`: affiche `+`, retourne `1`
2. si `n == 0`: affiche `0`, retourne `0`
3. sinon: affiche `-`, retourne `-1`

Particularite:

- fonction a double role: affichage + valeur retour.

### Exo 6 - `6-abs.c`

Variables/fonctions:

- fonction: `int _abs(int n)`
- parametre: `n`

Logique:

1. si negatif, retourner `n * -1`
2. sinon retourner `n`

### Exo 7 - `7-print_last_digit.c`

Variables/fonctions:

- fonction: `int print_last_digit(int n)`
- variables: `int last_digit`

Logique:

1. `last_digit = n % 10`
2. si negatif, le rendre positif
3. afficher `last_digit + '0'`
4. retourner `last_digit`

### Exo 8 - `8-24_hours.c` (`jack_bauer`)

Variables/fonctions:

- fonction: `void jack_bauer(void)`
- variables: `int hour`, `int minute`

Logique:

1. boucle `hour` de 0 a 23
2. boucle `minute` de 0 a 59
3. afficher format `HH:MM` via divisions/modulo:
   - dizaine heure: `hour / 10`
   - unite heure: `hour % 10`
   - dizaine minute: `minute / 10`
   - unite minute: `minute % 10`

Volume affiche: 24 * 60 = 1440 lignes.

### Exo 9 - `9-times_table.c`

Variables/fonctions:

- fonction: `void times_table(void)`
- variables: `int row`, `int col`, `int result`

Logique:

1. `row` de 0 a 9
2. `col` de 0 a 9
3. `result = row * col`
4. formatage strict:
   - premiere colonne (`col == 0`): juste `0`
   - colonnes suivantes: `", "`
   - si `result < 10`, ajouter un espace d alignement
   - sinon afficher dizaines + unites

Concept cle: formatage manuel caractere par caractere.

### Exo 10 - `10-add.c`

Variables/fonctions:

- fonction: `int add(int a, int b)`
- parametres: `a`, `b`

Logique:

- retourne `a + b`

### Exo 11 - `11-print_to_98.c`

Variables/fonctions:

- fonction: `void print_to_98(int n)`
- parametre: `n`
- sortie via `printf`

Logique:

1. si `n <= 98`, boucle montante jusqu a 98
2. sinon boucle descendante jusqu a 98
3. chaque valeur avant la fin: `"%d, "`
4. terminer par `98\n`

Commandes type pour ce projet (avec un `_putchar.c` et un `main` de test):

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c test_main.c functions_nested_loops/1-alphabet.c -I functions_nested_loops -o test
./test
```

Style:

```bash
betty functions_nested_loops/*.c functions_nested_loops/main.h
betty-doc functions_nested_loops/*.c
```

Commandes de test typiques exo par exo (si tu as `_putchar.c` + mains de test):

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 0-main.c functions_nested_loops/0-putchar.c -I functions_nested_loops -o 0-putchar-test
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 1-main.c functions_nested_loops/1-alphabet.c -I functions_nested_loops -o 1-alphabet-test
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 2-main.c functions_nested_loops/2-print_alphabet_x10.c -I functions_nested_loops -o 2-alphabet-x10-test
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 3-main.c functions_nested_loops/3-islower.c -I functions_nested_loops -o 3-islower-test
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 4-main.c functions_nested_loops/4-isalpha.c -I functions_nested_loops -o 4-isalpha-test
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 5-main.c functions_nested_loops/5-sign.c -I functions_nested_loops -o 5-sign-test
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 6-main.c functions_nested_loops/6-abs.c -I functions_nested_loops -o 6-abs-test
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 7-main.c functions_nested_loops/7-print_last_digit.c -I functions_nested_loops -o 7-last-digit-test
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 8-main.c functions_nested_loops/8-24_hours.c -I functions_nested_loops -o 8-24h-test
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 9-main.c functions_nested_loops/9-times_table.c -I functions_nested_loops -o 9-times-table-test
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 10-main.c functions_nested_loops/10-add.c -I functions_nested_loops -o 10-add-test
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 11-main.c functions_nested_loops/11-print_to_98.c -I functions_nested_loops -o 11-to-98-test
```

---

## 8) Projet 4 - `intro_debugging`

But: corriger des bugs logiques sans toucher au `main` impose.

### Methode debugging conseillee

1. Reproduire le bug.
2. Lire la fonction qui pose probleme.
3. Tracer les variables a chaque iteration.
4. Identifier la ligne fautive.
5. Corriger minimalement.
6. Recompiler et verifier sortie exacte.

### Exo 0 - `sum_to_n.c`

Fonctions/variables:

- `int sum_to_n(int n)`
- variables: `int i`, `int sum`

Logique corrigee:

1. initialiser `sum = 0`
2. boucle `for (i = 1; i <= n; i++)`
3. accumuler: `sum += i`
4. retourner `sum`

Test:

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 intro_debugging/sum_to_n.c -o sum_to_n_test
./sum_to_n_test
```

Sortie:

```text
55
```

### Exo 1 - `multiplication_table.c`

Fonctions/variables:

- `void print_table(int size)`
- variables: `int row, col`

Logique corrigee:

1. boucle `row` de 1 a `size`
2. boucle `col` de 1 a `size`
3. afficher `row * col`
4. newline par ligne

Sortie pour `size = 4`:

```text
1 2 3 4 
2 4 6 8 
3 6 9 12 
4 8 12 16 
```

### Exo 2 - `row_sums.c`

Fonctions/variables:

- `int row_sum(int row, int cols)`
- variables locales: `int c`, `int sum`
- `int total_sum(int rows, int cols)`
- variables locales: `int r`, `int total`

Logique corrigee:

1. `row_sum`: somme de `row * c` pour `c` de 1 a `cols`
2. `total_sum`: additionne chaque `row_sum(r, cols)` pour `r` de 1 a `rows`
3. retourne `total`

Sortie avec `total_sum(3, 3)`:

```text
36
```

Commandes globales projet:

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 intro_debugging/sum_to_n.c -o sum_to_n_test
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 intro_debugging/multiplication_table.c -o multiplication_table_test
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 intro_debugging/row_sums.c -o row_sums_test
./sum_to_n_test
./multiplication_table_test
./row_sums_test
```

---

## 8.1) Projet 5 - `more_functions_nested_loops`

But: continuer la pratique des fonctions et des boucles, avec des sorties strictes au caractere pres.

Fichiers principaux:

- `0-isupper.c`
- `1-isdigit.c`
- `2-mul.c`
- `3-print_numbers.c`
- `4-print_most_numbers.c`
- `5-more_numbers.c`
- `6-print_line.c`
- `7-print_diagonal.c`
- `8-print_square.c`
- `9-fizz_buzz.c`
- `10-print_triangle.c`
- `main.h`

Points a retenir:

- prototypes centralises dans `main.h`
- `printf` interdit sauf exercice `9-fizz_buzz.c` (autorise par son enonce)
- `_putchar` pour toutes les sorties de dessin/affichage
- contraintes de sortie tres strictes (espaces, virgules, newline)

Fonctions ajoutees:

- `_isupper`, `_isdigit`, `mul`
- `print_numbers`, `print_most_numbers`, `more_numbers`
- `print_line`, `print_diagonal`, `print_square`, `print_triangle`

Commande type:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c test_main.c file.c -I more_functions_nested_loops -o test
```

---

## 8.2) Projet 6 - `simple-calculator`

But: construire un programme C complet et interactif en terminal, avec boucle menu + operations.

Fichier principal:

- `calculator.c`

Fonctionnement final implemente:

- menu boucle tant que l utilisateur ne choisit pas `0`
- validation de plage: `0..4`
- `1`: addition
- `2`: soustraction
- `3`: multiplication
- `4`: division avec protection division par zero
- `0`: quitter avec `Bye!`

Choix de representation:

- operandes en `double`
- affichage des resultats avec `%g`

Commande type:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 simple-calculator/calculator.c -o calculator
```

---

## 8.3) Projet 7 - `benchmarking`

But: mesurer, comparer, et expliquer des performances de facon disciplinee.

Livrables actuels:

- `benchmarking/baseline_loop-metrics.md`
- `benchmarking/comparison_algorithms-metrics.md`
- `benchmarking/instrumentation_lab.c`
- `benchmarking/green_efficiency_analysis.md`

Regle de compilation specifique du projet:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long
```

Resultats clefs memorises:

- baseline (3 runs): `0.229574`, `0.230196`, `0.235748` secondes
- comparaison:
  - naive moyenne: `2.789564` s
  - single-pass moyenne: `0.000111` s
  - naive `~25131.21x` plus lente

Instrumentation imposee:

- usage de `clock_t`, `clock()`, `CLOCKS_PER_SEC`
- sortie exacte en 4 lignes:
  - `TOTAL seconds: ...`
  - `BUILD_DATA seconds: ...`
  - `PROCESS seconds: ...`
  - `REDUCE seconds: ...`

---

## 8.4) Projet 8 - `pointers_arrays_strings`

But: maitriser les pointeurs, les tableaux et les chaines de caracteres en respectant des contraintes strictes.

Fichiers realises actuellement:

- `0-reset_to_98.c`
- `1-swap.c`
- `2-strlen.c`
- `3-puts.c`
- `4-print_rev.c`
- `5-rev_string.c`
- `6-puts2.c`
- `7-puts_half.c`
- `8-print_array.c`
- `9-strcpy.c`
- `100-atoi.c`
- `0-strcat.c`
- `1-strncat.c`
- `2-strncpy.c`
- `3-strcmp.c`
- `4-rev_array.c`
- `5-string_toupper.c`
- `6-cap_string.c`
- `7-leet.c`
- `main.h`

Points a retenir:

- prototypes centralises dans `pointers_arrays_strings/main.h`
- usage de `_putchar` pour les exercices d affichage de chaines
- exception de l enonce exo 8: `printf` autorise pour `print_array`
- logique de parcours simple avec index (`while`/`for`)
- copie de chaine avec boucle et terminaison `\0` pour `_strcpy`
- conversion de chaine en entier avec gestion des signes pour `_atoi`
- concatenation de chaines avec ajout en fin de `dest` pour `_strcat`
- concatenation limitee a `n` octets de `src` pour `_strncat`
- copie de chaine limitee a `n` octets (avec remplissage `\0`) pour `_strncpy`
- comparaison de chaines caractere par caractere pour `_strcmp`
- inversion d un tableau d entiers avec echange des extremites pour `reverse_array`
- conversion des minuscules en majuscules ASCII pour `string_toupper`
- mise en majuscule du debut de chaque mot selon separateurs imposes pour `cap_string`
- encodage 1337 via table de correspondance pour `leet`
- respecter exactement le format de sortie (virgules, espaces, newline)

Commande type:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 test_main.c pointers_arrays_strings/file.c -I . -o test
```

---

## 8.5) Projet 9 - `malloc_free`

But: apprendre l allocation dynamique simple avec `malloc` et la liberation correcte avec `free`.

Fichiers realises:

- `0-create_array.c`
- `1-strdup.c`
- `2-str_concat.c`
- `3-alloc_grid.c`
- `4-free_grid.c`
- `main.h`

Points a retenir:

- difference entre allocation automatique et allocation dynamique
- `malloc` reserve une zone memoire et retourne une adresse
- `free` libere une zone allouee dynamiquement
- toujours tester `NULL` apres un `malloc`
- les fonctions autorisees sont strictement `malloc` et `free`
- quand l enonce le demande, `NULL` doit etre traite comme chaine vide
- une grille 2D allouee ligne par ligne doit etre liberee ligne par ligne

Fonctions ajoutees:

- `create_array`: alloue un tableau de `char` et l initialise avec un caractere
- `_strdup`: duplique une chaine dans une nouvelle zone memoire
- `str_concat`: concatene deux chaines dans une nouvelle zone memoire
- `alloc_grid`: alloue une grille d entiers initialisee a `0`
- `free_grid`: libere une grille allouee par `alloc_grid`

Commande type:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 test_main.c malloc_free/file.c -I malloc_free -o test
```

---

## 8.6) Projet 10 - `more_malloc_free`

But: approfondir l allocation dynamique avec gestion d erreur via `exit` et recreation manuelle de comportements proches de `calloc`.

Fichiers realises:

- `0-malloc_checked.c`
- `1-string_nconcat.c`
- `2-calloc.c`
- `3-array_range.c`
- `main.h`

Points a retenir:

- `exit(98)` termine normalement le processus avec le code de sortie `98`
- il ne faut pas caster le resultat de `malloc` en C
- `string_nconcat` concatene `s1` avec seulement les `n` premiers octets de `s2`
- `_calloc` est reprogramme avec `malloc` + initialisation manuelle a `0`
- `array_range` construit un tableau contenant toutes les valeurs de `min` a `max`
- les fonctions autorisees sont strictement `malloc`, `free` et `exit`

Fonctions ajoutees:

- `malloc_checked`: alloue une zone memoire ou quitte avec `98`
- `string_nconcat`: concatene `s1` avec une partie de `s2`
- `_calloc`: alloue puis met a zero une zone memoire
- `array_range`: cree un tableau d entiers ordonnes de `min` a `max`

Commande type:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 test_main.c more_malloc_free/file.c -I more_malloc_free -o test
```

---

## 8.7) Projet 11 - `structures_typedef`

But: apprendre a definir des structures, creer des alias de type avec `typedef`, et gerer une structure dynamique complete.

Fichiers realises:

- `dog.h`
- `1-init_dog.c`
- `2-print_dog.c`
- `4-new_dog.c`
- `5-free_dog.c`

Points a retenir:

- `struct dog` regroupe `name`, `age`, `owner`
- `typedef struct dog dog_t;` cree un alias pratique
- `new_dog` alloue la structure puis copie `name` et `owner`
- en cas d echec d allocation intermediaire, il faut liberer ce qui est deja alloue
- `free_dog` libere `name`, `owner`, puis la structure

Fonctions ajoutees:

- `init_dog`: initialise une variable de type `struct dog`
- `print_dog`: affiche les champs et gere les `NULL` avec `(nil)`
- `new_dog`: cree une structure dynamique avec copies des chaines
- `free_dog`: libere une structure `dog_t`

Commande type:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 test_main.c structures_typedef/file.c -I structures_typedef -o test
```

---

## 8.8) Projet 12 - `function_pointers`

But: maitriser les pointeurs de fonctions pour passer des comportements en parametre et selectionner dynamiquement des operations.

Fichiers realises:

- `function_pointers.h`
- `0-print_name.c`
- `1-array_iterator.c`
- `2-int_index.c`
- `3-calc.h`
- `3-op_functions.c`
- `3-get_op_func.c`
- `3-main.c`

Points a retenir:

- un pointeur de fonction contient l adresse d une fonction executable
- `array_iterator` applique une action sur chaque element
- `int_index` retourne le premier index valide selon un predicat
- `get_op_func` utilise une table `op_t` pour mapper un operateur a une fonction
- le programme `calc` gere les erreurs avec les codes 98/99/100

Fonctions ajoutees:

- `print_name`: execute la fonction passee sur le nom
- `array_iterator`: applique une fonction a chaque entier d un tableau
- `int_index`: recherche un entier selon une fonction de comparaison
- `op_add`, `op_sub`, `op_mul`, `op_div`, `op_mod`: operations arithmetiques
- `get_op_func`: selectionne la bonne operation

Commande type:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -I function_pointers -o calc
```

---

## 8.9) Projet 13 - `variadic_functions`

But: maitriser les fonctions variadiques avec `stdarg.h` (`va_start`, `va_arg`, `va_end`) et gerer des signatures flexibles.

Fichiers realises:

- `variadic_functions.h`
- `0-sum_them_all.c`
- `1-print_numbers.c`
- `2-print_strings.c`
- `3-print_all.c`

Points a retenir:

- `sum_them_all` somme un nombre variable d entiers
- `print_numbers` gere separateur et fin de ligne
- `print_strings` affiche `(nil)` si une chaine est `NULL`
- `print_all` traite plusieurs types (`c`, `i`, `f`, `s`) selon un format
- il faut toujours terminer une fonction variadique par `va_end`

Fonctions ajoutees:

- `sum_them_all`: somme variadique
- `print_numbers`: affichage variadique d entiers
- `print_strings`: affichage variadique de chaines
- `print_all`: affichage variadique multi-types

Commande type:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 test_main.c variadic_functions/file.c -I variadic_functions -o test
```

---
## 9) Inventaire complet des variables (fichier par fichier)

`hello_world`

- `4-puts.c`: aucune variable locale
- `5-printf.c`: aucune variable locale
- `6-size.c`: aucune variable locale
- scripts shell: variable d environnement `CFILE` (entree du script)

`variables_if_else_while`

- `0-positive_or_negative.c`: `int n` (nombre aleatoire a classifier)
- `1-last_digit.c`: `int n` (nombre aleatoire), `int last_digit` (dernier chiffre de `n`)
- `2-print_alphabet.c`: `char c` (curseur de `'a'` a `'z'`)
- `3-print_alphabets.c`: `char c` (curseur reutilise minuscule puis majuscule)
- `4-print_alphabt.c`: `char c` (curseur alphabet avec filtrage)
- `5-print_numbers.c`: `int n` (curseur 0..9)
- `6-print_numberz.c`: `int n` (curseur 0..9 pour conversion ASCII)
- `7-print_tebahpla.c`: `char c` (curseur inverse `'z'` vers `'a'`)
- `8-print_base16.c`: `int n` (0..9), `char c` (`'a'`..`'f'`)
- `9-print_comb.c`: `int n` (0..9 + gestion separateur)

`functions_nested_loops`

- `0-putchar.c`: aucune variable locale
- `1-alphabet.c`: `char c`
- `2-print_alphabet_x10.c`: `int line`, `char c`
- `3-islower.c`: parametre `int c`
- `4-isalpha.c`: parametre `int c`
- `5-sign.c`: parametre `int n`
- `6-abs.c`: parametre `int n`
- `7-print_last_digit.c`: parametre `int n`, locale `int last_digit`
- `8-24_hours.c`: `int hour`, `int minute`
- `9-times_table.c`: `int row`, `int col`, `int result`
- `10-add.c`: parametres `int a`, `int b`
- `11-print_to_98.c`: parametre `int n`

`intro_debugging`

- `sum_to_n.c`: parametre `int n`, locales `int i`, `int sum`
- `multiplication_table.c`: parametre `int size`, locales `int row`, `int col`
- `row_sums.c`:
  - `row_sum(int row, int cols)` -> locales `int c`, `int sum`
  - `total_sum(int rows, int cols)` -> locales `int r`, `int total`

`more_functions_nested_loops`

- `0-isupper.c`: parametre `int c`
- `1-isdigit.c`: parametre `int c`
- `2-mul.c`: parametres `int a`, `int b`
- `3-print_numbers.c`: locale `char c`
- `4-print_most_numbers.c`: locale `char c`
- `5-more_numbers.c`: locales `int line`, `int num`
- `6-print_line.c`: parametre `int n`, locale `int i`
- `7-print_diagonal.c`: parametre `int n`, locales `int i`, `int j`
- `8-print_square.c`: parametre `int size`, locales `int i`, `int j`
- `9-fizz_buzz.c`: locale `int i`
- `10-print_triangle.c`: parametre `int size`, locales `int row`, `int space`, `int hash`

`simple-calculator`

- `calculator.c`:
  - `int choice` (option menu)
  - `double a`, `double b` (operandes)

`benchmarking`

- `instrumentation_lab.c`:
  - `unsigned long checksum`
  - `clock_t total_start`, `total_end`, `build_start`, `build_end`, `process_start`, `process_end`, `reduce_start`, `reduce_end`
  - `double total_seconds`, `build_seconds`, `process_seconds`, `reduce_seconds`
- fonctions internes:
  - `next_value(unsigned int *state)` -> parametre pointeur `state`
  - `build_dataset(void)` -> locales `unsigned int state`, `int i`
  - `process_dataset(void)` -> locales `int i`, `int v`
  - `reduce_checksum(void)` -> locales `unsigned long sum`, `int i`

`malloc_free`

- `0-create_array.c`: parametres `unsigned int size`, `char c`, locale `unsigned int i`, pointeur `char *array`
- `1-strdup.c`: parametre `char *str`, locales `char *copy`, `unsigned int i`, `unsigned int length`
- `2-str_concat.c`: parametres `char *s1`, `char *s2`, locales `char *concat`, `unsigned int i`, `unsigned int j`, `unsigned int len1`, `unsigned int len2`
- `3-alloc_grid.c`: parametres `int width`, `int height`, locales `int **grid`, `int i`, `int j`
- `4-free_grid.c`: parametres `int **grid`, `int height`, locale `int i`

`more_malloc_free`

- `0-malloc_checked.c`: parametre `unsigned int b`, locale `void *ptr`
- `1-string_nconcat.c`: parametres `char *s1`, `char *s2`, `unsigned int n`, locales `char *concat`, `unsigned int i`, `unsigned int j`, `unsigned int len1`, `unsigned int len2`
- `2-calloc.c`: parametres `unsigned int nmemb`, `unsigned int size`, locales `char *ptr`, `unsigned int i`
- `3-array_range.c`: parametres `int min`, `int max`, locales `int *array`, `unsigned int i`, `unsigned int size`

`structures_typedef`

- `1-init_dog.c`: parametres `struct dog *d`, `char *name`, `float age`, `char *owner`
- `2-print_dog.c`: parametre `struct dog *d`
- `4-new_dog.c`: parametres `char *name`, `float age`, `char *owner`, locales `dog_t *dog`, `unsigned int len_name`, `unsigned int len_owner`
- `4-new_dog.c` fonctions internes: `_strlen(char *s)` -> locale `unsigned int len`; `_strcpy(char *dest, char *src)` -> locale `unsigned int i`
- `5-free_dog.c`: parametre `dog_t *d`

`function_pointers`

- `0-print_name.c`: parametres `char *name`, `void (*f)(char *)`
- `1-array_iterator.c`: parametres `int *array`, `size_t size`, `void (*action)(int)`, locale `size_t i`
- `2-int_index.c`: parametres `int *array`, `int size`, `int (*cmp)(int)`, locale `int i`
- `3-op_functions.c`: parametres `int a`, `int b` pour chaque operation
- `3-get_op_func.c`: parametre `char *s`, variables `op_t ops[]`, `int i`
- `3-main.c`: parametres `int argc`, `char *argv[]`, locale `int (*f)(int, int)`

`variadic_functions`

- `0-sum_them_all.c`: parametre `const unsigned int n`, locales `va_list args`, `unsigned int i`, `int sum`
- `1-print_numbers.c`: parametres `const char *separator`, `const unsigned int n`, locales `va_list args`, `unsigned int i`
- `2-print_strings.c`: parametres `const char *separator`, `const unsigned int n`, locales `va_list args`, `unsigned int i`, `char *str`
- `3-print_all.c`: parametre `const char * const format`, locales `va_list args`, `unsigned int i`, `char *sep`, `char *str`, `int printed`

---

## 10) Tableau recap - toutes les fonctions du repo

Fonctions C standard:

- `printf`: affichage formate
- `puts`: affichage chaine + newline auto
- `putchar`: affichage d un caractere
- `rand`: nombre pseudo-aleatoire
- `srand`: initialise la seed
- `time`: recupere timestamp
- `clock`: mesure temps CPU (benchmarking)
- `sizeof`: taille d un type/objet

Fonctions du projet:

- `print_alphabet`: affiche `a` a `z`
- `print_alphabet_x10`: affiche alphabet 10 fois
- `_islower`: test minuscule
- `_isalpha`: test lettre
- `print_sign`: affiche signe et retourne code
- `_abs`: valeur absolue
- `print_last_digit`: affiche et retourne dernier chiffre
- `jack_bauer`: imprime toutes les minutes d une journee
- `times_table`: table de multiplication 0..9
- `add`: somme de 2 entiers
- `print_to_98`: sequence vers 98
- `sum_to_n`: somme 1..n
- `print_table`: table n*n
- `row_sum`: somme d une ligne
- `total_sum`: somme totale de plusieurs lignes
- `_isupper`: test caractere majuscule
- `_isdigit`: test caractere chiffre
- `mul`: produit de 2 entiers
- `print_numbers`: affiche `0..9`
- `print_most_numbers`: affiche `0..9` sauf `2` et `4`
- `more_numbers`: affiche 10 lignes de `0..14`
- `print_line`: affiche une ligne de `_`
- `print_diagonal`: affiche une diagonale avec `\\`
- `print_square`: affiche un carre avec `#`
- `print_triangle`: affiche un triangle aligne a droite
- `_strcat`: concatene `src` a la fin de `dest`
- `_strncat`: concatene au plus `n` octets de `src` a la fin de `dest`
- `_strncpy`: copie `src` dans `dest` sur au plus `n` octets
- `_strcmp`: compare deux chaines et retourne leur difference
- `reverse_array`: inverse un tableau d entiers en place
- `string_toupper`: convertit les minuscules d une chaine en majuscules
- `cap_string`: met en majuscule la premiere lettre de chaque mot
- `leet`: encode une chaine en 1337
- `_strcpy`: copie une chaine source vers destination puis retourne `dest`
- `_atoi`: convertit une chaine en entier selon les regles du sujet
- `next_value`: generation pseudo-aleatoire interne (`benchmarking`)
- `build_dataset`: construit le dataset fixe
- `process_dataset`: transforme le dataset
- `reduce_checksum`: calcule la reduction finale
- `create_array`: alloue un tableau de caracteres initialise
- `_strdup`: duplique une chaine dans une nouvelle zone memoire
- `str_concat`: concatene deux chaines dans une nouvelle zone memoire
- `alloc_grid`: alloue une grille 2D d entiers initialisee a `0`
- `free_grid`: libere une grille 2D
- `malloc_checked`: alloue ou quitte avec `exit(98)`
- `string_nconcat`: concatene `s1` avec les `n` premiers octets de `s2`
- `_calloc`: alloue une zone memoire et la met a zero
- `array_range`: cree une plage d entiers de `min` a `max`
- `init_dog`: initialise une structure `dog`
- `print_dog`: affiche les informations d un chien
- `new_dog`: alloue et construit un `dog_t`
- `free_dog`: libere un `dog_t`
- `print_name`: applique une fonction sur un nom
- `array_iterator`: applique une fonction a chaque element
- `int_index`: cherche un index valide selon un predicat
- `op_add`, `op_sub`, `op_mul`, `op_div`, `op_mod`: operations de base du calculateur
- `get_op_func`: selection dynamique d une operation
- `sum_them_all`: somme variadique d entiers
- `print_numbers`: affichage variadique d entiers
- `print_strings`: affichage variadique de chaines
- `print_all`: affichage variadique multi-types

---

## 11) Commandes shell a connaitre par coeur

### 11.1 Permissions + verification scripts

```bash
chmod +x hello_world/0-preprocessor hello_world/1-compiler hello_world/2-assembler hello_world/3-name
wc -l hello_world/0-preprocessor hello_world/1-compiler hello_world/2-assembler hello_world/3-name
```

### 11.2 Pipeline compilation C (concept)

```bash
gcc -E main.c -o main.i   # preprocessor
gcc -S main.i -o main.s   # compiler -> assembleur
gcc -c main.s -o main.o   # assembleur -> objet
gcc main.o -o main        # linker -> executable
```

Equivalent shortcuts:

- `cpp file.c > c` (preprocess seul)
- `gcc -S file.c` (jusqu a assembleur)
- `gcc -c file.c` (jusqu a objet)
- `gcc file.c -o prog` (compile + link)

### 11.3 Compilation stricte type

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 fichier.c -o prog
```

### 11.4 Execution

```bash
./prog
echo $?
```

### 11.5 Style

```bash
betty fichier.c
betty-doc fichier.c
```

### 11.6 Git

```bash
git status
git add .
git commit -m "Task X done"
git push
```

### 11.7 Projets recents

```bash
# simple-calculator
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 simple-calculator/calculator.c -o calculator
./calculator

# benchmarking (instrumentation)
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long benchmarking/instrumentation_lab.c -o instrumentation_lab
./instrumentation_lab

# malloc_free
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c malloc_free/0-create_array.c -I malloc_free -o 0-create_array-test
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 1-main.c malloc_free/1-strdup.c -I malloc_free -o 1-strdup-test
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-main.c malloc_free/2-str_concat.c -I malloc_free -o 2-str-concat-test
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-main.c malloc_free/3-alloc_grid.c -I malloc_free -o 3-alloc-grid-test
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-main.c malloc_free/3-alloc_grid.c malloc_free/4-free_grid.c -I malloc_free -o 4-free-grid-test

# more_malloc_free
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c more_malloc_free/0-malloc_checked.c -I more_malloc_free -o 0-malloc-checked-test
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 1-main.c more_malloc_free/1-string_nconcat.c -I more_malloc_free -o 1-string-nconcat-test
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-main.c more_malloc_free/2-calloc.c -I more_malloc_free -o 2-calloc-test
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-main.c more_malloc_free/3-array_range.c -I more_malloc_free -o 3-array-range-test

# structures_typedef
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 1-main.c structures_typedef/1-init_dog.c -I structures_typedef -o 1-init-dog-test
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-main.c structures_typedef/2-print_dog.c -I structures_typedef -o 2-print-dog-test
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-main.c structures_typedef/4-new_dog.c -I structures_typedef -o 4-new-dog-test
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-main.c structures_typedef/5-free_dog.c structures_typedef/4-new_dog.c -I structures_typedef -o 5-free-dog-test

# function_pointers
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c function_pointers/0-print_name.c -I function_pointers -o 0-print-name-test
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 1-main.c function_pointers/1-array_iterator.c -I function_pointers -o 1-array-iterator-test
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-main.c function_pointers/2-int_index.c -I function_pointers -o 2-int-index-test
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 function_pointers/3-main.c function_pointers/3-op_functions.c function_pointers/3-get_op_func.c -I function_pointers -o calc

# variadic_functions
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c variadic_functions/0-sum_them_all.c -I variadic_functions -o 0-sum-them-all-test
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 1-main.c variadic_functions/1-print_numbers.c -I variadic_functions -o 1-print-numbers-test
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-main.c variadic_functions/2-print_strings.c -I variadic_functions -o 2-print-strings-test
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-main.c variadic_functions/3-print_all.c -I variadic_functions -o 3-print-all-test
```

---

## 12) Pieges frequents et points d oral

1. Oublier `\n` final dans la sortie.
2. Utiliser `printf` quand l enonce impose `putchar` ou `puts`.
3. Oublier que `%` peut donner un negatif si le nombre est negatif.
4. Oublier de reinitialiser une variable dans une boucle imbriquee (`c`, `minute`, etc.).
5. Mauvais alignement dans `times_table`.
6. Confondre declaration et definition.
7. Oublier un prototype dans `main.h`.
8. Oublier les guards de header.
9. Changer le `main` dans les exercices debugging (interdit).
10. Sous-estimer l impact de `-Werror` (un warning = echec build).
11. En `simple-calculator`, oublier la gestion `B == 0` pour la division.
12. En `benchmarking`, ajouter des lignes de sortie non demandees (le format est strict).
13. En allocation dynamique, oublier de tester `malloc` contre `NULL`.
14. Oublier de liberer une grille ligne par ligne avant de liberer le tableau de pointeurs.
15. Utiliser `calloc` ou `realloc` alors que le projet impose de reprogrammer le comportement avec `malloc`.
16. Oublier que `NULL` doit parfois etre traite comme une chaine vide.
17. Caster le resultat de `malloc` en C.
18. Oublier de verifier qu un operateur est bien sur 1 seul caractere dans `get_op_func`.
19. Oublier les codes d erreur 98/99/100 dans `calc`.
20. Oublier `va_end` dans une fonction variadique.

---

## 13) Checklist finale de revision (memoire)

Tu dois savoir:

1. Expliquer la difference entre `cpp`, `gcc -c`, `gcc -S`, et le linkage.
2. Expliquer pourquoi `main` retourne `int`.
3. Ecrire sans aide un `if / else if / else` correct.
4. Ecrire une boucle `while` montante et descendante.
5. Convertir un entier en caractere chiffre avec `+'0'`.
6. Expliquer le role de `main.h` et des prototypes.
7. Expliquer une boucle imbriquee avec un exemple concret.
8. Expliquer comment formatter une sortie strictement (virgules, espaces, newline).
9. Reproduire la methode de debugging pas a pas.
10. Donner les commandes de compilation et test pour chaque projet.
11. Expliquer l usage de `scanf` dans un menu interactif simple.
12. Expliquer `clock_t`, `clock()` et `CLOCKS_PER_SEC` dans un benchmark.
13. Interpreter un ratio de performance (ex: naive beaucoup plus lente que single-pass).
14. Expliquer la difference entre allocation automatique et allocation dynamique.
15. Expliquer a quoi sert `free`.
16. Expliquer le role de `exit(98)` dans `malloc_checked`.
17. Ecrire une concatenation dynamique simple de chaines.
18. Expliquer comment allouer puis liberer correctement une grille 2D.
19. Expliquer `struct`, `typedef`, et la gestion memoire de `new_dog`/`free_dog`.
20. Expliquer ce qu un pointeur de fonction contient et comment il est utilise.
21. Expliquer les erreurs 98/99/100 du calculateur a pointeurs de fonctions.
22. Expliquer `va_start`, `va_arg`, `va_end` avec un exemple concret.

---

## 14) Mini Q/R pour entrainement oral

Q: Pourquoi `_putchar` au lieu de `printf` dans certains exos?  
R: Parce que la consigne impose de controler l affichage caractere par caractere et interdit parfois la bibliotheque standard.

Q: Pourquoi mettre les prototypes dans `main.h`?  
R: Pour partager les declarations entre fichiers, eviter les implicites, et garantir la coherence de types.

Q: Difference entre `puts` et `printf`?  
R: `puts` affiche une chaine et ajoute automatiquement newline; `printf` est formatee et newline doit etre explicitement ajoute.

Q: A quoi sert `-Werror`?  
R: A bloquer la compilation des qu un warning apparait, pour imposer un code propre.

Q: Pourquoi `n + '0'` marche?  
R: Parce que les caracteres chiffres sont consecutifs en ASCII.

Q: Pourquoi tester `malloc` contre `NULL`?  
R: Parce qu une allocation peut echouer, et il faut alors retourner `NULL` ou quitter selon la consigne.

Q: Difference entre allocation automatique et allocation dynamique?  
R: L automatique vit dans la portee normale d une variable locale; la dynamique est reservee a l execution avec `malloc` et doit etre liberee avec `free`.

Q: Pourquoi ne pas caster le retour de `malloc` en C?  
R: Parce que `void *` est converti automatiquement en tout type de pointeur objet en C, et le cast peut masquer un probleme d include manquant.

Q: Que contient un pointeur de fonction?  
R: L adresse d entree d une fonction executable avec une signature precise.

Q: A quoi servent `va_start`, `va_arg`, `va_end`?  
R: A initialiser, lire et terminer proprement la lecture d arguments variadiques.

---

## 15) Resume ultra court

Ce repo t a fait construire:

- la maitrise de la chaine de compilation C
- les bases absolues du controle de flux
- les premieres fonctions C propres avec header
- la rigueur sur la sortie exacte
- une methode de debugging reproductible
- la construction d un programme interactif complet
- la lecture de mesures de performance et leur interpretation
- l allocation dynamique simple avec `malloc` et `free`
- la gestion d echec d allocation et les tableaux dynamiques
- les structures (`struct`, `typedef`) et leur cycle de vie dynamique
- les pointeurs de fonctions et la selection dynamique de comportement
- les fonctions variadiques avec `stdarg.h`

Si tu peux expliquer chaque fichier cite dans cette fiche sans regarder le code, tu maitrises le projet.

---

## 16) Addendum - Projets ajoutes

### 16.1 `argc_argv`

Points a savoir expliquer:

- role de `argc` (nombre d arguments) et `argv` (tableau de chaines)
- parcours des arguments et affichage strict attendu
- conversion texte -> entier (`atoi`) et gestion de cas invalides selon consigne

### 16.2 `recursion`

Fichiers essentiels:

- `0-puts_recursion.c`
- `1-print_rev_recursion.c`
- `2-strlen_recursion.c`
- `3-factorial.c`
- `4-pow_recursion.c`
- `5-sqrt_recursion.c`
- `6-is_prime_number.c`
- `main.h`

Points memoire/logique:

- remplacer les boucles par appels recursifs
- identifier clairement les cas d arret
- comprendre l empilement et le depilement des appels
- distinguer les cas d erreur (`n < 0`) des cas valides

### 16.3 `ai_memory_visualizer_valgrind_tracer`

Livrables:

- `analysis/memory_maps.md`
- `analysis/valgrind_analysis.md`
- `analysis/crash_report.md`

Competences a maitriser:

- distinguer stack et heap avec duree de vie explicite
- expliquer aliasing, dangling pointer et use-after-free
- lire Valgrind comme consequence d un etat memoire concret
- decrire un crash par chaine causale code -> acces invalide -> SIGSEGV
- critiquer une hypothese IA partielle/incorrecte et fournir la correction
