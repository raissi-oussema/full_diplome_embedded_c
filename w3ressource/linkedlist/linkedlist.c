#include <stdio.h>
#include "linkedlist.h"
#include <stdlib.h>

void insert(struct Node *head, int value)
{
    struct Node *curr = head;

    struct Node *_next = (struct Node*) malloc(sizeof(struct Node));

    if (_next == NULL) {
        printf("Memory allocation failed.\n");
        return ;
    }
    _next->data = value;
    _next->next = NULL;

    while (curr->next != NULL){
        curr = curr->next;
    }
    curr->next = _next;
    // printf("done \n ");
}
void display(struct Node *head){
    struct Node *curr = head;
    while (curr != NULL){
        printf("%d ",curr->data);
        curr = curr->next;
    }
    printf("\n");
}
struct Node *reverse(struct Node *head){
    struct Node *curr = head;
    struct Node *prev = NULL;
    while (curr != NULL){
        struct Node *_next = curr->next;
        curr->next = prev;
        prev = curr;
        curr =_next;
    }
    return prev;
}
struct Node *insertATheBegining(struct Node *head, struct Node *newNode){
    newNode->next = head;
    return newNode;
}
void insertATheMiddle(struct Node *head, struct Node *newNode){
    // using fastSlow pointer approche
    struct Node *firstPointer = head;
    struct Node *secondPointer = head->next; 
    while (secondPointer != NULL && secondPointer->next != NULL)
    {
        firstPointer = firstPointer -> next;
        secondPointer = secondPointer -> next -> next;
    }
    struct Node *_next = firstPointer -> next;
    newNode -> next = _next;
    firstPointer->next = newNode;
}
struct Node *deleteFirstNode(struct Node *head){
    if (head == NULL)
    {
        printf("NO node to delete !");
        return head;
    }
    struct Node *toDelete;
    toDelete = head;
    head = head->next;
    free(toDelete);
    return head;
}