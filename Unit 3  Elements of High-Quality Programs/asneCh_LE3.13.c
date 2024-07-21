/*
============================================================================
FILE : asneCh_LE3.13.extension
AUTHOR : christian andrie asne
DESCRIPTION : program that prints the tuition for 2 semesters at ABC College.
ABC charges PHP 450 for registration, plus PHP 450 per unit and a penalty of
PHP 2,260 for each 12 units or fraction of 12
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
    // Constant variables for charges
    const int registrationFee = 450;
    const int unitFee = 450;
    const int penaltyPer12Units = 2260;

    // Assign variables f means first & t means second
    float fsemesterUnit, tsemesterUnit, fsemesterTuition, tsemesterTuition, totalTuition;

    // Input the total number of units
    printf("1st Semester Number of Units: ");
    scanf("%f", &fsemesterUnit);
    printf("2nd Semester Number of Units: ");
    scanf("%f", &tsemesterUnit);
    // Calculate the two tuition
    fsemesterTuition = registrationFee + ((fsemesterUnit)/12 * penaltyPer12Units) + (fsemesterUnit * unitFee );
    printf("First Semester Tuition Fee: %.2f\n", fsemesterTuition);
      tsemesterTuition = registrationFee + ((tsemesterUnit)/12 * penaltyPer12Units) + (tsemesterUnit * unitFee );
    printf("Second Semester Tuition Fee: %.2f\n", tsemesterTuition);
    //Add the two tuition
    totalTuition = fsemesterTuition +  tsemesterTuition;
    printf("Total Semester Tuition Fee: %.2f\n",  totalTuition);
    return 0;
}
