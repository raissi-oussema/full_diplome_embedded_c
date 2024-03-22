/*
    Print linkedlist nodes in reversed order.
*/
#include <stdio.h>
#include "linkedlist.h"
#include <stdlib.h>

void main()
{
    struct Node *head = (struct Node*) malloc (sizeof(struct Node));
    if (head == NULL){
        printf("Allocation failed !");
        return;
    }
    head->data = 0;
    head->next = NULL;
    insert(head, 10);
    insert(head, 20);
    insert(head, 23);
    display(head);
    struct Node *headEOFlinkedList = reverse(head);
    display(headEOFlinkedList);

    free(head);
}