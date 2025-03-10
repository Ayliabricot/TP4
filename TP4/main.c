#include "header.h"

int main() {
    struct Cell* list;
    int i, j;
    for (j = 0; j < 10; ++j) {
        for (i = 0; i < 10; ++i)
            sortInsert(&list, newCell(random() % 23));
        printList(list);
        power2(list);
        printList(list);
        freeList(list);
        list = NULL;
    }

    return 0;
}