#include <stdio.h>
#include "bst.h"

int main () {
  Tree t = createTree();
  link x;
  insert(t, 99);
  imprime(t, "oi");
  insert(t, 33);
  imprime(t, "oi");
  insert(t, 55);
  imprime(t, "oi");
  insert(t, 77);
  imprime(t, "oi");
  insert(t, 66);
  imprime(t, "oi");
  insert(t, 44);
  imprime(t, "oi");
  insert(t, 88);
  imprime(t, "oi");


  
  return 0;
}
