#include<stdio.h>
#include<stdlib.h>
#include <malloc.h>
#include "header.h"

      Cell* newCell(int value)
    {
        
          Cell* p = malloc(sizeof(  Cell)); // on met bien la valeur de la taille et non le nom du  
        if (p == NULL) {
            exit(2);
        }
        p->value = value;
       
        p->next = NULL; // on initialise à NULL l'élément suivant
        return p;
    }

    void sortInsert(  Cell** head,   Cell* cell)
    {
        if ((*head) == NULL)
        {
            *head = cell;
           
            cell->next = NULL; // on initialise à NULL l'élément suivant
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

void power2(  Cell* list) {
    if (list == NULL) return;
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

    void printList(  Cell* list)
    {
        if (list == NULL)
            printf("\n");
        else
        {
            printf("%d ", list->value);
            
            printList(list->next); // on veut afficher la valeur d'après et non toujours la première valeur (ce qui entraîne une boucle infinie)
        }
    }