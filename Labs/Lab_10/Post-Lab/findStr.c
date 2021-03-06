#include<stdio.h>
#include<string.h>
#include<stdbool.h>

// Name: findStr.c
// purpose: finds the "smallest" and "largest" in a series of words
// Author: Kevin Gallardo

int main(){
    char input[20];
    char largest_word[20];
    char smallest_word[20];

    bool canEnterWord = true;

    while(canEnterWord){
        printf("Enter Word: ");
        scanf("%s", input);
        if(strlen(input) == 4){
            canEnterWord = false;
        }
        if(smallest_word[0] == '\0'){
            strcpy(smallest_word, input);
        }
        if(strcmp(input, smallest_word) <= 0){
            strcpy(smallest_word, input);
        }
        if(strcmp(input, largest_word) >= 0){
            strcpy(largest_word, input);
        }
    }
    printf("Smallest Word: %s\n", smallest_word);
    printf("Largest Word: %s\n", largest_word);
}
