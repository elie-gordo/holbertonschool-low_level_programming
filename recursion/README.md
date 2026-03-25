# C - Recursion

## 1) But du projet

Ce projet introduit la recursion en C.
L objectif est d ecrire des fonctions sans boucles, en suivant strictement les contraintes.

## 2) Ressources

- Recursion, introduction
- What on Earth is Recursion?
- C - Recursion
- C Programming Tutorial 85, Recursion pt.1
- C Programming Tutorial 86, Recursion pt.2

## 3) Objectifs appris

- Ce qu est la recursion
- Comment implementer une fonction recursive
- Quand utiliser la recursion
- Quand ne pas utiliser la recursion

## 4) Regles obligatoires

- Ubuntu 20.04
- Compilation: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Tous les fichiers finissent par une nouvelle ligne
- README obligatoire dans le dossier du projet
- Style Betty obligatoire
- Variables globales interdites
- Maximum 5 fonctions par fichier
- Bibliotheque standard interdite
- `_putchar` autorise
- Tous les prototypes dans `main.h`
- Boucles interdites
- Variables `static` interdites

## 5) Fichiers

- `0-puts_recursion.c`
- `1-print_rev_recursion.c`
- `2-strlen_recursion.c`
- `3-factorial.c`
- `4-pow_recursion.c`
- `5-sqrt_recursion.c`
- `6-is_prime_number.c`
- `main.h`

## 6) Exercice 0

### `0-puts_recursion.c`

- Prototype: `void _puts_recursion(char *s);`
- Affiche la chaine caractere par caractere avec recursion
- Termine par un retour a la ligne

## 7) Exercice 1

### `1-print_rev_recursion.c`

- Prototype: `void _print_rev_recursion(char *s);`
- Affiche la chaine en ordre inverse avec recursion

## 8) Exercice 2

### `2-strlen_recursion.c`

- Prototype: `int _strlen_recursion(char *s);`
- Retourne la longueur de la chaine avec recursion

## 9) Exercice 3

### `3-factorial.c`

- Prototype: `int factorial(int n);`
- Retourne la factorielle d un entier
- Retourne `-1` si `n < 0`

## 10) Exercice 4

### `4-pow_recursion.c`

- Prototype: `int _pow_recursion(int x, int y);`
- Retourne `x` a la puissance `y`
- Retourne `-1` si `y < 0`

## 11) Exercice 5

### `5-sqrt_recursion.c`

- Prototype: `int _sqrt_recursion(int n);`
- Retourne la racine carree naturelle de `n`
- Retourne `-1` si `n` n a pas de racine carree naturelle

## 12) Exercice 6

### `6-is_prime_number.c`

- Prototype: `int is_prime_number(int n);`
- Retourne `1` si `n` est premier, sinon `0`
