#ifndef DEQUE_H
#define DEQUE_H

struct palavra{
    char palavrapa[30];
};
typedef struct Deque Deque;
int insereIn(Deque* dq, struct palavra pal);
Deque* cria_Deque();
int ehSimetrica(Deque* dq);

#endif  