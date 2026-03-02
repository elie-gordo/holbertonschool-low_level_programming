# C - Benchmarking

## 1) But du projet

Ce projet introduit la mesure de performance comme pratique d ingenierie.
L objectif est de comparer des temps d execution de facon controlee, puis de justifier les conclusions avec des donnees.

## 2) Regles de compilation

Tous les fichiers C du projet doivent compiler avec:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long
```

## 3) Livrables realises

- `baseline_loop-metrics.md`
- `comparison_algorithms-metrics.md`
- `instrumentation_lab.c`
- `green_efficiency_analysis.md`

## 4) Exercice 0 - Baseline Execution Measurement

- Programme fourni: `baseline_loop.c` (non modifie)
- 3 executions consecutives mesurees
- sorties verbatim enregistrees dans `baseline_loop-metrics.md`

Mesures relevees:

- Run 1: `0.229574` s
- Run 2: `0.230196` s
- Run 3: `0.235748` s

## 5) Exercice 1 - Algorithmic Efficiency Comparison

- Programme fourni: `comparison_algorithms.c` (logique non modifiee)
- 3 executions avec mesure des 2 implementations
- moyennes et ratio calcules dans `comparison_algorithms-metrics.md`

Resultats moyens:

- Naive: `2.789564` s
- Single-pass: `0.000111` s
- Ecart relatif: naive `~25131.21x` plus lente

## 6) Exercice 2 - Controlled Instrumentation Experiment

- Fichier soumis: `instrumentation_lab.c`
- instrumentation ajoutee avec `clock_t`, `clock()` et `CLOCKS_PER_SEC`
- logique algorithmique conservee
- sortie exacte en 4 lignes:
  - `TOTAL seconds: <float>`
  - `BUILD_DATA seconds: <float>`
  - `PROCESS seconds: <float>`
  - `REDUCE seconds: <float>`

## 7) Exercice 3 - Written Report

- Fichier soumis: `green_efficiency_analysis.md`
- sections imposees respectees
- longueur respectee (entre 400 et 700 mots)
- conclusions basees sur les mesures enregistrees

## 8) Commandes utiles

Compilation de l instrumentation:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long instrumentation_lab.c -o instrumentation_lab
```

Execution:

```bash
./instrumentation_lab
```

## 9) Checklist finale

- flags de compilation exacts
- mesures executees sur meme environnement
- sorties enregistrees sans modification
- aucun changement de logique dans les programmes fournis
