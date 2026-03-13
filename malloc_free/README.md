# C - malloc, free

## 1) But du projet

Ce projet introduit l allocation dynamique de memoire avec `malloc` et la liberation avec `free`.

## 2) Regles obligatoires

- Ubuntu 20.04
- Compilation: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Tous les fichiers finissent par une nouvelle ligne
- `README.md` obligatoire dans ce dossier
- Style Betty obligatoire
- Pas de variable globale
- Maximum 5 fonctions par fichier
- Fonctions standard autorisees: `malloc`, `free`
- `_putchar` autorise
- Tous les prototypes doivent etre declares dans `main.h`

## 3) Fichiers du projet

- `main.h`
- `0-create_array.c`
- `1-strdup.c`
- `2-str_concat.c`
- `3-alloc_grid.c`
- `4-free_grid.c`

## 4) Exercices realises

### Exercice 0 - `0-create_array.c`

- Cree un tableau de caracteres de taille donnee.
- Initialise chaque case avec le caractere recu.
- Retourne `NULL` si `size == 0` ou si l allocation echoue.

### Exercice 1 - `1-strdup.c`

- Duplique une chaine dans une nouvelle zone memoire.
- Retourne `NULL` si `str == NULL` ou si l allocation echoue.

### Exercice 2 - `2-str_concat.c`

- Concatene `s1` et `s2` dans une nouvelle zone memoire.
- Traite `NULL` comme une chaine vide.
- Retourne `NULL` si l allocation echoue.

### Exercice 3 - `3-alloc_grid.c`

- Alloue une grille de `height` lignes et `width` colonnes.
- Initialise tous les elements a `0`.
- Retourne `NULL` si les dimensions sont invalides ou si une allocation echoue.

### Exercice 4 - `4-free_grid.c`

- Libere correctement une grille allouee par `alloc_grid`.

