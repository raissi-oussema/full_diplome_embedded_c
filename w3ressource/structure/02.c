/*
    \Define a structure named Time with members hours,
    \minutes, and seconds.Write a C program to input two times, 
    \add them, and display the result in proper time format.
*/
#include <stdio.h>

struct Time
{
    int hours  ;
    int minutes;
    int seconds;
};
void main()
{
    struct Time firstTime ;
    struct Time secondTime;
    struct Time totalTime ;
    
    printf("Enter Time 1 hours : ")  ;
    scanf("%d", &firstTime.hours)    ;
    printf("Enter Time 1 minutes : ");
    scanf("%d", &firstTime.minutes)  ;
    printf("Enter Time 1 seconds : ");
    scanf("%d", &firstTime.seconds)  ;

    printf("Enter Time 2 hours : ")  ;
    scanf("%d", &secondTime.hours)   ;
    printf("Enter Time 2 minutes : ");
    scanf("%d", &secondTime.minutes) ;
    printf("Enter Time 2 seconds : ");
    scanf("%d", &secondTime.seconds) ;

    totalTime.seconds = (firstTime.seconds + secondTime.seconds)%60 ;
    totalTime.minutes = ((firstTime.minutes + secondTime.minutes)+(totalTime.seconds/60))%60 ;
    totalTime.hours   = (firstTime.hours   + secondTime.hours)+(totalTime.minutes/60) ;

    printf("%d : %d : %d", totalTime.hours,totalTime.minutes, totalTime.seconds) ;

}


