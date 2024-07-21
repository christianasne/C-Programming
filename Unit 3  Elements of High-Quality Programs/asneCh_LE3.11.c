/*
============================================================================
FILE : asneCh_LE3.11.extension
AUTHOR : christian andrie asne
DESCRIPTION :  program that asks for user’s yearly pay and displays his weekly pay
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
    const float weeks = 52;
    float yearlyPay, weeklyPay; //assign variable yearly pay, weeks, weekly pay
    printf("Enter user's yearly pay: "); //Display Input y:
    scanf("%f", &yearlyPay); //Input user's yearly pay
    weeklyPay = yearlyPay/weeks; //compute user's weekly pay by dividing weeks in a year
    printf("User's weekly pay is %.2f\n", weeklyPay); //Display user's computed weekly pay
    return 0;
}
