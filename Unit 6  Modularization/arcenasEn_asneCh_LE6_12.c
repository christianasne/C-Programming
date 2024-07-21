/*
    ============================================================================
    FILE : LE6.12.c
    AUTHOR : Arcenas, Asne
    DESCRIPTION : Determines whether the letter is vowel or consonant (or not a letter)
    COPYRIGHT : created
    ============================================================================
    */
#include <stdio.h>
#include <stdbool.h>
    /*
    ============================================================================
    FUNCTION : isLetter
    DESCRIPTION : Checks if the input is a letter or not
    ARGUMENTS : char ch
    RETURNS : bool
    ===========================================================================
    */
bool isLetter(char ch) //Checks if the character is a letter
{
        bool result;
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        result = 1; //It's a letter
    }
    else
    {
        result = 0; // It's not a letter
    }
    return result;
}
    /*
    ============================================================================
    FUNCTION : isVowel
    DESCRIPTION : Checks if the letter is vowel or not
    ARGUMENTS : char ch
    RETURNS : bool
    ===========================================================================
    */
bool isVowel(char ch)
{
    bool result;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') //Check if the char is a vowel
    {
    result = 1; //It's a vowel
    }
    else
    {
    result = 0; //It's a consonant
    }
    return result;
}
    /*
    ============================================================================
    FUNCTION : main
    DESCRIPTION : Prints out if the input is a vowel, consonant, or not a letter
    ARGUMENTS : void
    RETURNS : int
    ===========================================================================
    */
int main()
{
    char ch;
    bool letter, vowel;

    printf("Enter a letter: "); // Prompt the user to input a character
    scanf("%c", &ch); // input

    letter = isLetter(ch);
    vowel = isVowel(ch);
    if (letter == 1)
    {
        if (vowel == 1)
        {
            printf("VOWEL\n"); // If letter is Vowel, print
        }
        else
        {
            printf("CONSONANT\n"); // If letter is Consonant, print
        }
    }
    else
    {
        printf("INVALID INPUT!\n"); // If not a letter, print
    }

    return 0; //closes the program
}
