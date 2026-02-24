# C - Hello, World

## 1) But du projet

Ce projet apprend le debut du langage C, de la preparation du code jusqu a l execution.
On y voit le preprocesseur, la compilation, l assemblage, la creation d un executable, l affichage de texte et la taille des types.

## 2) Ressources couvertes

- Everything you need to know to start with C.pdf
- Dennis Ritchie
- The C Programming Language (Brian Kernighan)
- Why C Programming Is Awesome
- Learning to program in C part 1
- Learning to program in C part 2
- Understanding C program Compilation Process
- Betty Coding Style
- man gcc
- man 3 printf
- man puts
- man putchar

## 3) Objectifs appris

- Pourquoi C est important et performant
- Qui est Dennis Ritchie
- Qui sont Brian Kernighan et Linus Torvalds
- Ce qui se passe quand on lance `gcc main.c`
- Ce qu est le point d entree `main`
- Comment afficher du texte avec `printf`, `puts`, `putchar`
- Comment utiliser `sizeof`
- Comment compiler avec `gcc`
- Nom par defaut d un binaire (si pas de `-o`, c est `a.out`)
- Style Betty et verification du style
- Choix du bon header selon la fonction utilisee
- Influence du `return` de `main` sur le code de sortie

## 4) Regles obligatoires

- Compilation cible: Ubuntu 20.04
- Flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Chaque fichier finit par une nouvelle ligne
- README obligatoire a la racine du repo et du projet
- `system` interdit
- Respect du style Betty
- Scripts shell:
- premiere ligne `#!/bin/bash`
- exactement 2 lignes

## 5) Methode de travail complete

1. Lire l enonce mot par mot.
2. Identifier les contraintes exactes (fonction autorisee/interdite, nom de fichier, sortie exacte).
3. Ecrire la solution minimale.
4. Tester localement le comportement.
5. Compiler avec les flags imposes quand c est du C.
6. Verifier le style avec Betty.
7. Corriger avant de passer a l exo suivant.
8. Commit et push a la fin de chaque exercice valide.

## 6) Exercices realises

### Exercice 0 - `0-preprocessor`

- Objectif: passer `$CFILE` dans le preprocesseur et ecrire la sortie dans `c`.
- Idee: utiliser le preprocesseur seul.

### Exercice 1 - `1-compiler`

- Objectif: compiler sans linker.
- Resultat attendu: fichier objet `.o` (ex: `main.o`).

### Exercice 2 - `2-assembler`

- Objectif: generer l assembleur.
- Resultat attendu: fichier `.s` (ex: `main.s`).

### Exercice 3 - `3-name`

- Objectif: compiler et creer un executable nomme `cisfun`.

### Exercice 4 - `4-puts.c`

- Objectif: afficher exactement `"Programming is like building a multilingual puzzle`.
- Contraintes: `puts` obligatoire, `printf` interdit, `return 0`.

### Exercice 5 - `5-printf.c`

- Objectif: afficher exactement `with proper grammar, but the outcome is a piece of art,`.
- Contraintes: `printf` obligatoire, `puts` interdit, `return 0`, zero warning.

### Exercice 6 - `6-size.c`

- Objectif: afficher la taille de `char`, `int`, `long int`, `long long int`, `float`.
- Point important: les tailles peuvent changer entre 32-bit et 64-bit.

## 7) Commandes utilisees

### Verification des scripts shell

- `wc -l hello_world/0-preprocessor hello_world/1-compiler hello_world/2-assembler hello_world/3-name`
- `chmod +x hello_world/0-preprocessor hello_world/1-compiler hello_world/2-assembler hello_world/3-name`

### Compilation et execution des programmes C

- `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 hello_world/4-puts.c -o 4-puts`
- `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 hello_world/5-printf.c -o 5-printf`
- `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 hello_world/6-size.c -o 6-size`
- `./4-puts`
- `./5-printf`
- `./6-size`

### Architecture 32/64 bits (exo 6)

- `gcc hello_world/6-size.c -m32 -o size32`
- `gcc hello_world/6-size.c -m64 -o size64`
- `./size32`
- `./size64`

### Style

- `betty hello_world/4-puts.c hello_world/5-printf.c hello_world/6-size.c`
- `betty-doc hello_world/4-puts.c hello_world/5-printf.c hello_world/6-size.c`

## 8) Fonctions et procedes utilises

- `cpp` pour le preprocesseur
- `gcc` pour compiler/assembler/linker
- `puts`, `printf`, `putchar` pour l affichage selon contraintes
- `sizeof` pour mesurer la taille des types
- variable d environnement `CFILE`
- redirection shell `>`
- statut de sortie de programme (`return 0`)

## 9) Checklist finale

- Noms de fichiers exacts
- Sorties exactes caractere par caractere
- Fonctions interdites non utilisees
- Fichiers termines par `\n`
- Compilation conforme
- Style conforme
