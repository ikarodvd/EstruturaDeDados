#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

Lista *Inicializa() { // inicializa uma lista vazia
  Lista* l = (Lista*) malloc(sizeof(Lista));
  if (l != NULL){
    l = NULL;
  }
 
}
typedef struct aux {
    int num;
    struct estr *prox;
} no;

Lista* clopiaListatoL2(Lista* l){
  Lista* clone = malloc(sizeof(Lista)); 
  no *at = l->info;
  no *anterior = NULL; 
  while(at){
    no *novo = (no*)malloc(sizeof(no));
    novo->num= at->num;
    novo->prox = NULL;
    if (anterior == NULL){ 
        clone->info = novo;
    }else { 
        anterior->prox = at;
    }
    anterior = novo;
    at = at->prox;
  }
  return clone;
}

Lista* cria(int v){
  Lista* p = (Lista*) malloc (sizeof(Lista));
  p -> info = v;
  return p;
} 

Lista* insere(Lista* l, int v){
  Lista* novo = cria(v);
  Lista* ant = NULL;
  Lista* p = l;
  while(p!=NULL && p->info<v){
    ant = p;
    p = p->prox;
  }
  if (ant == NULL){
    novo ->prox = l;
    l=novo;
  }else{
    novo ->prox = ant ->prox;
    ant -> prox= novo;
    
  }
  return l;
}
void imprime(Lista *l) { // impprime lista
  Lista *p;
  for (p = l; p != NULL; p = p->prox) {
    printf("%d\n", p->info);
  }
}

int vazia(Lista *l) { // verifica se a lista está vazia
  return (l == NULL);
}

Lista *busca(Lista *l, int v) {
  Lista *p;
  for (p = l; p != NULL; p = p->prox) {
    if (p->info == v) {
      return p; // elemento encontrado
    } else {
      return NULL; // elemento não encontrado
    }
  }
}
Lista* retira(Lista* l, int v){
  Lista* ant = NULL;
  Lista* p = l;
  while(p!=NULL && p ->info != v){
    ant = p;
    p = p -> prox;
  }
  //se achou o elemento
  if (p == NULL){
    return l; // se nao achou retorna a lista original
  }
  if (ant == NULL){ // se encontrou retira elemento
    l = p->prox;
  }else{
    ant -> prox = p->prox; //remove do meio da lista
  }
  free(p);
  return l;
}

