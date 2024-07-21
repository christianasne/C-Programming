/*
============================================================================
FILE : asneCh_LE3.12.extension
AUTHOR : christian andrie asne
DESCRIPTION : program that extracts and adds the two least significant digits of an integer
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
# include <stdio.h>
int main() {
   int number; //assign variable for input number
   int firstLastDigit, secondLastDigit, sum;// assign variable for number first last digit, number second last digit, and sum of first and second last digit
   printf("Enter number: "); // Display "Enter number"
   scanf("%d", &number); // input random number and save to int variable
   firstLastDigit = number % 10; // computation for getting the first last digit of a number by using modulus formula
   number = number / 10; //divide the number by 10 to get a new base
   secondLastDigit = number % 10; //with the new base of the number get the second last digit by using modulus formula
   sum = firstLastDigit + secondLastDigit;// compute for the sum of the two last integer
   printf("Sum of the two last significant integers: %d\n",sum);//Diplay the sum of the two last integer
    return 0;
}
