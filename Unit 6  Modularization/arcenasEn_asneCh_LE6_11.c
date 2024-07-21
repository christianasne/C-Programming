/*
============================================================================
FILE : LE6.11.c
AUTHOR : Arcenas, Asne
DESCRIPTION : Add the 2 Least Significant Digits of an integer
COPYRIGHT : created
============================================================================
*/
#include<stdio.h>
/*
============================================================================
FUNCTION : extractFirstLSD
DESCRIPTION : Extracts the first least significant digit from the integer
ARGUMENTS : int num
RETURNS : int
===========================================================================
*/
int extractFirstLSD (int num)
{
    int digit1 = num % 10; // Modulo 10 the integer to get the first significant digit
    return digit1; // return digit 1
}
/*
============================================================================
FUNCTION : extractSecondLSD
DESCRIPTION : Extracts the second least significant digit from the integer
ARGUMENTS : int num
RETURNS : int
===========================================================================
*/
int extractSecondLSD (int num)
{
    int digit2 = (num / 10) % 10; // divide the integer by 10 and apply modulo 10 to get the second significant digit
    return digit2; // return digit 2
}
/*
============================================================================
FUNCTION : sumDigits
DESCRIPTION : Adds the extracted value from the integer
ARGUMENTS : int x, int y
RETURNS : int
===========================================================================
*/
int sumDigits (int x, int y)
{
    int sum = x + y; // add digit 1 and digit 2
    return sum; // return sum
}
/*
============================================================================
FUNCTION : main
DESCRIPTION : Execute the main program
ARGUMENTS : void
RETURNS : int - exit codes
===========================================================================
*/
int main ()
{
    int num;

    printf("Enter a number: "); // prompt the user to input an integer
    scanf("%d", &num); // input

    int digit1 = extractFirstLSD(num); // get the 1st LSD
    int digit2 = extractSecondLSD(num); // get the 2nd LSD
    int sum = sumDigits(digit1, digit2); // add the 2 LSD's to get the sum

    printf("Sum: %d + %d = %d\n", digit1, digit2, sum); // print the result

    return 0; // Closes the program
}
