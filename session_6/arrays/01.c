/*  
    1.Insert 10 elemnets AND store them in an array 
    2.Display them in reversed order
    3.calculate average and summation
*/
#include <stdio.h>
#define TAB_SIZE    10

void main()
{
    int tab[TAB_SIZE];
    int sumOfElemnts = 0;
    float averageOfArray = 0;

    for (int i=0; i<TAB_SIZE; i++)
    {
        printf("Enter number %d : ", i);
        scanf("%d", &tab[i]);
    }

    printf("The value of array in the reversed order : \n");

    for (int i=(TAB_SIZE-1); i>-1; i--)
    {
        sumOfElemnts+=tab[i];
        printf("array[%d] = %d\n", i, tab[i]);
    }

    printf("The sum of all tab elements is %d \n", sumOfElemnts);
    printf("The average of the array is  %.2f \n", (sumOfElemnts/(float)TAB_SIZE));
}