/*
============================================================================
FILE : asneCh_LE4_11.extension
AUTHOR : christian andrie asne
DESCRIPTION : program that identify if the inputed letter is vowel, consonant or not a letter
COPYRIGHT : created
REVISION HISTORY
Date: By: Description:
revision date author description of the change
revision date author description of the change
.
.
.
revision date author description of the change
============================================================================
*/
#include <stdio.h>

int main() {
    // Write C code here
    char letter; //assign variable for the input
    printf("Enter letter: "); //display enter letter
    scanf("%c", &letter); //input user's letter

    if (letter == 'A' || letter == 'a' || letter == 'E' || letter == 'e' || letter == 'I' || letter == 'i' || letter == 'O' || letter == 'o' || letter == 'U' || letter == 'u') //test if letter is vowel reagarding upper or lowercase
    {
     printf("Vowel Letter:\n"); //display Vowel Letter
    }
    else if (letter >= 'a' && letter <= 'z' || letter >= 'A' && letter <= 'Z') //test if letter is consonant, assign equation to the inputed letters within the range of the alphabet if the inputed letter is within the range of alphabet it is then consonant. No vowel letter will be display because all vowel input will be true in the above expression.
    {
    printf("Consonant Letter:\n");//display Consonant Letter
    }
    else
    {
    printf("Invalid Input:\n"); //display Invalid Input
    }
    return 0;
}
