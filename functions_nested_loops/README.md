# C - Functions, nested loops

## 1) But du projet

Ce projet apprend a construire des fonctions propres en C et a utiliser les boucles imbriquees.
Le point central est la separation declaration/definition, l usage du header `main.h`, et le respect strict des contraintes de sortie.

## 2) Ressources couvertes

- Nested while loops
- C - Functions
- Learning to Program in C (Part 06) jusqu a 14:00
- What is a function prototype
- What is the purpose of a function prototype?
- C - Header Files (avant Once-Only Headers)

## 3) Objectifs appris

- Ce qu est une boucle imbriquee et comment l utiliser
- Ce qu est une fonction et comment l appeler
- Difference entre declaration et definition
- Ce qu est un prototype
- Scope des variables
- Signification des flags GCC `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Role des headers et de `#include`

## 4) Regles obligatoires

- Ubuntu 20.04
- Compilation: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Tous les fichiers finissent par une nouvelle ligne
- README obligatoire dans le dossier du projet
- Style Betty obligatoire
- Variables globales interdites
- Maximum 5 fonctions par fichier
- Bibliotheque standard interdite dans ce projet
- `_putchar` autorise
- Tous les prototypes dans `main.h`
- `main.h` doit etre pousse

## 5) Architecture du projet

Fichiers presents:

- `0-putchar.c`
- `1-alphabet.c`
- `2-print_alphabet_x10.c`
- `3-islower.c`
- `4-isalpha.c`
- `5-sign.c`
- `6-abs.c`
- `7-print_last_digit.c`
- `8-24_hours.c`
- `9-times_table.c`
- `10-add.c`
- `11-print_to_98.c`
- `main.h`

Prototypes centralises dans `main.h`:

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

## 6) Methode de travail complete

1. Lire l enonce et le prototype cible.
2. Ajouter/valider le prototype dans `main.h`.
3. Ecrire la fonction avec une logique simple et testable.
4. Respecter strictement le format de sortie demande.
5. Compiler avec les flags imposes.
6. Lancer des tests avec un `main.c` local de verification.
7. Verifier le style Betty et Betty-doc.
8. Commit et push une fois valide.

## 7) Exercices realises

### Exercice 0 - `0-putchar.c`

- Affiche `_putchar` puis nouvelle ligne.
- Utilise `_putchar` uniquement.

### Exercice 1 - `1-alphabet.c`

- Fonction `print_alphabet`.
- Affiche `a` a `z` puis nouvelle ligne.

### Exercice 2 - `2-print_alphabet_x10.c`

- Fonction `print_alphabet_x10`.
- Affiche 10 alphabets en utilisant des boucles imbriquees.

### Exercice 3 - `3-islower.c`

- Fonction `_islower`.
- Retourne `1` pour minuscule, sinon `0`.

### Exercice 4 - `4-isalpha.c`

- Fonction `_isalpha`.
- Retourne `1` pour lettre, sinon `0`.

### Exercice 5 - `5-sign.c`

- Fonction `print_sign`.
- Affiche `+`, `0`, ou `-` et retourne `1`, `0`, ou `-1`.

### Exercice 6 - `6-abs.c`

- Fonction `_abs`.
- Retourne la valeur absolue d un entier.

### Exercice 7 - `7-print_last_digit.c`

- Fonction `print_last_digit`.
- Affiche et retourne le dernier chiffre.

### Exercice 8 - `8-24_hours.c`

- Fonction `jack_bauer`.
- Affiche toutes les minutes de `00:00` a `23:59`.

### Exercice 9 - `9-times_table.c`

- Fonction `times_table`.
- Affiche la table de 9 avec formatage exact.

### Exercice 10 - `10-add.c`

- Fonction `add`.
- Retourne la somme de deux entiers.

### Exercice 11 - `11-print_to_98.c`

- Fonction `print_to_98`.
- Affiche de `n` vers `98` en montant ou descendant.

## 8) Commandes utilisees

### Compilation type d un test local

- `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 0-main.c 0-putchar.c -o 0-putchar-test`
- `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 1-main.c 1-alphabet.c -o 1-alphabet-test`
- `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 2-main.c 2-print_alphabet_x10.c -o 2-alphabet-x10-test`
- `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 3-main.c 3-islower.c -o 3-islower-test`
- `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 4-main.c 4-isalpha.c -o 4-isalpha-test`
- `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 5-main.c 5-sign.c -o 5-sign-test`
- `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 6-main.c 6-abs.c -o 6-abs-test`
- `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 7-main.c 7-print_last_digit.c -o 7-last-digit-test`
- `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 8-main.c 8-24_hours.c -o 8-24h-test`
- `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 9-main.c 9-times_table.c -o 9-times-table-test`
- `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 10-main.c 10-add.c -o 10-add-test`
- `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 11-main.c 11-print_to_98.c -o 11-to-98-test`

### Execution

- `./0-putchar-test`
- `./1-alphabet-test`
- `./2-alphabet-x10-test`
- `./3-islower-test`
- `./4-isalpha-test`
- `./5-sign-test`
- `./6-abs-test`
- `./7-last-digit-test`
- `./8-24h-test`
- `./9-times-table-test`
- `./10-add-test`
- `./11-to-98-test`

### Style

- `betty functions_nested_loops/*.c functions_nested_loops/main.h`
- `betty-doc functions_nested_loops/*.c`

## 9) Fonctions et procedes utilises

- `_putchar` pour afficher sans `printf`/`puts`
- fonctions unitaires de logique (`_islower`, `_isalpha`, `_abs`, `add`)
- fonctions d affichage formate par caractere (`times_table`, `jack_bauer`)
- prototypes dans le header `main.h`
- inclusion via `#include "main.h"`

## 10) Checklist finale

- Prototypes coherents entre `main.h` et `.c`
- Pas de variable globale
- Maximum 5 fonctions par fichier
- Sortie exacte selon enonce
- Compilation et style conformes
