#include "header.h"

int main() {
    srand(time(NULL));
    struct Cell** list = malloc(sizeof(struct Cell));
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
}
