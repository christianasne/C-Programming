/*
============================================================================
FILE :  asneCh_5.12.extension
AUTHOR : christian andrie asne
DESCRIPTION : Passcode Lock. Program that will ask the correct numeric
passcode before the user can continue his task. The user is given only three
trials to enter the correct passcode. When the user hit the correct passcode
the program will display “ACCESS GRANTED”, otherwise it will display
“ACCESS DENIED” after three attempts.
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
    int passCode=123, attempt; //assign variable for passCode and attempt
    int x=3, y; //assign variable for x and y

    for (y=1; y<=x; y++) //set condition
    {
    printf("Enter Password Attempt %d: ", y); //if condition is true display Enter Password Attempt
    scanf("%d", &attempt); //Get user's inputed password

    if (attempt==passCode)//check if attempt is equal to passCode
    {
    printf("ACCESS GRANTED\n");//if true display "ACCESS GRANTED"
    break; //exit loop
    }
    else //else
    {
    printf("ACCESS DENIED\n");//if false display "ACCESS DENIED"
    }
    if (y==3) //check if y is equal to 3
    {
    printf("YOU HAVE RUN OUT OF ATTEMPTS\n"); // if true display "YOU HAVE RUN OUT OF ATTEMPTS"
    }
    }


    return 0;
}
