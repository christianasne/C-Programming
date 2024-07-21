/*
============================================================================
FILE :  asneCh_5.22.extension
AUTHOR : christian andrie asne
DESCRIPTION :  Pyramid. Create a program that would display like this
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

int main() {
   int n, a , b, c; //assign variable n, a , b, c;

   printf("Enter a value for N: "); //display Enter a value for N
   scanf("%d",&n); //get and store the value for N in (n)

    for(a=1; a<=n; a++) // do how many rows to print
{
    for(b=1; b<=n - a; b++) //do how many spaces to print
    {
        printf(" "); //display the spaces
    }
    for (c=1; c<=a; c++) // loop for printing the number in increasing order
    {
        printf("%d", c); //display the numbers in increasing order(c)
    }
    for(c = a - 1; c>=1; c--) // loop for printing numbers in decreasing order
    {
        printf("%d",c); //display the numbers in decreasing order(c)
    }
    printf("\n"); //print new line

}
return 0;
}
