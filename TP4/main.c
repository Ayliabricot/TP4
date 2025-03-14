#include "header.h"


#include<stdio.h>
#include<stdlib.h>
#include <malloc.h>
#include "head.h"
#include <time.h>

#include <time.h>

int main() {
    srand(time(NULL));
      Cell** list = malloc(sizeof(  Cell));
    *list = NULL;
    int i, j, value;
    for (j = 0; j < 10; j++) {
        for (i = 0; i < 10; i++) {
            value = rand() % 23;
            sortInsert(list, newCell(value));
        }
        printList(*list);
        power2(*list);
        printList(*list);
        freeList(*list);
        free(list);
        list = NULL;
    }
    return 0;
}
