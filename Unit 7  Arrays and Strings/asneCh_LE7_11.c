/*
============================================================================
FILE : asneCh_LE7_11.c
AUTHOR : Christian Andrie Asne
DESCRIPTION : A program that allows a user to enter 10 numbers, then displays
all of the numbers, the largest number, and the smallest.
COPYRIGHT : created
============================================================================
*/
#include <stdio.h>
/*
============================================================================
FUNCTION : largeNum
DESCRIPTION : Check for the largest number on the input
ARGUMENTS : int num[]
RETURNS : int
===========================================================================
*/
int largeNum(int num[])
{
    int i, large;
    for (i=0; i<10; i++) //loop for checking the 10 input
    {
        if (num[i]>large) //check if num inputed is greater than large value
        {
            large = num[i]; //set large value equal to num inputed
        }
        else
        {

        }
    }
    return large; //return the number of large
}
/*
============================================================================
FUNCTION : smallNum
DESCRIPTION : Check for the smallest number on the input
ARGUMENTS : int num[]
RETURNS : int
===========================================================================
*/
int smallNum(int num[])
{
    int i, small;
    for (i=0; i<10; i++) //loop for checking the 10 input
    {
        if (num[i]<small) //check if num inputed is less than small value
        {
            small = num[i]; //set small value equal to num inputed
        }
        else
        {

        }
    }
    return small; //return the number of small
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

    int num[10]; //declare size of array num(10)
    int i,x, small, large;
    for (i=0; i<10; i++) //loop for getting the 10 input
    {
        printf("Enter number %d: ", i+1); //display Enter number %d (the number of current i+1)
        scanf("%d", &num[i]); //get the current inputed value num[]

        large = largeNum(num); //call module largeNum and put the returned value here in large
        small = smallNum(num); //call module smallNum and put the returned value here in small

    }
    printf("The numbers are:  "); //display The numbers are:
    for (x=0; x<10; x++) //loop for displaying all the numbers
    {
        printf("%d, ", num[x]); //display the current num value
    }
    printf("\nThe smallest number is %d and the largest number is %d\n", small, large); //displays the smallest and largest inputed number


    return 0;
}
