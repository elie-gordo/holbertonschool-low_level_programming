# C - Intro debugging

## 1) But du projet

Ce projet apprend a corriger du code C qui compile mais qui produit un resultat faux.
La methode imposee est le tracage pas a pas pour comprendre l execution, pas le hasard.

## 2) Ressources couvertes

- Python Tutor - C Visualizer
- Python Tutor - Tool overview

## 3) Objectifs appris

- Comprendre ce qu est le debugging
- Suivre l execution ligne par ligne
- Observer l evolution des variables dans les boucles simples et imbriquees
- Suivre les appels de fonctions et les valeurs de retour
- Corriger des erreurs de logique sans changer les contraintes de l enonce

## 4) Regles obligatoires

- Compilation: `gcc -Wall -Wextra -Werror -pedantic -std=gnu89`
- Sortie exacte (espaces et retours a la ligne inclus)
- Ne pas changer les noms de fichiers et fonctions imposes
- Ne pas modifier le `main` fourni
- Corriger uniquement la logique necessaire
- Soumettre le fichier `.c` corrige pour chaque exercice

## 5) Methode de travail

1. Ouvrir le code dans Python Tutor.
2. Executer pas a pas.
3. Observer les variables a chaque iteration.
4. Identifier la cause logique de l erreur.
5. Corriger avec le changement minimal.
6. Compiler en mode strict.
7. Verifier la sortie exacte.
8. Commit et push.

## 6) Exercices realises

### Exercice 0 - `sum_to_n.c`

- Probleme: borne de boucle incorrecte et mauvaise valeur retournee.
- Correction: sommer jusqu a `n` inclus puis retourner `sum`.
- Sortie attendue: `55`

### Exercice 1 - `multiplication_table.c`

- Probleme: incrementation supplementaire de `col` dans la boucle interne.
- Correction: laisser la boucle `for` controler seule `col`.
- Sortie attendue:
- `1 2 3 4 `
- `2 4 6 8 `
- `3 6 9 12 `
- `4 8 12 16 `

### Exercice 2 - `row_sums.c`

- Probleme: accumulation intermediaire incorrecte via `current`.
- Correction: ajouter directement chaque `row_sum` a `total`.
- Sortie attendue: `36`

## 7) Commandes de verification

- `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 intro_debugging/sum_to_n.c -o sum_to_n_test`
- `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 intro_debugging/multiplication_table.c -o multiplication_table_test`
- `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 intro_debugging/row_sums.c -o row_sums_test`
- `./sum_to_n_test`
- `./multiplication_table_test`
- `./row_sums_test`

## 8) Checklist finale

- `main` non modifie
- correction logique minimale
- compilation sans warning
- sortie strictement conforme
