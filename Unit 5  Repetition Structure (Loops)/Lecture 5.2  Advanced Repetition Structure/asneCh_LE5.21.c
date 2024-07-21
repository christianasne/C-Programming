/*
============================================================================
FILE :  asneCh_5.21.extension
AUTHOR : christian andrie asne
DESCRIPTION :  Multiplication Table. The program will ask the user to input
the number of rows and columns the table should have and display the
multiplication table on screen. Use tab for the spacing between numbers horizontally.
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
    int numrow, numcol, row, col, product; //assign int variable for numrow, numcol, row, col, product;
    printf("Enter the number of rows: "); //display Enter the number of rows:
    scanf ("%d", &numrow); //get int numrow
    printf("Enter the number of columns: "); //display Enter the number of columns:
    scanf ("%d", &numcol); //get int numcol

    for (row=1; row<=numrow; row++) //check if this condition is true
    {
        for (col=1; col<=numcol; col++)// if true// check if this condition is true
        {
            product = row * col; //if true// calculate product = row * col
            printf("%d\t", product); //display product
        }
        printf("\n"); //if the previous condition is false// display new line
    }
    return 0;
}
