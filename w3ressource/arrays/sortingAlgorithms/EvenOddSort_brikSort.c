# include <stdio.h>

void brikSort(int arr[], int n);

int main()
{
    int arr[5]={1, 2, 8, 15, 7};
    int sizeOfArray = (sizeof(arr) / sizeof(arr)[0]);
    int *ptr = arr;
    brikSort(ptr, sizeOfArray);
    for (int i=0; i<sizeOfArray; i++){
        printf("%d\n", ptr[i]);
    }
    return 0;
}
void brikSort(int *arr, int sizeOfArray)
{
    int _isSorted = 0;
    while (_isSorted == 0)
    {
        _isSorted = 1;
        for (int i=0; i<sizeOfArray-1; i+=2){
            if (arr[i+1] < arr[i]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                _isSorted = 0;
            }
        }
        for (int i=1; i<sizeOfArray-1; i+=2){
            if (arr[i+1] < arr[i]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                _isSorted = 0;
            }
        }
    }
    
}