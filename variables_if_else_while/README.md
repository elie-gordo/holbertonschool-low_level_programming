# C - Variables, if, else, while

## Introduction

Ce dossier contient les exercices pour pratiquer les variables, conditions et boucles en C.
L objectif est d ecrire des programmes simples en respectant strictement chaque enonce.

## Exercice 0 - Positive anything is better than negative nothing

On complete un programme qui genere un nombre aleatoire et affiche s il est positif, nul ou negatif.

A retenir:
- Une condition doit couvrir tous les cas (`> 0`, `== 0`, `< 0`).
- Le format de sortie doit etre exact.

## Exercice 1 - The last digit

On affiche le dernier chiffre d un nombre aleatoire et un message associe.

A retenir:
- Le dernier chiffre se recupere avec `% 10`.
- Les phrases doivent correspondre exactement a l enonce.

## Exercice 2 - Alphabet game

On affiche l alphabet en minuscule.
Contrainte: `putchar` uniquement.

A retenir:
- Une boucle `for` permet de parcourir `'a'` a `'z'`.
- Respect strict du nombre d utilisations de `putchar`.

## Exercice 3 - alphABET

On affiche alphabet minuscule puis majuscule.
Contrainte: `putchar` uniquement.

A retenir:
- Deux boucles pour deux plages de caracteres.
- Nouvelle ligne a la fin.

## Exercice 4 - alphabet soup

On affiche l alphabet en minuscule sans `e` et `q`.

A retenir:
- Filtrer avec `if (c != 'e' && c != 'q')`.
- Sortie exacte sans caracteres interdits.

## Exercice 5 - Numbers

On affiche tous les chiffres de `0` a `9`.

A retenir:
- Parcours simple avec boucle croissante.
- Finir par `\n`.

## Exercice 6 - Numberz

On affiche aussi `0` a `9`, mais sans variable `char` et avec `putchar` uniquement.

A retenir:
- Conversion entier vers caractere: `n + '0'`.
- Respect strict des contraintes de type.

## Exercice 7 - Smile in the mirror

On affiche l alphabet minuscule en ordre inverse.

A retenir:
- Boucle decroissante de `'z'` vers `'a'`.

## Exercice 8 - Hexadecimal

On affiche les caracteres hexadecimal en minuscule: `0..9` puis `a..f`.

A retenir:
- Combiner une boucle numerique et une boucle alphabetique.

## Exercice 9 - Patience, persistence and perspiration...

On affiche `0, 1, 2, ... 9`.

A retenir:
- Ajouter `, ` seulement si ce n est pas le dernier chiffre.
- Eviter le separateur final.

## Fonctions et notions vues

Fonctions:
- `printf`
- `putchar`
- `rand`
- `srand`
- `time`
- `main`

Notions:
- modulo `%`
- comparaison et branchements
- boucles croissantes/decroissantes
- format de sortie exact

## Commandes utilisees

```bash
# Compilation
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

## Methode simple pour reussir

1. Lire l enonce avant de coder.
2. Respecter strictement les contraintes.
3. Compiler et tester tout de suite.
4. Verifier Betty et Betty-doc.
5. Commit et push apres chaque exercice.

## Conclusion

Ce projet renforce la logique en C et la rigueur sur les consignes.
Une methode stricte et repetitive permet de produire des solutions propres.
