/*
    Insert Node at the beginning
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
    struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
    if (newNode == NULL){
        printf("Allocation failed for new Node !");
        return;
    }
    newNode->data = 50;
    newNode->next = NULL;
    struct Node *newHead = insertATheBegining(head, newNode);
    display(newHead);

    free(head);
    free(newNode);
}