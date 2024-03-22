#include <stdio.h>
#include "linkedlist.h"
#include <stdlib.h>
void main()
{
    struct Node *head = (struct Node *) malloc (sizeof(struct Node));
    if (head == NULL) {
        printf("Memory allocation failed.\n");
        return ;
    }

    head->next = NULL;
    head->data = 0;

    insert(head, 20);
    insert(head, 10);
    insert(head, 50);
    display(head);

    free(head);
}