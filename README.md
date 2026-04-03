# holbertonschool-low_level_programming

Depuis le debut, ce repo a servi a construire des bases solides en C avec une methode stricte: lire l enonce, coder exactement ce qui est demande, compiler, tester, corriger, puis versionner.

## Ce qu on a fait

- Projet `hello_world`:
  - decouverte de la chaine de compilation (preprocess, compile, assemble, link)
  - premiers programmes C avec affichage (`puts`, `printf`)
  - observation des tailles de types avec `sizeof`

- Projet `variables_if_else_while`:
  - pratique des conditions (`if`, `else if`, `else`)
  - pratique des boucles (`for`)
  - affichages controles avec `putchar` et `printf`
  - respect de contraintes strictes (fonctions autorisees, format de sortie exact)

- Projet `functions_nested_loops`:
  - creation de fonctions avec prototypes et fichier header `main.h`
  - pratique des boucles imbriquees (`while` dans `while`)
  - sorties formatees strictes (`times_table`, `jack_bauer`, `print_to_98`)
  - verification constante de la compilation et du style Betty

- Projet `intro_debugging`:
  - correction de bugs logiques sans changer les interfaces imposees
  - tracage pas a pas pour suivre l etat des variables dans les boucles
  - verification stricte de la sortie exacte attendue

- Projet `more_functions_nested_loops`:
  - exercices avances sur fonctions et boucles imbriquees
  - affichages stricts avec `_putchar` (lignes, diagonales, carres, triangles)
  - introduction a un programme autonome avec `FizzBuzz`

- Projet `simple-calculator`:
  - construction d un programme C interactif complet en terminal
  - menu en boucle, validation de choix, operations arithmetiques
  - gestion de division par zero avec message d erreur explicite

- Projet `benchmarking`:
  - mesures de temps d execution avec `clock()` sur des programmes C fournis
  - comparaison de performances entre implementations
  - interpretation des resultats en lien avec l efficience logicielle

- Projet `pointers_arrays_strings`:
  - introduction aux pointeurs, tableaux et chaines de caracteres
  - implementation progressive des fonctions imposees (`0` a `10`) + suite (`_strcat`, `_strncat`, `_strncpy`, `_strcmp`, `reverse_array`, `string_toupper`, `cap_string`, `leet`)
  - respect strict des prototypes dans `main.h` et des contraintes du projet

- Projet `malloc_free`:
  - introduction a l allocation dynamique avec `malloc` et a la liberation avec `free`
  - creation de tableaux et de chaines dans une nouvelle zone memoire
  - allocation puis liberation correcte d une grille dynamique d entiers

- Projet `more_malloc_free`:
  - allocation dynamique avec controle d echec via `exit`
  - concatenation partielle de chaines dans une nouvelle zone memoire
  - recreation de comportements proches de `calloc` et creation de plages d entiers

- Projet `structures_typedef`:
  - definition et usage de `struct dog`
  - initialisation, affichage, allocation et liberation d une structure dynamique
  - creation d alias de type avec `typedef`

- Projet `function_pointers`:
  - usage des pointeurs de fonctions sur chaines, tableaux et recherche conditionnelle
  - selection dynamique d operations via table de fonctions
  - construction d un mini calculateur modulaire

- Projet `variadic_functions`:
  - utilisation de `va_start`, `va_arg`, `va_end`
  - fonctions variadiques pour sommes et affichages polymorphes
  - gestion propre des cas `NULL` et formats mixtes

- Projet `recursion`:
  - introduction a la recursion sans boucles
  - implementation des exercices 0 a 6 (affichage, longueur, factorielle, puissance, racine, primalite)
  - respect strict des contraintes (pas de `printf`, `_putchar` uniquement)

- Projet `ai_memory_visualizer_valgrind_tracer`:
  - analyse explicite stack vs heap, lifetimes et aliasing
  - interpretation des traces Valgrind (leaks, invalid read/write, use-after-free)
  - redaction d un crash report causal sur segmentation fault et critique des hypotheses IA

- Projet `dynamic_analysis`:
  - extraction de valeurs runtime avec GDB sans modifier le code
  - controle fin de l execution (breakpoints, etat local, moments precis)
  - production des livrables `gdb_fundamentals.txt` et `gdb_vsc.txt` au format strict

- Projet `singly_linked_lists`:
  - construction et parcours d une liste chainee simple (`list_t`)
  - ajout de noeuds en tete et en fin avec duplication de chaine
  - liberation complete de la liste sans fuite memoire

- Projet `doubly_linked_lists`:
  - manipulation d une liste doublement chainee (`prev` et `next`)
  - insertion en tete, en fin et a index
  - suppression a index avec reconnexion correcte des liens

- Projet `hash_tables`:
  - creation d une hash table avec chainage de collisions
  - implementation de `djb2` et mapping `key -> index`
  - ajout, mise a jour, lecture, affichage et destruction complete

- Projet `secure_data_handling`:
  - correction de bugs d ownership et de cycle de vie memoire
  - durcissement des chemins d echec dans `session.c` et `store.c`
  - securisation des operations d insertion, suppression et cleanup

- Projet `file_io`:
  - lecture de fichier vers `STDOUT` avec `open/read/write/close`
  - creation de fichier avec permissions strictes
  - append dans fichier existant
  - programme `cp` avec codes d erreur 97/98/99/100

## Pourquoi on l a fait comme ca

- pour apprendre les vraies bases avant les sujets plus avances
- pour prendre de bonnes habitudes de rigueur des le debut
- pour produire un code propre, testable et conforme aux consignes de l ecole

## Methode suivie

1. Lire l enonce mot a mot.
2. Ecrire une solution simple et conforme.
3. Compiler avec des flags stricts.
4. Verifier la sortie attendue.
5. Verifier le style (`betty`, `betty-doc`).
6. Commit apres chaque exercice.
