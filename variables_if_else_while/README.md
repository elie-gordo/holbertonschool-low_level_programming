Variables, if, else, while - Introduction aux conditions et boucles en C

Ce dossier contient les exercices du projet 2 pour pratiquer les variables, les conditions et les boucles.
L objectif est d ecrire des programmes simples en respectant strictement les contraintes de chaque enonce.

Exercice 0 - Positive anything is better than negative nothing

On complete un programme qui genere un nombre aleatoire et on affiche s il est positif, negatif ou nul.
Il faut garder le code impose pour la generation du nombre.

A retenir:
Une condition doit couvrir tous les cas: positif, zero et negatif.
Le format de sortie doit etre exact.

Exercice 1 - The last digit

On affiche le dernier chiffre d un nombre aleatoire et un message selon sa valeur.
Le message change si le dernier chiffre est superieur a 5, egal a 0, ou inferieur a 6 et non nul.

A retenir:
Le dernier chiffre se recupere avec l operateur modulo.
Il faut respecter exactement les phrases demandees.

Exercice 2 - I sometimes suffer from insomnia. And when I can t fall asleep, I play what I call the alphabet game

On affiche l alphabet en minuscules, puis une nouvelle ligne.
Seule la fonction putchar est autorisee, avec une limite sur son utilisation dans le code.

A retenir:
Une boucle permet d afficher une suite de caracteres proprement.
Il faut respecter les restrictions de fonctions.

Exercice 3 - alphABET

On affiche d abord l alphabet en minuscules puis en majuscules, puis une nouvelle ligne.
Toujours avec putchar uniquement.

A retenir:
On peut enchainer deux boucles pour deux plages de caracteres.
Le nombre d appels a putchar dans le code est controle.

Exercice 4 - When I was having that alphabet soup, I never thought that it would pay off

On affiche l alphabet en minuscules sans les lettres e et q.
Le programme doit rester simple et respecter les contraintes de l enonce.

A retenir:
Un if dans la boucle permet d exclure certains caracteres.
La sortie doit etre exacte.

Exercice 5 - Numbers

On affiche tous les chiffres de 0 a 9, suivis d une nouvelle ligne.
Tout le code doit etre dans main.

A retenir:
Les boucles sont la base pour afficher des sequences numeriques.
Il faut bien terminer par un retour a la ligne.

Exercice 6 - Numberz

On affiche aussi les chiffres de 0 a 9, mais avec des contraintes supplementaires.
On n a pas le droit d utiliser de variable de type char, et seule putchar est autorisee.

A retenir:
On peut convertir un entier en caractere avec + '0'.
Les contraintes de type doivent etre respectees strictement.

Exercice 7 - Smile in the mirror

On affiche l alphabet en minuscules dans l ordre inverse.
Toujours avec putchar uniquement et dans main.

A retenir:
Une boucle decroissante permet d inverser l ordre d affichage.
Le resultat attendu doit etre exact caractere par caractere.

Exercice 8 - Hexadecimal

On affiche tous les caracteres de base 16 en minuscules: 0 a 9 puis a a f.
On termine par une nouvelle ligne.

A retenir:
On combine une boucle pour les chiffres et une boucle pour les lettres.
Le format de sortie ne doit contenir aucun separateur.

Exercice 9 - Patience, persistence and perspiration make an unbeatable combination for success

On affiche toutes les combinaisons de chiffres simples de 0 a 9, separees par virgule et espace.
Le dernier chiffre ne doit pas etre suivi de separateur.

A retenir:
Il faut gerer le cas final pour eviter une virgule en trop.
L ordre d affichage doit etre croissant.

Methode simple pour reussir tous les exercices

1. Lire l enonce entier avant de coder.
2. Respecter exactement le nom de fichier demande.
3. Respecter strictement les fonctions autorisees et interdites.
4. Compiler avec les flags du projet.
5. Verifier le style Betty et la documentation Betty.
6. Faire un commit et un push apres chaque exercice.

Conclusion

Ce projet renforce les bases en C sur les conditions, les boucles et la rigueur.
Si tu appliques les contraintes a la lettre et que tu testes chaque fichier, tu avances vite et proprement.
