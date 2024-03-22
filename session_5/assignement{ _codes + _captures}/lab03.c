#include <stdio.h>
void main()
{
    int PHYSICS_GRADE, CHEMESTRY_GRADE, BIOLOGY_GRADE, MATHEMATICS_GRADE, PROGRAMMING_GRADE;
    printf("Please Enter Physics Grade       : ");
    scanf("%d",&PHYSICS_GRADE);
    printf("Please Enter Chemistry Grade     : ");
    scanf("%d",&CHEMESTRY_GRADE);
    printf("Please Enter Biology Grade       : ");
    scanf("%d",&BIOLOGY_GRADE);
    printf("Please Enter Mathematic Grade    : ");
    scanf("%d",&MATHEMATICS_GRADE);
    printf("Please Enter Programming Grade   : ");
    scanf("%d",&PROGRAMMING_GRADE);
    
    int GRADE = PHYSICS_GRADE + CHEMESTRY_GRADE + BIOLOGY_GRADE + MATHEMATICS_GRADE + PROGRAMMING_GRADE;
    char CHAR_GRADE;
    int PERCENTAGE = GRADE*0.2;
    
    if (PERCENTAGE < 40){CHAR_GRADE = 'F';}
    else if (GRADE<60){CHAR_GRADE = 'E';}
    else if (GRADE<70){CHAR_GRADE = 'D';}
    else if (GRADE<80){CHAR_GRADE = 'C';}
    else if (GRADE<90){CHAR_GRADE = 'B';}
    else {CHAR_GRADE = 'A';}

    printf("Your Grade is -->   %d\nYour Perscentage -> %d%%\n", GRADE, PERCENTAGE);
    printf("Your Grade is -->   %c\n", CHAR_GRADE);
}