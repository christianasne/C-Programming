/*
============================================================================
FILE : LE8_11.c
AUTHOR : Arcenas, Asne
DESCRIPTION : A program that sets up an array called days, which contains
pointers to the names of the days of the week and return the name of the day
from the given day. The function accepts the given day.
============================================================================
*/
#include<stdio.h>
/*
============================================================================
FUNCTION : *daysOfWeek
DESCRIPTION : Checks for the day of the week from the user input
ARGUMENTS : int numberOfDays
RETURNS : char
===========================================================================
*/
char *daysOfWeek(int numberOfDays)
{
    char *days[7] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"}; //Initialize string size and string values
    int error;
    if (numberOfDays >= 1 && numberOfDays <= 7)
    {
        return  days[numberOfDays - 1]; //If True return days[numberOfDays - 1]
    }
    else
    {
        return error; //Else return error
    }
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
    char *nameOfDay;
    int numberOfDays, error;
    printf("Enter Number of Days: "); //Display Enter Number of Days
    scanf("%d", &numberOfDays); //Get and store in numberOfDays

    nameOfDay = daysOfWeek(numberOfDays); //Call module and return the value in nameOfDay

    if(nameOfDay !=error)
    {
        printf("Day of the Week is: %s\n", nameOfDay); //If True Display Day of the Week is, nameOfDay
    }
    else
    {
        printf("Day of the Week is: Invalid\n"); //Else Display Day if the Week is Invalid

    }
    return 0;
}
