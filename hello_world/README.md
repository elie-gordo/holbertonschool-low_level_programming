# C - Hello, World

## Objectif

Ce projet introduit les bases du langage C et la chaine de compilation:
- preprocessing
- compilation
- assemblage
- edition de liens

## Ce qu on a appris

- Manipuler `gcc` avec differents drapeaux.
- Comprendre la difference entre fichier source, objet, assembleur et executable.
- Afficher du texte avec `puts` et `printf`.
- Utiliser `sizeof` pour voir la taille des types.
- Respecter strictement une sortie attendue.

## Fonctions et notions vues

- Fonctions C: `puts`, `printf`, `sizeof`, `main`.
- Notions: preprocessseur, compilation, assembleur, linkage, code retour `0`.

## Commandes utilisees

```bash
# Exercice 0: preprocessor
gcc -E "$CFILE" -o c

# Exercice 1: compiler sans linker
gcc -c "$CFILE" -o "${CFILE%.c}.o"

# Exercice 2: produire l assembleur
gcc -S "$CFILE" -o "${CFILE%.c}.s"

# Exercice 3: executable nomme cisfun
gcc "$CFILE" -o cisfun

# Exercices C (4, 5, 6)
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-puts.c -o 4-puts
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-printf.c -o 5-printf
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-size.c -o 6-size

./4-puts
./5-printf
./6-size
```

## Exercices du dossier

1. `0-preprocessor`: passer un fichier C au preprocesseur.
2. `1-compiler`: generer un fichier objet `.o`.
3. `2-assembler`: generer un fichier `.s`.
4. `3-name`: compiler vers un executable `cisfun`.
5. `4-puts.c`: afficher un texte avec `puts`.
6. `5-printf.c`: afficher un texte avec `printf`.
7. `6-size.c`: afficher la taille de types C.

## Validation utilisee

```bash
betty 4-puts.c 5-printf.c 6-size.c
betty-doc 4-puts.c 5-printf.c 6-size.c
```

## Methode de travail

1. Lire l enonce ligne par ligne.
2. Ecrire la version la plus simple qui respecte les contraintes.
3. Compiler et tester tout de suite.
4. Corriger avant de passer a l exercice suivant.
5. Commit/push proprement.
