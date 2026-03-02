# C - Simple Calculator

## 1) But du projet

Ce projet construit un programme C complet en terminal, avec un menu interactif.
L exercice 0 met en place le squelette: affichage du menu et sortie avec l option `0`.

## 2) Compilation

Commande exacte:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator
```

## 3) Execution

```bash
./calculator
```

Exemple attendu (exercice 0):

```text
Simple Calculator
1) Add
2) Subtract
3) Multiply
4) Divide
0) Quit
Choice: 0
Bye!
```

## 4) Operations supportees

- `1) Add` (affichee dans le menu, non implementee a l exercice 0)
- `2) Subtract` (affichee dans le menu, non implementee a l exercice 0)
- `3) Multiply` (affichee dans le menu, non implementee a l exercice 0)
- `4) Divide` (affichee dans le menu, non implementee a l exercice 0)
- `0) Quit` (implementee)

## 5) Comportement numerique

- Entree utilisateur lue avec `scanf("%d", &choice)` pour le choix du menu.
- Aucune operation arithmetique n est encore executee dans l exercice 0.
- Les notions entier/decimal pour les operandes seront traitees dans les exercices suivants.

## 6) Limitations connues

- La validation robuste des entrees non numeriques n est pas geree ici.
- Le squelette actuel se concentre uniquement sur l affichage du menu et la sortie avec `0`.
