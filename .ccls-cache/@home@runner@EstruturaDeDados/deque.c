#include <stdio.h>
#include <stdlib.h>
#include "deque.h" 
struct elemento{
    struct elemento *ant;
    struct palavra dados;
    struct elemento *prox;
};
typedef struct elemento Elem;
struct Deque{
    struct elemento *inicio;
    struct elemento *final;
    int qtd;
};
Deque* cria_Deque(){
    Deque* dq = (Deque*) malloc(sizeof(Deque));
    if(dq != NULL){
        dq->final = NULL;
        dq->inicio = NULL;
        dq->qtd = 0;
    }
    return dq;
}
int insereInicio_Deque(Deque* dq, struct palavra pal){
    if(dq == NULL){
        return 0;
      }
    Elem *no = (Elem*) malloc(sizeof(Elem));
    if(no == NULL){
        return 0;
      }
    no->dados = pal;
    no->prox = dq->inicio;
    no->ant = NULL;
    if(dq->inicio == NULL){
        dq->final = no;
      }else{
        dq->inicio->ant = no;
      }
    dq->inicio = no;
    dq->qtd++;
    return 1;
}
int consultaInicio_Deque(Deque* dq, struct palavra *pal){
    if(dq == NULL){
        return 0;
      }
    if(dq->inicio == NULL){
        return 0;
      }
    *pal = dq->inicio->dados;
    return 1;
}
int ehSimetrica(Deque* dq){ 
    Elem* no = dq->inicio;
    int i;
    int palavraDif = 0;
    int tama = strlen(no->dados.palavrapa);
    tama--;
    i = 0;
    while(tama >= i){
        if(no->dados.palavrapa[i] != no->dados.palavrapa[tama]) 
            palavraDif ++;
        i++;
        tama--;
    }
    if(palavraDif == 0){
      return 1;  
      }else{
        return 0;
      }
}