#include <stdio.h>
#include <stdlib.h>
#include "deque.h"
int main(){
    struct palavra pal,
    pal1;
    Deque* dq = cria_Deque();
    printf ("Informe a palavra para verificar se eh palindroma: \n");
    scanf ("%s", &pal1.palavrapa);
    insereIn(dq,pal1);
    int x = ehSimetrica(dq);
    if (x == 0){ 
      printf("\nnao eh simetrica\n");
    }
    if (x == 1){
      printf ("\neh simetrica\n");
    }
    return 0;
}
