/*
============================================================================
FILE : LE8_12.c
AUTHOR : Arcenas, Asne
DESCRIPTION : A program which searches an element in array using pointers
and return the index location. The function accepts the starting address of
the array, number of entries and number to search.
============================================================================
*/
#include<stdio.h>
/*
============================================================================
FUNCTION : searchIndex
DESCRIPTION : Checks the entry numbers from the index and array
ARGUMENTS : int *numArr, int numberEntries, int numToSearch
RETURNS : int
===========================================================================
*/
int searchIndex(int *numArr, int numberEntries, int numToSearch)
{
    int i, index = -1; //Initialize int i, index = -1

    for (i=0; i < numberEntries && index < 0; i++)
    {
        if(*(numArr + i) == numToSearch) //Check condition
            index = i; //If True set index = i;
    }

    return index;
}
/*
============================================================================
FUNCTION : main
DESCRIPTION : Execute the main program
ARGUMENTS : void
RETURNS : int - exit codes
===========================================================================
*/
int main()
{
    int numberEntries, i , indexLocation, numSearched;

    printf("Enter number of Entries: "); //Display Enter number of Entries
    scanf("%d", &numberEntries); //Get and store in numberEntries

    int numArray[numberEntries]; //Initialize the size of numArray is equal to numberEntries

    for (i = 0; i < numberEntries; i++)
    {
        printf("Enter Number: "); //Display Enter Number
        scanf("%d", &numArray[i]); //Get and store in numArray[i]
    }

    printf("\nSearch Data: "); //Display Search Data
    scanf("%d", &numSearched);; //Get and store in numSearched

    indexLocation = searchIndex(numArray, numberEntries, numSearched); //Call module and store it return value in indexLocation
    if(indexLocation > 0)
    {
        printf("\nFOUND in Index %d\n", indexLocation); //If True Display Found in Index, indexLocation
    }
    else
    {
        printf("NOT FOUND\n"); //Else display Not Found
    }
    return 0;
}
