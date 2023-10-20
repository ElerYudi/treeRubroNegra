#ifndef BST_H
#define BST_H

typedef enum { RED, BLACK } Color;

typedef struct node * link;
struct node {
  link l;
  link r;
  int item;
  int N;      // quantidade de nos na subarvore
  int id;     // id do nó
  int height; // altura da subárvore enraizada neste nó
  Color color; // Cor do nó (RED ou BLACK)
};

typedef struct tree {
  link head; // raiz
  link z;    // nó externo
} * Tree;

Tree createTree();

link rotR(Tree t, link h);

link rotL(Tree t, link h);

link search(Tree h, int query);

link insert(Tree h, int item);

link novoNo(int item, link l, link r); // Declaração da função

void imprimeEmOrdem(Tree t, link h);
void imprimePosOrdem(Tree t, link h);
void imprimePreOrdem(Tree t, link h, int k);

link AVLinsert(Tree t, link h, int item);

void imprime(Tree a, char *s);

#endif
