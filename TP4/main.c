#include "header.h"

int main() {
    srand(time(NULL));
    Cell** list = malloc(sizeof( Cell));
    *list = NULL;
    int i, j;
    for (j = 0; j < 10; j++) {
        for (i = 0; i < 10; i++) {
            sortInsert(list, newCell(rand() % 23));
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