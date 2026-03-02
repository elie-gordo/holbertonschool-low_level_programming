# C - More functions, more nested loops

## 1) But du projet

Ce projet consolide les fonctions en C, les boucles imbriquees et l affichage strict caractere par caractere.
L objectif est d ecrire des fonctions simples, conformes aux prototypes imposes et aux contraintes Holberton.

## 2) Ressources couvertes

- Nested while loops
- C - Functions
- Learning to Program in C (Part 06) (jusqu a 14:00)
- What is the purpose of a function prototype?
- C - Header Files (avant Once-Only Headers)

## 3) Objectifs appris

- Utiliser des boucles simples et imbriquees pour produire une sortie exacte
- Declarer les prototypes dans `main.h` et separer declaration/definition
- Ecrire des fonctions de verification (`_isupper`, `_isdigit`)
- Ecrire des fonctions de calcul (`mul`)
- Ecrire des fonctions d affichage avec `_putchar`
- Respecter la compilation stricte `-Wall -Werror -Wextra -pedantic -std=gnu89`

## 4) Regles obligatoires

- Ubuntu 20.04
- Compilation: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Tous les fichiers finissent par une nouvelle ligne
- README obligatoire dans le dossier du projet
- Style Betty obligatoire
- Pas de variable globale
- Maximum 5 fonctions par fichier
- Pas de libc dans les fonctions de ce projet, sauf exercice `9-fizz_buzz.c` (autorise par l enonce)
- `_putchar` autorise pour les exercices d affichage
- Prototypes dans `main.h` + prototype de `_putchar`

## 5) Architecture du projet

Fichiers presents:

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

Prototypes dans `main.h`:

- `int _putchar(char c);`
- `int _isupper(int c);`
- `int _isdigit(int c);`
- `int mul(int a, int b);`
- `void print_numbers(void);`
- `void print_most_numbers(void);`
- `void more_numbers(void);`
- `void print_line(int n);`
- `void print_diagonal(int n);`
- `void print_square(int size);`
- `void print_triangle(int size);`

## 6) Methode de travail

1. Lire l enonce et identifier les contraintes exactes.
2. Ajouter le prototype dans `main.h` (si necessaire).
3. Ecrire la solution minimale et conforme.
4. Compiler avec les flags stricts.
5. Tester avec un `main` local.
6. Verifier Betty et Betty-doc.
7. Commit et push.

## 7) Exercices realises

### Exercice 0 - `0-isupper.c`

- Retourne `1` si majuscule, sinon `0`.

### Exercice 1 - `1-isdigit.c`

- Retourne `1` si chiffre, sinon `0`.

### Exercice 2 - `2-mul.c`

- Retourne le produit de deux entiers.

### Exercice 3 - `3-print_numbers.c`

- Affiche `0` a `9` puis nouvelle ligne.

### Exercice 4 - `4-print_most_numbers.c`

- Affiche `0` a `9` sans `2` et `4`.

### Exercice 5 - `5-more_numbers.c`

- Affiche 10 fois les nombres de `0` a `14`.

### Exercice 6 - `6-print_line.c`

- Trace une ligne de `_` de longueur `n`.

### Exercice 7 - `7-print_diagonal.c`

- Trace une diagonale avec `\`.

### Exercice 8 - `8-print_square.c`

- Affiche un carre de `#` de taille `size`.

### Exercice 9 - `9-fizz_buzz.c`

- Programme autonome `main` qui affiche FizzBuzz de `1` a `100`.

### Exercice 10 - `10-print_triangle.c`

- Affiche un triangle aligne a droite avec `#`.

## 8) Commandes de verification

- `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 0-main.c 0-isupper.c -o 0-isupper-test`
- `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 1-main.c 1-isdigit.c -o 1-isdigit-test`
- `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 2-main.c 2-mul.c -o 2-mul-test`
- `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 3-main.c 3-print_numbers.c -o 3-print_numbers-test`
- `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 4-main.c 4-print_most_numbers.c -o 4-print_most_numbers-test`
- `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 5-main.c 5-more_numbers.c -o 5-more_numbers-test`
- `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 6-main.c 6-print_line.c -o 6-print_line-test`
- `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 7-main.c 7-print_diagonal.c -o 7-print_diagonal-test`
- `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 8-main.c 8-print_square.c -o 8-print_square-test`
- `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 9-fizz_buzz.c -o 9-fizz_buzz-test`
- `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 10-main.c 10-print_triangle.c -o 10-print_triangle-test`

## 9) Checklist finale

- Prototypes coherents entre `main.h` et les fichiers `.c`
- Sortie strictement conforme aux enonces
- Pas de variable globale
- Compilation sans warning
- Betty et Betty-doc valides
