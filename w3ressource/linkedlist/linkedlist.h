#ifndef LINKEDLIST_
#define LINKEDLIST_
#include <stdio.h>
struct Node
{
    int data;
    struct Node *next;
};

void insert(struct Node *head, int value);
void display(struct Node *head);
void insertATheMiddle(struct Node *head, struct Node *newNode);
struct Node *deleteFirstNode(struct Node *head);
struct Node *reverse(struct Node *head);
struct Node *insertATheBegining(struct Node *head, struct Node *newNode);
#endif 