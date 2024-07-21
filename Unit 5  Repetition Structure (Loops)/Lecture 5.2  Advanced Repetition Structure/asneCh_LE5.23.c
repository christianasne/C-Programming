/*
============================================================================
FILE :  asneCh_5.23.extension
AUTHOR : christian andrie asne
DESCRIPTION :  Fibonacci Series. Create a program that will display the 1-N
value of the Fibonacci sequence. Use a space for the spacing between numbers
horizontally.
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

int main(){

    int limit, a; //assign variable int limit for the number of fibo sequence and a for the loop
    int fibo1=0, fibo2=1, fibonext; //assign variable int, fibo1 for the first number of the sequence, fibo2 for the second number of the sequence, and fibonext for the next number of the sequence

    printf("Enter Limit: "); //display "Enter Limit"
    scanf("%d", &limit); //get the limit and store it in the int limit
    printf("Fibonacci sequence:"); //display "Fibonacci Sequence"

    for (a=1; a<=limit; a++) //check the for loop condition
    {
            fibo1 = fibo2; //initialize fibo1 = fibo2
            fibo2 = fibonext; //initialize fibo2 = fibonext
            fibonext = fibo1 + fibo2; //calculate for fibonext
            printf(" %d\n" , fibonext); //display the value of fibonext
    }
return 0;
}
