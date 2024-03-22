#include <stdio.h>
/*insert 10 elemnets in tab then display them*/
void main()
{
    int tab[10];
    for (int i=0; i<3; i++)
    {
        printf("Input the %d number : ",i);
        scanf("%d", &tab[i]);
    }
    for (int i=0; i<10; i++){
        printf("tab[%d] = %d\n", i, tab[i]);
    }
}