# C - Hello, World

## Introduction

Ce dossier contient les premiers exercices pour comprendre comment un fichier C devient un programme executable.
L objectif est d apprendre chaque etape de la chaine de compilation avec des consignes simples et strictes.

## Exercice 0 - Preprocessor

On passe un fichier C dans le preprocesseur.
Le fichier source est fourni via la variable `CFILE`.
La sortie attendue est un fichier nomme `c`.

A retenir:
- Le preprocesseur prepare le code avant compilation.
- Il ne produit pas encore un binaire executable.

## Exercice 1 - Compiler

On compile un fichier C sans faire l edition de liens.
Le resultat attendu est un fichier objet `.o`.

A retenir:
- Le fichier objet est une etape intermediaire.
- Ce n est pas encore un programme executable.

## Exercice 2 - Assembler

On genere le code assembleur a partir du fichier C.
Le fichier de sortie attendu se termine par `.s`.

A retenir:
- Le fichier assembleur montre une version proche du langage machine.
- Il aide a comprendre le bas niveau.

## Exercice 3 - Name

On compile pour obtenir un executable nomme exactement `cisfun`.

A retenir:
- Le nom de sortie impose doit etre respecte exactement.

## Exercice 4 - Hello, puts

On affiche une phrase precise avec `puts`.
`printf` est interdit.
Le programme doit retourner `0`.

A retenir:
- Il faut respecter les fonctions autorisees/interdites.
- La sortie doit etre exacte caractere par caractere.

## Exercice 5 - Hello, printf

On affiche une phrase precise avec `printf`.
`puts` est interdit.
Le programme doit retourner `0`.

A retenir:
- Difference pratique entre `puts` et `printf`.
- Compiler proprement sans warnings.

## Exercice 6 - Size is not grandeur, and territory does not make a nation

On affiche la taille de differents types (`char`, `int`, `long int`, `long long int`, `float`).

A retenir:
- La taille des types depend de l architecture.
- `sizeof` permet de l observer directement.

## Fonctions et notions vues

Fonctions:
- `puts`
- `printf`
- `sizeof`
- `main`

Notions:
- preprocessing
- compilation
- assemblage
- edition de liens
- code retour `0`

## Commandes utilisees

```bash
# Exercice 0
gcc -E "$CFILE" -o c

# Exercice 1
gcc -c "$CFILE" -o "${CFILE%.c}.o"

# Exercice 2
gcc -S "$CFILE" -o "${CFILE%.c}.s"

# Exercice 3
gcc "$CFILE" -o cisfun

# Exercices 4, 5, 6
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-puts.c -o 4-puts
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-printf.c -o 5-printf
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-size.c -o 6-size

./4-puts
./5-printf
./6-size

# Style
betty 4-puts.c 5-printf.c 6-size.c
betty-doc 4-puts.c 5-printf.c 6-size.c
```

## Methode simple pour reussir

1. Lire l enonce calmement.
2. Respecter exactement les contraintes.
3. Compiler et tester immediatement.
4. Corriger avant de passer au suivant.
5. Commit et push apres chaque exercice.

## Conclusion

Ce projet pose les bases essentielles du C.
Avec une lecture stricte des consignes et des tests systematiques, la progression est propre et rapide.
