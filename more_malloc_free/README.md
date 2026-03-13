# C - more malloc, free

## 1) But du projet

Ce projet approfondit l allocation dynamique avec `malloc`, la sortie avec `exit` et la recreation de comportements proches de `calloc`.

## 2) Regles obligatoires

- Ubuntu 20.04
- Compilation: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Tous les fichiers finissent par une nouvelle ligne
- `README.md` obligatoire dans ce dossier
- Style Betty obligatoire
- Pas de variable globale
- Maximum 5 fonctions par fichier
- Fonctions standard autorisees: `malloc`, `free`, `exit`
- `_putchar` autorise
- Tous les prototypes doivent etre declares dans `main.h`

## 3) Fichiers du projet

- `main.h`
- `0-malloc_checked.c`
- `1-string_nconcat.c`
- `2-calloc.c`
- `3-array_range.c`

## 4) Exercices realises

### Exercice 0 - `0-malloc_checked.c`

- Alloue une zone memoire avec `malloc`.
- Termine le processus avec le code `98` si l allocation echoue.

### Exercice 1 - `1-string_nconcat.c`

- Concatene `s1` avec les `n` premiers octets de `s2`.
- Traite `NULL` comme une chaine vide.
- Retourne `NULL` si l allocation echoue.

### Exercice 2 - `2-calloc.c`

- Alloue un tableau de `nmemb` elements de taille `size`.
- Initialise toute la zone memoire a `0`.
- Retourne `NULL` si `nmemb == 0`, `size == 0` ou si l allocation echoue.

### Exercice 3 - `3-array_range.c`

- Cree un tableau d entiers contenant toutes les valeurs de `min` a `max`.
- Retourne `NULL` si `min > max` ou si l allocation echoue.

