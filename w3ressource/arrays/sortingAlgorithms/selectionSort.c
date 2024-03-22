#include <stdio.h>
void selectSort(int *tab, int n);
void swap(int *tab, int firstElementIndex, int secondElementIndex);
void main(){
    int tab[5] = {8, 9, 1, 3, 7};
    int sizeofTab = (sizeof(tab)/sizeof(tab[0]));
    selectSort(tab, sizeofTab);
    for (int i=0; i<sizeofTab; i++){
        printf("%d\n", tab[i]);
    }
}
void selectSort(int *tab, int n){
    for (int i=0; i<n; i++){
        int _minIndex = i;
        for (int j = i+1; j<n; j++){
            if (tab[j]<tab[_minIndex]){
                _minIndex = j;
            }
        }
        swap(tab, i, _minIndex);
    }
}
void swap(int *tab, int firstElementIndex, int secondElementIndex){
    int temp = tab[firstElementIndex];
    tab[firstElementIndex] = tab[secondElementIndex];
    tab[secondElementIndex] = temp;
}