# C - argc, argv

## 1) But du projet

Ce projet introduit l utilisation des arguments passes a `main` (`argc`, `argv`).

## 2) Regles obligatoires

- Ubuntu 20.04
- Compilation: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Tous les fichiers finissent par une nouvelle ligne
- `README.md` obligatoire dans ce dossier
- Style Betty obligatoire
- Pas de variable globale
- Maximum 5 fonctions par fichier
- Bibliotheque standard autorisee

## 3) Fichiers actuels

- `0-whatsmyname.c`

## 4) Exercice realise

### Exercice 0 - `0-whatsmyname.c`

- Effet: affiche le nom du programme suivi d un retour a la ligne.
- Contrainte respectee: le chemin n est pas retire, le programme affiche `argv[0]`.
