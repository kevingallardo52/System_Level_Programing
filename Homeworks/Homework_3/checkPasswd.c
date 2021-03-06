// checkPasswd.c
// Question 1
//
// checks if the length of a given password string is 10 characters or not.
// deduct 5 points per missing character if deductions are > 30 print not safe. else it is safe
//Kevin Gallardo

#include <stdio.h>
#include <string.h>

void checkLength(char *, int *);
const char* isPasswordSafe(int);

//main method
int main() {
        char enterPass[20];
        int deductions = 0;

        printf("Enter your password please: ");
        scanf("%s", &enterPass);

        checkLength(enterPass, &deductions);
        printf("%s", isPasswordSafe(deductions));

        return 0;
}

//method that checks if password length is less than 10

void checkLength(char *password, int *deduct) {
        if ((int) strlen(password) < 10) {
                //deducts 5 points for every missing character 
                *deduct += (10 - ((int) strlen(password))) * 5;
        }
}

//method checks to see if password is safe

const char* isPasswordSafe(int deductedPoints) {
        printf("Total Deductions: %d\n", deductedPoints);
        //The password is safe if less than 30 points are deducted
        //else password is unsafe
        return (deductedPoints > 30) ? "The password is unsafe! Please reset.\n" : "The password is safe.\n";
}