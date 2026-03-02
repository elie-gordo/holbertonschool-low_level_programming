# C - Simple Calculator

## 1) But du projet

Ce projet construit un programme C complet en terminal, avec un menu interactif.
L exercice 5 ajoute la division securisee sur le choix `4`.

## 2) Compilation

Commande exacte:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator
```

## 3) Execution

```bash
./calculator
```

Exemple attendu (exercice 5):

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
Choice: 3
A: 7
B: 6
Result: 42
Simple Calculator
1) Add
2) Subtract
3) Multiply
4) Divide
0) Quit
Choice: 4
A: 10
B: 0
Error: division by zero
Simple Calculator
1) Add
2) Subtract
3) Multiply
4) Divide
0) Quit
Choice: 4
A: 10
B: 4
Result: 2.5
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
- `3) Multiply` (implementee)
- `4) Divide` (implementee, avec protection division par zero)
- `0) Quit` (implementee)

## 5) Comportement numerique

- Entree utilisateur lue avec `scanf("%d", &choice)` pour le choix du menu.
- Validation de plage: choix valide de `0` a `4`.
- Le programme utilise des operandes en decimal (`double`) pour les calculs.
- Pour les choix `1`, `2`, `3`, lecture de `A` et `B` avec `scanf("%lf", ...)`, puis affichage de `A + B`, `A - B`, `A * B`.
- Pour le choix `4`, si `B == 0` le programme affiche `Error: division by zero`, sinon `Result: A / B`.
- Les resultats sont affiches avec `%g` pour un rendu compact (ex: `35`, `-15`, `42`, `2.5`).

## 6) Limitations connues

- La validation robuste des entrees non numeriques n est pas geree ici.
- Le projet reste volontairement simple: validation uniquement du choix menu dans la plage `0..4`.
