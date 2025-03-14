#ifndef TP4
#define TP4

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct  {
    int value;
    struct Cell* next;
}Cell;

Cell* newCell(int value);
void sortInsert( Cell** head,Cell* cell);
void power2( Cell* list);
void freeList( Cell* list);
void printList( Cell* list);

#endif
