# AI Memory Visualizer + Valgrind Tracer

## 1) But du projet

Ce projet est centre sur la comprehension concrete du comportement memoire en C:

- distinction stack vs heap
- duree de vie des objets
- aliasing de pointeurs
- interpretation rigoureuse des erreurs Valgrind
- explication causale d un crash (segmentation fault)

## 2) Livrables presents

Conformement a la consigne de depot, les fichiers requis pour soumission sont dans `analysis/`:

- `analysis/memory_maps.md`
- `analysis/valgrind_analysis.md`
- `analysis/crash_report.md`

## 3) Methode suivie

1. Compiler et executer les programmes fournis.
2. Observer les transitions memoire importantes (allocation, free, aliasing, dereferencement invalide).
3. Executer Valgrind avec:
   - `--leak-check=full`
   - `--show-leak-kinds=all`
   - `--track-origins=yes`
4. Relier chaque diagnostic a un objet memoire precis et a une violation de lifetime.
5. Documenter au moins une hypothese IA incorrecte et la corriger explicitement.

## 4) Fichiers d analyse

### `analysis/memory_maps.md`

- cartes memoire et evolution stack/heap
- suivi des alias et ownership
- correction d une interpretation IA erronee

### `analysis/valgrind_analysis.md`

- classification de chaque alerte Valgrind
- mapping alerte -> mauvaise utilisation memoire
- critique d une interpretation IA partielle/inexacte

### `analysis/crash_report.md`

- confirmation du crash
- chaine causale complete code -> acces invalide -> SIGSEGV
- categorie d UB identifiee
