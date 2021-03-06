// checkPasswd2.c
// Question 2
// -20 for missing lowercase letters, lack of capital letters, missing numbers, and having more than 2 consecutive characters
//Kevin Gallardo

#include <stdio.h>
#include <string.h>

//added new criteria checking method
void checkCriteria(char *, int *);

const char* isPasswordSafe(int);

//main method
int main() {
        char enterPass[20];
        int deductions = 0;

        printf("Enter your password please: ");
        scanf("%s", &enterPass);

	//added new criteria checking method
        checkCriteria(enterPass, &deductions);

        printf("%s", isPasswordSafe(deductions));

        return 0;
}

//method checks to see if password is safe
const char* isPasswordSafe(int deductedPoints) {
        printf("Total Deductions: %d\n", deductedPoints);
        //The password is safe if less than 30 points are deducted
        //else password is unsafe
        return (deductedPoints > 30) ? "The password is unsafe! Please reset.\n" : "The password is safe.\n";
}

//method to check if pw meets these criterias
void checkCriteria(char *password, int *deduct) {
        char *p = password;
        int lowercaseNum = 0;
        int capitalNum = 0;
        int numbersNum = 0;
        int consecutiveNum = 0;
        char previousChar;
        int i = 0;

        //checking pw to so if it meets these criterias
        for (i; password[i] != '\0'; i++) {
                if (password[i] >= 'a' && password[i] <= 'z')
                        lowercaseNum++;
                if (password[i] >= 'A' && password[i] <= 'Z')
                        capitalNum++;
                if (password[i] >= '0' && password[i] <= '9')
                        numbersNum++;
		if (password[i] == previousChar)
                        consecutiveNum++;
                previousChar = password[i];

		
		}                
        //-20 for every missing lowercase letter
        if (lowercaseNum < 1)
                *deduct += 20;
        ///-20 for every missing capital letter
        if (capitalNum < 1)
                *deduct += 20;
        //-20 for every missing number
        if (numbersNum < 1)
                *deduct += 20;
        //-20 for more than 2 consecutive character
        if (consecutiveNum > 0)
                *deduct += 20;

}
