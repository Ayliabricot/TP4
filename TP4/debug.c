#include<stdio.h>
#include<stdlib.h>
#include <malloc.h>
#include "head.h"

Cell* newCell(int value) {
    Cell* p = malloc(sizeof(Cell));
    if (p == NULL)
    {
        exit(2);
    }
    p->value = value;
    p->next = NULL;
    return p;
}

void sortInsert( Cell** head, Cell* cell) {
    if (*head == NULL) {
        *head = cell;
        cell->next = NULL;
        return;
    }
    else if ((*head)->value >= cell->value) {
        cell->next = *head;
        *head = cell;
        return;
    }
    sortInsert(&((*head)->next), cell);
}

void power2(Cell* list) {
    if (list == NULL)
    {
        return;
    }
    list->value = list->value * list->value;
    power2(list->next);
}

void freeList(Cell* list) {
    if (list == NULL)
    {
        return;
    }
   
    freeList(list->next); 
    
    free(list);
 
}

void printList(Cell* list) {
    if (list == NULL)
    {
        printf("\n");
        
    }
   
    printf("%d ", list->value);
    printList(list);
    
}

