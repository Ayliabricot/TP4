#include<stdio.h>
#include<stdlib.h>
#include <malloc.h>
#include "head.h"


#include <time.h>

void sortInsert(struct Cell** head, struct Cell* cell) {
    if (*head == NULL) {
        *head = cell;
        return;
    }
    if ((*head)->value >= cell->value) {
        cell->next = *head;
        *head = cell;
        return;
    }
    sortInsert(&((*head)->next), cell);
}

void power2(struct Cell* list) {
    if (list == NULL) return;
    list->value = list->value * list->value;
    power2(list->next);
}

void freeList(struct Cell* list) {
    if (list == NULL) return;
    free(list);
    freeList(list->next);
}

void printList(struct Cell* list) {
    if (list == NULL) printf("\n");
    else {
        printf("%d ", list->value);
        printList(list);
    }
}

