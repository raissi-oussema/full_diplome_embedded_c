#include <stdio.h>
/*insert 3 element in tab then copy tab_elemnets in copyTab*/
void main()
{
    int tab[3], copyTab[3];
    for (int i=0; i<3; i++)
    {
        printf("Input the %d number : ",i);
        scanf("%d", &tab[i]);
    }
    for (int i=0; i<3; i++){
        copyTab[i] = tab[i];
    }
    for (int i=0; i<3; i++){
        printf("copyTab[%d] = %d\n", i, copyTab[i]);
    }
}