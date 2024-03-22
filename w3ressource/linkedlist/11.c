/*
    Convert a list into a string and print it
*/
#include <stdio.h>
#include "linkedlist.h"
#include <stdlib.h>

void main()
{
    int counter = 0;
    int length;
    int value;

    
    struct Node *head = (struct Node*) malloc (sizeof(struct Node));
    struct Node *current = head;
    head ->data = 0;
    head->next = NULL;
    
    printf("Enter the linked list length : ");
    scanf("%d", &length);
    while (counter < length){
        printf("Enter the %d node value : ", counter);
        scanf("%d", &value);
        counter++;

        struct Node *newNode = (struct Node*) malloc (sizeof(struct Node));
        if (newNode == NULL){
            printf("Failde to allocate memory for new Node !");
        }

        newNode -> data = value;
        newNode ->next = NULL;

        current->next = newNode;
        current = current->next;
    }

    char *string = (char *) malloc((length + 1) * sizeof(char));
    //deleteFirstNode(head);

    //struct Node *curr = head->next;
    current = head->next;
    int i=0;

    while (current != NULL){
        string[i] = (char) (current->data);
        current = current->next;
        ++i;
    }
    string[i] = '\0';

    printf("Output string is : \n");
    for (int i=0; i<length; i++){
        printf("%d ", string[i]);
    }
}