# holbertonschool-low_level_programming

Ce depot contient mes projets C bas niveau. Pour l instant:
- `hello_world`
- `variables_if_else_while`

## Workflow utilise sur les exercices

1. Lire l enonce strictement.
2. Creer/modifier uniquement le fichier demande.
3. Compiler avec les flags imposes.
4. Tester la sortie.
5. Verifier Betty et Betty-doc.
6. Commit puis push.

## Commandes de travail utilisees

```bash
# exploration
ls -la
rg --files
sed -n '1,200p' <fichier>

# compilation/test
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <fichier>.c -o /tmp/<prog>
/tmp/<prog>

# style
betty <fichier>.c
betty-doc <fichier>.c

# git
git status --short
git add <fichier>
git commit -m "<message>"
git push origin main
```
