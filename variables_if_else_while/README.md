# C - Variables, if, else, while

## Objectif

Ce projet sert a maitriser:
- les variables et operations de base
- les conditions `if`, `else if`, `else`
- les boucles `for`
- l affichage avec `putchar` et `printf`

## Ce qu on a appris

- Tester plusieurs cas logiques (positif, negatif, zero).
- Extraire le dernier chiffre avec `% 10`.
- Parcourir alphabet et chiffres avec des boucles.
- Convertir un entier en caractere avec `n + '0'`.
- Respecter des contraintes strictes (ex: seulement `putchar`, pas de `char`, nombre max d appels).

## Fonctions et notions vues

- Fonctions: `printf`, `putchar`, `rand`, `srand`, `time`, `main`.
- Notions: modulo, comparaison, branchements, boucles croissantes/decroissantes, format de sortie exact.

## Commandes utilisees

```bash
# Compilation des exercices
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-last_digit.c -o 1-last_digit
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-print_alphabet.c -o 2-print_alphabet
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-print_alphabets.c -o 3-print_alphabets
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-print_alphabt.c -o 4-print_alphabt
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-print_numbers.c -o 5-print_numbers
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-print_numberz.c -o 6-print_numberz
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-print_tebahpla.c -o 7-print_tebahpla
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-print_base16.c -o 8-print_base16
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-print_comb.c -o 9-print_comb

# Execution
./0-positive_or_negative
./1-last_digit
./2-print_alphabet
./3-print_alphabets
./4-print_alphabt
./5-print_numbers
./6-print_numberz
./7-print_tebahpla
./8-print_base16
./9-print_comb

# Style
betty 0-positive_or_negative.c 1-last_digit.c 2-print_alphabet.c 3-print_alphabets.c 4-print_alphabt.c 5-print_numbers.c 6-print_numberz.c 7-print_tebahpla.c 8-print_base16.c 9-print_comb.c
betty-doc 0-positive_or_negative.c 1-last_digit.c 2-print_alphabet.c 3-print_alphabets.c 4-print_alphabt.c 5-print_numbers.c 6-print_numberz.c 7-print_tebahpla.c 8-print_base16.c 9-print_comb.c
```

## Exercices du dossier

1. `0-positive_or_negative.c`: afficher si `n` est positif, nul ou negatif.
2. `1-last_digit.c`: afficher le dernier chiffre de `n` et le message associe.
3. `2-print_alphabet.c`: alphabet en minuscule.
4. `3-print_alphabets.c`: alphabet minuscule puis majuscule.
5. `4-print_alphabt.c`: alphabet sans `e` et `q`.
6. `5-print_numbers.c`: chiffres de `0` a `9`.
7. `6-print_numberz.c`: chiffres avec `putchar` seulement et sans `char`.
8. `7-print_tebahpla.c`: alphabet en ordre inverse.
9. `8-print_base16.c`: base16 en minuscule.
10. `9-print_comb.c`: chiffres `0` a `9` separes par `, `.

## Methode de travail

1. Lire exactement les contraintes de chaque enonce.
2. Ecrire un code minimal et conforme.
3. Verifier le rendu attendu.
4. Passer Betty et Betty-doc.
5. Commit/push a chaque exercice.
