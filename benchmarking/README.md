# C - Benchmarking

## 1) But du projet

Ce projet introduit la mesure de performance en C avec une methode simple et disciplinee.
Le but est de comparer des temps d execution dans un environnement controle.

## 2) Compilation

Commandes imposees:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long baseline_loop.c -o baseline_loop
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long comparison_algorithms.c -o comparison_algorithms
```

## 3) Execution

```bash
./baseline_loop
./comparison_algorithms
```

## 4) Exercice 0

- Compiler `baseline_loop.c` sans modifier le code source.
- Executer le programme 3 fois consecutives.
- Copier la sortie complete de chaque run dans `baseline_loop-metrics.md`.

## 5) Exercice 1

- Compiler `comparison_algorithms.c` sans modifier la logique des algorithmes, des donnees ou du timing.
- Executer le programme au moins 3 fois.
- Relever les temps pour l implementation naive et single-pass.
- Calculer les moyennes et l ecart relatif.
- Documenter dans `comparison_algorithms-metrics.md`.

## 6) Notes

- Les temps peuvent varier legerement entre les runs.
- Cette mesure de runtime sert de proxy de consommation CPU.
