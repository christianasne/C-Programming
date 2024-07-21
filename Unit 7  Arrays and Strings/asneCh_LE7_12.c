/*
============================================================================
FILE : asneCh_LE7_12.c
AUTHOR : Christian Andrie Asne
DESCRIPTION : A program that ask a string and determine how many vowels and consonants.
COPYRIGHT : created
============================================================================
*/
#include <stdio.h>
#include <string.h>
/*
============================================================================
FUNCTION : vowelCounter
DESCRIPTION : Check for the vowel character and count it
ARGUMENTS : char ch[]
RETURNS : int
===========================================================================
*/
int vowelCounter(char ch[])
{
    int i, vowel=0, consonant=0;
    for (i=0; ch[i]; i++)
    {
          if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U') //Check if the char is a vowel
          {
              vowel++; //increment vowel
          }
          else if ((ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] >= 'A' && ch[i] <= 'Z'))
          {
              consonant++; //increment consonant
          }

    }
    return vowel; //return vowel
}
/*
============================================================================
FUNCTION : consonantCounter
DESCRIPTION : Check for the consonant character and count it
ARGUMENTS : char ch[]
RETURNS : int
===========================================================================
*/
int consonantCounter(char ch[])
{
    int i, vowel=0, consonant=0;
    for (i=0; ch[i]; i++)
    {
          if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U') //Check if the char is a vowel
          {
              vowel++; //increment vowel
          }
          else if ((ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] >= 'A' && ch[i] <= 'Z')) //chech if consonant
          {
              consonant++; //increment consonant
          }
    }
    return consonant; //return consonant
}
/*
============================================================================
FUNCTION : main
DESCRIPTION : Execute the main program
ARGUMENTS : void
RETURNS : int - exit codes
===========================================================================
*/
int main() {
    // Write C code here
    char ch[1000]; ////declare size of string(1000)
    int i, vowel, consonant;
    printf("Enter a string: "); //display Enter a string
    gets(ch); //gets the ch input

    vowel = vowelCounter(ch); //call module vowelCounter and put the returned value here in vowel
    consonant = consonantCounter(ch); //call module consonantCounter and put the returned value here in consonant

    printf("The vowel is %d and the consonant is %d\n", vowel, consonant); //display the number of vowel and consonant

    return 0;
}
