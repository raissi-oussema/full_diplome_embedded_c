#include <stdio.h>
void main()
{
    printf("hello world \a");
    /*now we will check Escpace sequences*/
    printf("hello again_0 \t"); // horizonal tabulation (4* " ")
    printf("hello again_1 \v"); // vertical tabulation  (4* \n) not working
    printf("hello again_2 \a"); // make sound if we run .exe file with cmd (not terminal VScode)
    printf("hello again_3 \\ again_3\n"); // make "\"
    printf("hello_again_4_dummy\0hello_again_4");



}