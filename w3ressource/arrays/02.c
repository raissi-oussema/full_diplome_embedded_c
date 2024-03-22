#include <stdio.h>
/*insert 3 elemnets in tab then display them in reversed order*/
void main()
{
    int tab[3];
    for (int i=0; i<3; i++)
    {
        printf("Input the %d number : ",i);
        scanf("%d", &tab[i]);
    }
    for (int i=2; i>-1; i--){
        printf("tab[%d] = %d\n", i, tab[i]);
    }
}