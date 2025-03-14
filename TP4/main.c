

#include<stdio.h>
#include<stdlib.h>
#include <malloc.h>
#include "head.h"
#include <time.h>

#include <time.h>

int main() {
     Cell* list;
    int i, j;
    int valeur;
    srand(time(NULL));
    for (j = 0; j < 10; ++j) {
        for (i = 0; i < 10; ++i)
        {
            valeur = rand() % 23;
           
            Cell * cell = newCell(valeur);
            sortInsert(&list, cell);
        }
        printList(list);
        power2(list);
        printList(list);
        freeList(list);
        list = NULL;
    }
    return 0;
}