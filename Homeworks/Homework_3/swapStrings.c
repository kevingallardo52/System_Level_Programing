//swapStrings.c
//Kevin Gallardo
//This program swaps 2 variables without the use of a 3rd
//it is then utilized in swapSentence  and swap all numbers in one
// with letters in the other and vise versa
//variables must be of same length 

#include<stdio.h>
#include<string.h>

#define MAXIMUM 256

void swapSentence(char *, char *);

int main(){

    char string1[MAXIMUM];
    char string2[MAXIMUM];

    //get strings
    printf("Enter string 1: ");
    fgets(string1, MAXIMUM, stdin);

    printf("Enter string 2: ");
    fgets(string2, MAXIMUM, stdin);

    //checks to be sure strings are same length
    if(strlen(string1) != strlen(string2)) {
        printf("Strings must be same length\n");
        return 0;
    }
    //print strings before being swapped
    printf("before swap:\n");
    printf("String 1: %s", string1);
    printf("String 2: %s", string2);

    swapSentence(string1, string2);

    //print strings after swap
    printf("after swap:\n");
    printf("String 1: %s\n", string1);
    printf("String 2: %s\n", string2);

    return 0;
}

//method to swap strings
void swapSentence(char *str1, char *str2){


    int i = 0;
    while(str1[i] != '\0'){
        if(((str1[i] >= '0' && str1[i] <= '9') && (str2[i] >= 'A' && str2[i] <= 'z')) 
        || ((str2[i] >= '0' && str2[i] <= '9') && (str1[i] >= 'A' && str1[i] <= 'z'))) {
            str1[i] = str1[i] + str2[i];
            str2[i] = str1[i] - str2[i];
            str1[i] = str1[i] - str2[i];
        } else {
            str1[i] = ' ';
            str2[i] = ' ';
        }
        i++;
    }

    str1[i] = '\0';
    str2[i] = '\0';
}