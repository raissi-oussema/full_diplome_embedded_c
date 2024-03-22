#include <stdio.h>
/* Write a C program that display the sutable message according to temperature state */
void main()
{
    /* Using if_else if _else statement*/
    int temerature_;
    printf("Input days temperature : ");
    scanf("%d", &temerature_);
    if (temerature_ < 0)
    {
        printf("Freazing weather");
    }
    else if (temerature_ < 10)
    {
        printf("Very Cold weather");
    }
    else if (temerature_ < 20)
    {
        printf("Cold weather");
    }
    else if (temerature_ < 30)
    {
        printf("Normal in Temp");
    }
    else if (temerature_ < 40)
    {
        printf("Its Hot");
    }
    else
    {
        printf("Its Very Hot");
    }

}