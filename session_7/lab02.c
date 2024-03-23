/*
    ALL rights reserved @oussema_RAISSI 2024 ☺☺☻
    Write a C program that calculate the summation of arr[5] using a pointer
    on its first element, and print all elemnts of array and print summationof them
*/
#include<stdio.h>
#include<stdlib.h>

#define TAB_SIZE 5

void main(){
    //int counter = 0;
    int sumOfArr = 0;

    /*int *tab = (int *) malloc (TAB_SIZE * sizeof(int));
    if (tab == NULL){
        printf("Memory allocation failed !");
        exit(EXIT_FAILURE);
    }
    printf("Enter tab elements, FYI tab size is 5 ! : \n");*/
    
    /*while (counter < TAB_SIZE)
    {
        scanf("%d", &tab[counter++]);
    }*/
    // Point to first element of tab also we can use tab directly
    int tab[TAB_SIZE] = {10, 20, 30, 40, 50};
    int *ptr = &tab[0];
    for (int i=0; i<TAB_SIZE; i++){
        printf("arr[%d] = %d\n", i, *ptr);
        sumOfArr += *ptr++;
    }
    printf("Summation = %d", sumOfArr);
    //free(tab);
}