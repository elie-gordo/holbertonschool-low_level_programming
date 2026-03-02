# C - Simple Calculator

## 1) But du projet

Ce projet construit un programme C complet en terminal, avec un menu interactif.
L exercice 3 ajoute la soustraction sur le choix `2`.

## 2) Compilation

Commande exacte:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator
```

## 3) Execution

```bash
./calculator
```

Exemple attendu (exercice 3):

```text
Simple Calculator
1) Add
2) Subtract
3) Multiply
4) Divide
0) Quit
Choice: 1
A: 10
B: 25
Result: 35
Simple Calculator
1) Add
2) Subtract
3) Multiply
4) Divide
0) Quit
Choice: 2
A: 10
B: 25
Result: -15
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

- `1) Add` (implementee)
- `2) Subtract` (implementee)
- `3) Multiply` (affichee dans le menu, non implementee a l exercice 3)
- `4) Divide` (affichee dans le menu, non implementee a l exercice 3)
- `0) Quit` (implementee)

## 5) Comportement numerique

- Entree utilisateur lue avec `scanf("%d", &choice)` pour le choix du menu.
- Validation de plage: choix valide de `0` a `4`.
- Pour le choix `1`, lecture de `A` et `B` avec `scanf`, puis affichage de `A + B`.
- Pour le choix `2`, lecture de `A` et `B` avec `scanf`, puis affichage de `A - B`.
- Le programme fonctionne en entier (`int`) pour l exercice 3.

## 6) Limitations connues

- La validation robuste des entrees non numeriques n est pas geree ici.
- Les operations `*`, `/` seront ajoutees dans les exercices suivants.
