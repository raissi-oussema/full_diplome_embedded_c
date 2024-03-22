#include <stdio.h>
/*To show bool output of the compiler (0 and 1)*/
void main(){
    int HOURS_ ;
    int SALARY ;
    printf("Enter the working hours :\t");
    scanf ("%d", &HOURS_);
    SALARY = 100*HOURS_;

    if (HOURS_ < 40)
    {
        SALARY -= (HOURS_*0.2*100);
    }
    printf("The salary is %d\n",SALARY);
}