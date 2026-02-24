Hello World - Introduction au langage C

Ce dossier contient les premiers exercices pour apprendre comment un fichier C devient un programme.
L objectif est de comprendre les etapes une par une, avec des consignes simples.

Exercice 0 - Preprocessor

Dans cet exercice, on demande de prendre un fichier C et de le passer dans le preprocesseur.
Le nom du fichier est donne dans la variable CFILE.
Le resultat doit etre enregistre dans un fichier qui s appelle c.

A retenir:
Le preprocesseur prepare le fichier avant la compilation.
Il ne cree pas encore un programme executable.

Exercice 1 - Compiler

Ici, on compile le fichier C, mais on ne fait pas encore l etape finale.
Le nom du fichier C est toujours dans CFILE.
Le resultat doit etre un fichier objet avec le meme nom, mais qui finit par .o.

A retenir:
Un fichier .o est une etape intermediaire.
Ce n est pas encore un programme que l on peut lancer directement.

Exercice 2 - Assembler

Cet exercice demande de produire le code assembleur a partir du fichier C.
Le fichier de sortie doit avoir le meme nom, mais finir par .s.

A retenir:
Le fichier .s montre une version tres proche du langage machine.
Il aide a comprendre ce qui se passe bas niveau.

Exercice 3 - Name

Dans cet exercice, on compile le fichier C et on cree directement un programme executable.
Le nom de cet executable doit etre exactement cisfun.

A retenir:
Le nom de sortie est impose par l enonce.
Il faut le respecter exactement.

Exercice 4 - Hello, puts

On doit afficher une phrase precise a l ecran.
Il faut utiliser puts.
On n a pas le droit d utiliser printf.
Le programme doit se terminer correctement avec la valeur 0.

A retenir:
Quand un enonce interdit une fonction, il faut vraiment l eviter.
La phrase affichee doit etre exacte, caractere par caractere.

Exercice 5 - Hello, printf

On doit afficher une autre phrase precise.
Cette fois, il faut utiliser printf.
On n a pas le droit d utiliser puts.
Le programme doit retourner 0 et compiler sans avertissements.

A retenir:
On apprend la difference entre puts et printf.
On apprend aussi a faire un code propre sans warning.

Exercice 6 - Size is not grandeur, and territory does not make a nation

Le but est d afficher la taille de plusieurs types de donnees.
Par exemple char, int, long int, long long int et float.
Les tailles peuvent changer selon l architecture de compilation.

A retenir:
Toutes les machines ne stockent pas les types de la meme facon.
Cet exercice sert a observer ces differences.

Methode simple pour reussir tous les exercices

1. Lire tres calmement l enonce.
2. Respecter exactement le nom du fichier demande.
3. Respecter exactement les mots, phrases et contraintes.
4. Tester chaque exercice tout de suite apres l avoir fait.
5. Corriger avant de passer a l exercice suivant.
6. Faire un commit et un push a la fin de chaque exercice.

Conclusion

Ces exercices apprennent les bases les plus importantes du debut en C.
Si tu suis les consignes avec precision et que tu testes a chaque etape, tu progresses vite et proprement.
