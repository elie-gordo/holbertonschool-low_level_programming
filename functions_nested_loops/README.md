# C - Functions, nested loops

## Introduction

Ce dossier contient les exercices pour pratiquer les fonctions et les boucles imbriquees en C.
L objectif est d ecrire des fonctions propres avec des prototypes, un header central et une sortie exacte.

## Exercice 0 - _putchar

On ecrit un programme qui affiche `_putchar` suivi d une nouvelle ligne.

A retenir:
- Utiliser uniquement `_putchar`.
- Retourner `0` dans `main`.

## Exercice 1 - I sometimes suffer from insomnia...

On ecrit `print_alphabet` qui affiche l alphabet en minuscule.

A retenir:
- Prototype: `void print_alphabet(void);`
- Respect de la contrainte sur `_putchar`.

## Exercice 2 - 10 x alphabet

On ecrit `print_alphabet_x10` qui affiche 10 fois l alphabet.

A retenir:
- Boucles imbriquees simples.
- Nouvelle ligne a chaque alphabet.

## Exercice 3 - islower

On ecrit `_islower` qui verifie si un caractere est minuscule.

A retenir:
- Retour `1` si minuscule, sinon `0`.
- Verification sur l intervalle `'a'` a `'z'`.

## Exercice 4 - isalpha

On ecrit `_isalpha` qui verifie si un caractere est alphabetique.

A retenir:
- Support minuscule et majuscule.
- Retour `1` ou `0` selon le cas.

## Exercice 5 - Sign

On ecrit `print_sign` qui affiche le signe d un entier.

A retenir:
- `+` pour positif, `0` pour zero, `-` pour negatif.
- Retour associe: `1`, `0`, `-1`.

## Exercice 6 - There is no such thing as absolute value...

On ecrit `_abs` qui retourne la valeur absolue d un entier.

A retenir:
- Si `n < 0`, retourner `-n`.
- Sinon retourner `n`.

## Exercice 7 - There are only 3 colors...

On ecrit `print_last_digit` qui affiche et retourne le dernier chiffre.

A retenir:
- Gerer correctement les nombres negatifs.
- Retourner la valeur du dernier chiffre.

## Exercice 8 - I m federal agent Jack Bauer...

On ecrit `jack_bauer` qui affiche chaque minute de `00:00` a `23:59`.

A retenir:
- Boucles heures/minutes.
- Format de sortie strict `HH:MM`.

## Exercice 9 - Learn your times table

On ecrit `times_table` qui affiche la table de 9.

A retenir:
- Alignement exact avec espaces et virgules.
- Sortie conforme au format de l enonce.

## Exercice 10 - a + b

On ecrit `add` qui additionne deux entiers.

A retenir:
- Prototype: `int add(int, int);`
- Retour simple de la somme.

## Exercice 11 - 98 Battery Street, the OG

On ecrit `print_to_98` qui affiche les nombres de `n` jusqu a `98`.

A retenir:
- Monter ou descendre selon la valeur de `n`.
- Separateur exact `, ` et fin sur `98`.

## Fonctions et notions vues

Fonctions:
- `_putchar`
- `printf`
- `main`
- fonctions custom du projet (`print_alphabet`, `_islower`, `times_table`, etc.)

Notions:
- fonctions et prototypes
- declaration vs definition
- header file `main.h`
- boucles `while` et boucles imbriquees
- format de sortie strict

## Commandes utilisees

```bash
# Compilation typique d un exercice
# Exemple exo 9
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 9-main.c 9-times_table.c -o 9-times_table

# Exemple exo 11
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 11-main.c 11-print_to_98.c -o 11-98

# Execution
./9-times_table
./11-98

# Style
betty 0-putchar.c 1-alphabet.c 2-print_alphabet_x10.c 3-islower.c 4-isalpha.c 5-sign.c 6-abs.c 7-print_last_digit.c 8-24_hours.c 9-times_table.c 10-add.c 11-print_to_98.c main.h
betty-doc 0-putchar.c 1-alphabet.c 2-print_alphabet_x10.c 3-islower.c 4-isalpha.c 5-sign.c 6-abs.c 7-print_last_digit.c 8-24_hours.c 9-times_table.c 10-add.c 11-print_to_98.c
```

## Methode simple pour reussir

1. Lire l enonce et les contraintes mot a mot.
2. Ecrire une solution minimale et conforme.
3. Compiler avec les flags imposes.
4. Tester la sortie exactement.
5. Verifier Betty et Betty-doc.
6. Commit et push apres chaque exercice.

## Conclusion

Ce projet installe les bases des fonctions en C avec rigueur.
La repetition des checks (compilation, sortie, style) garantit des solutions propres et valides.
