/*
============================================================================
FILE : asneCh_LE4_13.extension
AUTHOR : christian andrie asne
DESCRIPTION : program that calculate the average grade and determine if it
pass or fail or invalid input
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
    // Write C code here
    float mark1, mark2, mark3, mark4, finalGrade; //Apply variable for the different input grades
    printf("1st Mark: "); //display 1st mark
    scanf("%f", &mark1); //input users 1st mark
    printf("2nd Mark: ");  //display 2nd mark
    scanf("%f", &mark2); //input users 2nd mark
    printf("3rd Mark: ");  //display 3rd mark
    scanf("%f", &mark3); //input users 3rd mark
    printf("4th Mark: ");  //display 4th mark
    scanf("%f", &mark4); //input users 4th mark

    finalGrade = (mark1 + mark2 + mark3 + mark4) / 4; //calculate users final grade with the standard average formula
    printf("Final Grade: %.2f\n", finalGrade); //display users final grade

    if (mark1 > 100 || mark2 > 100 || mark3 > 100 || mark4 > 100) //if any of the inputed marks are greater than 100 it means it is an invalid grade
    {
    printf("Invalid Input\n");  //display invalid input
    }
    else if (finalGrade >= 50) // else if the final grade is greater than or equal to 50 it means the user passed
    {
    printf("Remarks: Passed\n");  //display passed
    }
    else //  else the final grade is less than 50 it means the user failed
    {
    printf("Remarks: Failed\n"); //display failed
    }
    return 0;
}
