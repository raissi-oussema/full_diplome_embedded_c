#include <stdio.h>
/* Write a C program that check if a given numpber is even or odd */
void main()
{
    /* Using ternary operators + switch case statement */
    int number_;
    printf("Input an Integer : ");
    scanf("%d", &number_);
    int res = (number_ % 2 == 0) ? 0 : 1;
    switch (res)
    {
    case 0:
        printf("%d is an even integer", number_);
        break;
    
    case 1:
        printf("%d is an odd integer", number_);
        break;
    }

}