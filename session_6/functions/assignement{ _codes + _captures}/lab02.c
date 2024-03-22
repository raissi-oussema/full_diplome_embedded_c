/* Pyramid of stars */
#include <stdio.h>

void printSpaces(int weight, int currentRow);
void printStars(int currentRow);

void main(){
    int weight=5;
    for (int i=0; i<=weight; i++)
    {
        printSpaces(weight, i);
        printStars(i);
    }
}
void printStars(int currentRow)
{
    for (int i=1; i<2*currentRow; i++)
    {
        printf("*");
    }
    printf("\n");
}
void printSpaces(int weight, int currentRow)
{
    for (int i=1; i<(weight-currentRow)+1; i++)
    {
        printf(" ");
    }
}