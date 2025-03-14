#ifndef TP4
#define TP4

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct Cell {
    int value;
    struct Cell* next;
};

struct Cell* newCell(int value);
void sortInsert(struct Cell** head, struct Cell* cell);
void power2(struct Cell* list);
void freeList(struct Cell* list);
void printList(struct Cell* list);

#endif
