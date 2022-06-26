#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


int main(void) {
Lista* l = Inicializa();
Lista* c = Inicializa();
  l = insere(l, 45);
  l = insere(l, 48);
  l = insere(l, 47);
  l = insere(l, 42);
  l = insere(l, 41);
  
  imprime(l);
  printf ("\n__________________\n");
  retira(l,45);
  imprime(l);
  
  //copiaL1toL2(&l,&c);
  printf ("\n__________________\n");
  //imprime(c);
  c = clopiaListatoL2(&l);
  imprime(c);
  }