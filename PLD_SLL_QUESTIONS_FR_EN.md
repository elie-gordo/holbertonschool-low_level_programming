# PLD Questions - C - Singly Linked Lists (FR + EN)

## 1) What is a singly linked list?

### EN
A singly linked list is a linear data structure made of nodes.  
Each node stores:
- data
- a pointer to the next node  

The last node points to `NULL`.

### FR
Une liste simplement chainee est une structure lineaire composee de noeuds.  
Chaque noeud contient :
- une donnee
- un pointeur vers le noeud suivant  

Le dernier noeud pointe vers `NULL`.

---

## 2) How do you initialize an empty singly linked list?

### EN
Create a head pointer and set it to `NULL`.  
That means the list is empty (no first node yet).

### FR
On cree un pointeur de tete (`head`) et on le met a `NULL`.  
Cela signifie que la liste est vide (aucun premier noeud).

---

## 3) What are the 3 logical steps to add a new node at the beginning?

### EN
1. Create/allocate the new node and fill its data.  
2. Make the new node point to the current head.  
3. Move head to this new node.

### FR
1. Creer/allouer le nouveau noeud et remplir sa donnee.  
2. Faire pointer ce nouveau noeud vers l ancienne tete.  
3. Mettre `head` sur ce nouveau noeud.

---

## 4) What are the 3 logical steps to add a new node at the end?

### EN
1. Create/allocate the new node, fill data, set `new->next = NULL`.  
2. If the list is empty, set `head = new`.  
3. Otherwise, traverse to the last node and link `last->next = new`.

### FR
1. Creer/allouer le nouveau noeud, remplir la donnee, mettre `new->next = NULL`.  
2. Si la liste est vide, faire `head = new`.  
3. Sinon, parcourir jusqu au dernier noeud et faire `last->next = new`.

---

## 5) Logical steps to delete a node at index 4 (list of 7 nodes, not first/last)

### EN
1. Traverse until the node just before index 4 (so stop at index 3).  
2. Keep a temporary pointer to node index 4, then bypass it: link index 3 directly to index 5.  
3. Free the removed node.

### FR
1. Parcourir la liste jusqu au noeud juste avant l index 4 (donc index 3).  
2. Garder un pointeur temporaire vers le noeud index 4, puis le sauter : relier index 3 directement a index 5.  
3. Liberer le noeud supprime.

---

## 6) Logical steps to add a new node at index 3 (list of 7 nodes, not start/end)

### EN
1. Traverse until the node just before index 3 (so stop at index 2).  
2. Set `new->next` to the current node at index 3.  
3. Set node at index 2 `->next` to `new`.

### FR
1. Parcourir la liste jusqu au noeud juste avant l index 3 (donc index 2).  
2. Faire pointer `new->next` vers l ancien noeud index 3.  
3. Faire pointer le noeud index 2 vers `new`.

---

## Quick reminder (EN + FR)

- EN: Always handle edge cases (empty list, invalid index, allocation failure).  
- FR: Toujours gerer les cas limites (liste vide, index invalide, echec d allocation).
