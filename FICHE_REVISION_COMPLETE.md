# Fiche De Cours Complete - Holberton Low Level Programming (C)

## 0) Objectif de cette fiche

Cette fiche te permet de reviser **tout le repo** de facon methodique:

- les 4 projets
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
- `README.md` (racine)

Nombre total de fichiers source/executables de projet (hors `.git`):

- Scripts shell: 4 (dans `hello_world`)
- Fichiers C: 28
- Headers: 1 (`functions_nested_loops/main.h`)

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

---

## 10) Tableau recap - toutes les fonctions du repo

Fonctions C standard:

- `printf`: affichage formate
- `puts`: affichage chaine + newline auto
- `putchar`: affichage d un caractere
- `rand`: nombre pseudo-aleatoire
- `srand`: initialise la seed
- `time`: recupere timestamp
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

---

## 11) Commandes shell a connaitre par coeur

### 10.1 Permissions + verification scripts

```bash
chmod +x hello_world/0-preprocessor hello_world/1-compiler hello_world/2-assembler hello_world/3-name
wc -l hello_world/0-preprocessor hello_world/1-compiler hello_world/2-assembler hello_world/3-name
```

### 10.2 Pipeline compilation C (concept)

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

### 10.3 Compilation stricte type

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 fichier.c -o prog
```

### 10.4 Execution

```bash
./prog
echo $?
```

### 10.5 Style

```bash
betty fichier.c
betty-doc fichier.c
```

### 10.6 Git

```bash
git status
git add .
git commit -m "Task X done"
git push
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

---

## 15) Resume ultra court

Ce repo t a fait construire:

- la maitrise de la chaine de compilation C
- les bases absolues du controle de flux
- les premieres fonctions C propres avec header
- la rigueur sur la sortie exacte
- une methode de debugging reproductible

Si tu peux expliquer chaque fichier cite dans cette fiche sans regarder le code, tu maitrises le projet.
