# C - Variables, if, else, while

## 1) But du projet

Ce projet apprend la logique de base en C: variables, operations, comparaisons, conditions et boucles.
On apprend aussi a produire une sortie exacte en respectant des contraintes strictes.

## 2) Ressources couvertes

- Everything you need to know to start with C.pdf (sections commentaires, types entiers, declaration, characters, operateurs, affectation, comparaisons, operateurs logiques, if/else, while)
- Keywords and identifiers
- integers
- Arithmetic Operators in C
- If statements in C
- if...else statement
- Relational operators
- Logical operators
- while loop in C
- While loop
- man ascii

## 3) Objectifs appris

- Operateurs arithmetiques et usage
- Operateurs relationnels et usage
- Operateurs logiques et usage
- Valeurs TRUE/FALSE en C
- Utilisation de `if` et `if...else`
- Declaration de `char`, `int`, `unsigned int`
- Affectation de variables
- Affichage avec `printf` et `putchar`
- Utilisation de `while`
- ASCII et conversion chiffre/caractere
- Role de `-m32` et `-m64`

## 4) Regles obligatoires

- Ubuntu 20.04
- Compilation: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Tous les fichiers finissent par une nouvelle ligne
- README obligatoire dans le dossier projet
- Pas de warning, pas d erreur
- `system` interdit
- Style Betty obligatoire

## 5) Methode de travail complete

1. Lire l enonce et isoler les contraintes exactes.
2. Choisir les variables minimales utiles.
3. Ecrire une logique claire avec `if/else` et `while`.
4. Respecter strictement la sortie attendue.
5. Compiler en mode strict.
6. Tester le resultat.
7. Passer Betty et Betty-doc.
8. Commit et push apres validation.

## 6) Exercices realises

### Exercice 0 - `0-positive_or_negative.c`

- Determiner si un nombre est positif, nul ou negatif.
- Utilisation de conditions comparees a 0.

### Exercice 1 - `1-last_digit.c`

- Extraire le dernier chiffre avec `% 10`.
- Afficher le bon message selon la valeur du dernier chiffre.

### Exercice 2 - `2-print_alphabet.c`

- Afficher `a` a `z` avec `putchar`.
- Boucle `while` croissante sur les caracteres.

### Exercice 3 - `3-print_alphabets.c`

- Afficher alphabet minuscule puis majuscule.
- Deux boucles `while` successives.

### Exercice 4 - `4-print_alphabt.c`

- Afficher `a` a `z` en excluant `e` et `q`.
- Filtrage via condition logique.

### Exercice 5 - `5-print_numbers.c`

- Afficher les chiffres `0` a `9`.
- Boucle `while` sur entier et affichage `printf`.

### Exercice 6 - `6-print_numberz.c`

- Afficher `0` a `9` avec `putchar`.
- Conversion entier vers caractere avec `n + '0'`.

### Exercice 7 - `7-print_tebahpla.c`

- Afficher l alphabet inverse `z` vers `a`.
- Boucle `while` decroissante.

### Exercice 8 - `8-print_base16.c`

- Afficher base16 minuscule: `0-9` puis `a-f`.
- Deux boucles `while`.

### Exercice 9 - `9-print_comb.c`

- Afficher `0, 1, 2, ... 9`.
- Eviter la virgule finale avec une condition sur le dernier element.

## 7) Commandes utilisees

### Compilation stricte

- `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 variables_if_else_while/0-positive_or_negative.c -o 0-positive_or_negative`
- `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 variables_if_else_while/1-last_digit.c -o 1-last_digit`
- `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 variables_if_else_while/2-print_alphabet.c -o 2-print_alphabet`
- `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 variables_if_else_while/3-print_alphabets.c -o 3-print_alphabets`
- `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 variables_if_else_while/4-print_alphabt.c -o 4-print_alphabt`
- `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 variables_if_else_while/5-print_numbers.c -o 5-print_numbers`
- `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 variables_if_else_while/6-print_numberz.c -o 6-print_numberz`
- `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 variables_if_else_while/7-print_tebahpla.c -o 7-print_tebahpla`
- `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 variables_if_else_while/8-print_base16.c -o 8-print_base16`
- `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 variables_if_else_while/9-print_comb.c -o 9-print_comb`

### Execution

- `./0-positive_or_negative`
- `./1-last_digit`
- `./2-print_alphabet`
- `./3-print_alphabets`
- `./4-print_alphabt`
- `./5-print_numbers`
- `./6-print_numberz`
- `./7-print_tebahpla`
- `./8-print_base16`
- `./9-print_comb`

### Style

- `betty variables_if_else_while/*.c`
- `betty-doc variables_if_else_while/*.c`

## 8) Fonctions et procedes utilises

- `printf` pour affichage formate
- `putchar` pour affichage caractere par caractere
- `rand`, `srand`, `time` pour la partie aleatoire
- operateurs `%`, `+`, `-`, comparaisons et operateurs logiques
- conditions `if`, `if...else`
- boucles `while`

## 9) Checklist finale

- Sortie exactement conforme aux enonces
- Contraintes de fonctions respectees
- Aucune fonction interdite
- Zero warning a la compilation
- Betty et Betty-doc valides
