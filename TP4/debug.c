#include "header.h"

struct Cell* newCell(int value)
{
    struct Cell* p = malloc(sizeof(struct Cell)); // on met bien la valeur de la taille et non le nom du struct
    if (p == NULL) {
        exit(2);
    }
    p->value = value;
    p->next = NULL; // on initialise � NULL l'�l�ment suivant
    return p;
}

void sortInsert(struct Cell** head, struct Cell* cell)
{
    if ((*head) == NULL)
    {
        *head = cell;
        cell->next = NULL; // on initialise � NULL l'�l�ment suivant
        return;
    }
    if ((*head)->value >= cell->value)
    {
        cell->next = *head;
        *head = cell;
        return;
    }
    sortInsert(&((*head)->next), cell);
}

void power2(struct Cell* list)
{
    if (list == NULL)
        return;
    list->value = list->value * list->value;
    power2(list->next);
}

void freeList(struct Cell* list)
{
    if (list == NULL)
        return;
    freeList(list->next);
    free(list);
}

void printList(struct Cell* list)
{
    if (list == NULL)
        printf("\n");
    else
    {
        printf("%d ", list->value);
        printList(list->next); // on veut afficher la valeur d'apr�s et non toujours la premi�re valeur (ce qui entra�ne une boucle infinie)
    }
}