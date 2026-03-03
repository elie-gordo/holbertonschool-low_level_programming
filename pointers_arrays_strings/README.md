# C - Pointers, arrays and strings

## 1) But du projet

Ce projet introduit les pointeurs, les tableaux et les chaines de caracteres en C.
Chaque exercice doit respecter strictement le prototype impose et les contraintes Holberton.

## 2) Ressources couvertes

- C - Arrays
- C - Pointers
- C - Strings
- Memory Layout

## 3) Objectifs appris

- Comprendre ce qu est un pointeur et comment l utiliser
- Comprendre ce qu est un tableau et comment l utiliser
- Distinguer pointeurs et tableaux
- Manipuler des chaines de caracteres
- Comprendre la portee (scope) des variables

## 4) Regles obligatoires

- Ubuntu 20.04
- Compilation: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Tous les fichiers finissent par une nouvelle ligne
- `README.md` obligatoire dans ce dossier
- Style Betty obligatoire
- Pas de variable globale
- Maximum 5 fonctions par fichier
- Pas de fonctions de la bibliotheque standard (`printf`, `puts`, etc.)
- `_putchar` autorise
- Tous les prototypes dans `main.h` (y compris `_putchar`)

## 5) Fichiers actuels

- `0-reset_to_98.c`
- `1-swap.c`
- `2-strlen.c`
- `3-puts.c`
- `4-print_rev.c`
- `main.h`

## 6) Exercice realise

### Exercice 0 - `0-reset_to_98.c`

- Prototype: `void reset_to_98(int *n);`
- Effet: met la valeur pointee par `n` a `98`.

### Exercice 1 - `1-swap.c`

- Prototype: `void swap_int(int *a, int *b);`
- Effet: echange les valeurs de deux entiers via leurs adresses.

### Exercice 2 - `2-strlen.c`

- Prototype: `int _strlen(char *s);`
- Effet: retourne la longueur d une chaine.

### Exercice 3 - `3-puts.c`

- Prototype: `void _puts(char *str);`
- Effet: affiche une chaine suivie d un retour a la ligne.

### Exercice 4 - `4-print_rev.c`

- Prototype: `void print_rev(char *s);`
- Effet: affiche une chaine en ordre inverse suivie d un retour a la ligne.
