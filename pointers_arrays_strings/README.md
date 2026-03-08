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
- `0-memset.c`
- `1-memcpy.c`
- `2-strchr.c`
- `3-strspn.c`
- `4-strpbrk.c`
- `5-strstr.c`
- `7-print_chessboard.c`
- `8-print_diagsums.c`
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

### Exercice 5 - `5-rev_string.c`

- Prototype: `void rev_string(char *s);`
- Effet: inverse une chaine directement en memoire.

### Exercice 6 - `6-puts2.c`

- Prototype: `void puts2(char *str);`
- Effet: affiche un caractere sur deux d une chaine, puis un retour a la ligne.

### Exercice 7 - `7-puts_half.c`

- Prototype: `void puts_half(char *str);`
- Effet: affiche la seconde moitie de la chaine, puis un retour a la ligne.

### Exercice 8 - `8-print_array.c`

- Prototype: `void print_array(int *a, int n);`
- Effet: affiche `n` elements d un tableau d entiers, separes par `, `, puis un retour a la ligne.

### Exercice 9 - `9-strcpy.c`

- Prototype: `char *_strcpy(char *dest, char *src);`
- Effet: copie `src` dans `dest` (avec `\0`) et retourne `dest`.

### Exercice 10 - `100-atoi.c`

- Prototype: `int _atoi(char *s);`
- Effet: convertit une chaine en entier en tenant compte des signes avant le nombre.

### Exercice 0 (suite) - `0-strcat.c`

- Prototype: `char *_strcat(char *dest, char *src);`
- Effet: concatene `src` a la fin de `dest` puis retourne `dest`.

### Exercice 1 (suite) - `1-strncat.c`

- Prototype: `char *_strncat(char *dest, char *src, int n);`
- Effet: concatene `src` a la fin de `dest` en utilisant au plus `n` octets de `src`.

### Exercice 2 (suite) - `2-strncpy.c`

- Prototype: `char *_strncpy(char *dest, char *src, int n);`
- Effet: copie `src` dans `dest` sur au plus `n` octets, comme `strncpy`.

### Exercice 3 (suite) - `3-strcmp.c`

- Prototype: `int _strcmp(char *s1, char *s2);`
- Effet: compare deux chaines exactement comme `strcmp`.

### Exercice 4 (suite) - `4-rev_array.c`

- Prototype: `void reverse_array(int *a, int n);`
- Effet: inverse l ordre des elements d un tableau d entiers.

### Exercice 5 (suite) - `5-string_toupper.c`

- Prototype: `char *string_toupper(char *);`
- Effet: convertit toutes les lettres minuscules d une chaine en majuscules.

### Exercice 6 (suite) - `6-cap_string.c`

- Prototype: `char *cap_string(char *);`
- Effet: met en majuscule la premiere lettre de chaque mot selon les separateurs imposes.

### Exercice 7 (suite) - `7-leet.c`

- Prototype: `char *leet(char *str);`
- Effet: encode une chaine en 1337 selon les remplacements demandes.

### Exercice 0 (suite 2) - `0-memset.c`

- Prototype: `char *_memset(char *s, char b, unsigned int n);`
- Effet: remplit les `n` premiers octets de la zone memoire `s` avec l octet constant `b`, puis retourne `s`.

### Exercice 1 (suite 2) - `1-memcpy.c`

- Prototype: `char *_memcpy(char *dest, char *src, unsigned int n);`
- Effet: copie `n` octets de `src` vers `dest`, puis retourne `dest`.

### Exercice 2 (suite 2) - `2-strchr.c`

- Prototype: `char *_strchr(char *s, char c);`
- Effet: retourne un pointeur vers la premiere occurrence de `c` dans `s`, ou `NULL` si le caractere est absent.

### Exercice 3 (suite 2) - `3-strspn.c`

- Prototype: `unsigned int _strspn(char *s, char *accept);`
- Effet: retourne la longueur du prefixe initial de `s` compose uniquement de caracteres presents dans `accept`.

### Exercice 4 (suite 2) - `4-strpbrk.c`

- Prototype: `char *_strpbrk(char *s, char *accept);`
- Effet: retourne un pointeur vers la premiere occurrence dans `s` d un caractere present dans `accept`, ou `NULL` sinon.

### Exercice 5 (suite 2) - `5-strstr.c`

- Prototype: `char *_strstr(char *haystack, char *needle);`
- Effet: retourne un pointeur vers la premiere occurrence de `needle` dans `haystack`, ou `NULL` si non trouve.

### Exercice 6 (suite 2) - `7-print_chessboard.c`

- Prototype: `void print_chessboard(char (*a)[8]);`
- Effet: affiche un echiquier 8x8 ligne par ligne avec un retour a la ligne apres chaque ligne.

### Exercice 7 (suite 2) - `8-print_diagsums.c`

- Prototype: `void print_diagsums(int *a, int size);`
- Effet: calcule et affiche la somme des deux diagonales d une matrice carree.
