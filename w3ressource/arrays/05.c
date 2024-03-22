#include <stdio.h>
/*Write a program in C to count the total number of duplicate elements in an array.*/
void main()
{
    int tab[7] = {1,2,1,2,3,4,5};
    int res_ = 0;
    for (int i=0; i<7; i++){
        for (int j=i+1; j<7; j++){
            // printf("%d\t %d\n",tab[i], tab[j]);
            if (tab[j] == tab[i]){
                res_ += 1;
            }
        }
    }
    printf("Total number of duplicate elements found in the array is %d", res_);
}