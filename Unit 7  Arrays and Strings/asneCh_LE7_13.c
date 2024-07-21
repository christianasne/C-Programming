/*
============================================================================
FILE : asneCh_LE7_13.c
AUTHOR : Christian Andrie Asne
DESCRIPTION : Ask for 5 strings and display the longest string.
COPYRIGHT : created
============================================================================
*/
#include <stdio.h>
#include <string.h>
/*
============================================================================
FUNCTION : longString
DESCRIPTION : Check for the longest string in the input
ARGUMENTS : char input[]
RETURNS : int
===========================================================================
*/
int longString(char input[][1000])
{
    int i, length, longest, max = 0;

    for (i=0; i<5; i++)
    {
        length = strlen(input[i]); //strlen is use to count the size of words inputed, after that put it on length
        if(length > max) // check if length is longer than the current max value
        {
            max = length; //update the new max value
            longest = i; //store the longest number of the input
        }
        else
        {

        }
    }
    return longest; //return the number of the longest input
}
    /*
    ============================================================================
    FUNCTION : main
    DESCRIPTION : Prints out if the input is a vowel, consonant, or not a letter
    ARGUMENTS : void
    RETURNS : int
    ===========================================================================
    */
int main(){

    char input[5][1000]; //declare number of string(5) and the size of each string(1000)
    int i, longest;

    for(i = 0; i < 5; i++)
    {
        printf("Enter string #%d: ", i+1); //display Enter string %d (the number of current i+1)
        gets(input[i]); //gets the entire current input

        longest = longString(input); //call module longString and put the returned value here in longest
    }
    printf("The longest string is: "); //display the longest string is
    puts(input[longest]);//display the longest inputed word or string
    return 0;
}
