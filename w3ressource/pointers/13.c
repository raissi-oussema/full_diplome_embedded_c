/*
    calculate voyels and consanants in a given string
*/
#include <stdio.h>
#include <stdlib.h>
struct Alphabet
{
    char letter;
    int isVowels;
};

int isVowel(char *ch, struct Alphabet Alphabet[]){
    for (int i=0; i<26; i++){
        if(Alphabet[i].letter == *ch || Alphabet[i].letter == (*ch-32)){ // to handle lowercases but can generates problems in case invalid inputs !
            //printf("%c",(*ch-32));
            return Alphabet[i].isVowels;
        }
    }
    return 0;
};
void main(){

    struct Alphabet Alphabet[] = {
        {'A', 1}, {'B', 0}, {'C', 0}, {'D', 0}, 
        {'E', 1}, {'F', 0},{'G', 0}, {'H', 0}, 
        {'I', 1}, {'J', 0}, {'K', 0}, {'L', 0},
        {'M', 0}, {'N', 0}, {'O', 1}, {'P', 0}, 
        {'Q', 0}, {'R', 0},{'S', 0}, {'T', 0}, 
        {'U', 1}, {'V', 0}, {'W', 0}, {'X', 0},
        {'Y', 0}, {'Z', 0}
    };
    char temp;
    int counter = 0;
    char *ptr = (char*) malloc (sizeof(char));
    printf("Enter your string : ");
    while ((temp = getchar()) != '\n')
    {
        ptr[counter] = temp;
        counter++;
        ptr = (char*) realloc (ptr, (counter+1) * sizeof(char));
    }
    ptr[counter] = '\0'; 
    int vowelCount = 0;
    int constCount = 0;
    char *current = ptr;
    while (*current != '\0'){
        // printf("%c", *current);
        if (isVowel(current, Alphabet)) {
            vowelCount++;
        }
        else{
            constCount++;
        }
        current++;
    }
    
    printf("Nummber of voewel detected is : %d\n", vowelCount);
    printf("Nummber of consonants detected is : %d\n", constCount);
    free(ptr);
}
