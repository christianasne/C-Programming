/*
============================================================================
FILE : LE8_13.c
AUTHOR : Arcenas, Asne
DESCRIPTION : A program that determine and returns the maximum number in an
array of integers using pointers. The function accepts the starting address
of the array and number of entries.
============================================================================
*/
#include<stdio.h>
/*
============================================================================
FUNCTION : greatestNum
DESCRIPTION : Checks for the greatest number from the input
ARGUMENTS : int *numArray, int inputNum
RETURNS : int
===========================================================================
*/
int greatestNum(int *numArray, int inputNum)
{
    int i, biggestNum = numArray[0]; //Initialize int i, biggestNum = numArray[0]
    for (i=0; i < inputNum; i++)
    {
        if (numArray[i] > biggestNum) //Check condition
            biggestNum = numArray[i]; //If True set biggestNum = numArray[i]
    }

    return biggestNum;
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
    int inputNum, maxInput, i;
    printf("Enter number of entries: "); //Display Enter number of entries
    scanf("%d", &inputNum); //Get and store in inputNum

    int numArray[inputNum]; //Initialize the size of numArray is equal to numberEntries

    for(i=0; i<inputNum; i++)
    {
        printf("Enter number: "); //Display Enter number
        scanf("%d", &numArray[i]); //Get and store in numArray[i]
    }

    maxInput = greatestNum(numArray,inputNum); //Call module and return its value in maxInput

    printf("Maximum Number: %d\n", maxInput); //Display Maximum Number, maxInput

    return 0;
}
