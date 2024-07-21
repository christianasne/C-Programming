/*
============================================================================
FILE : asneCh_LE5.11.extension
AUTHOR : christian andrie asne
DESCRIPTION : program that will ask 10 integers and display the average of
all even numbers and the product of all odd numbers entered by the user
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

    int y, input, sum=0, countEven=0, countOdd=0, product=1; //assign int variable for y, input, sum, countEven, countOdd, and product
    float average; //assign float variable for average

    for (y=1; y<=10; y++) //set condition
    {
    printf("Enter Integer %d: ", y);//if condition is true display Enter Integer
    scanf("%d", &input);//get user's input

        if (input % 2 == 0)//check if input modulus 2 is equal to zero
        {
        sum = sum + input; //calculate sum = sum + input
        countEven++; //add one to countEven, countEven++
        }
        else //else
        {
        product = product * input; //calculate product = product * input
        countOdd++; //add one to countOdd, countOdd++
        }
    }
    if (countEven==0) //check if countEven is equal to zero
    {
        printf("No even numbers input\n"); //if true display No even numbers input
        printf("Product is %d\n", product); //also display the product of all odd numbers
    }
    else if (countOdd==0) //check if countOdd is equal to zero
    {
        average = sum / countEven; //if true calculate the average of even numbers using average = sum / countEven
        printf("No odd numbers input\n"); //also display No odd numbers
        printf("Average is %.2f\n", average); //also display the average if all even numbers
    }
    else //else
    {
       average = sum / countEven; //calculate the average of even numbers using average = sum / countEven
       printf("Average is %.2f\n", average);  //display the average if all even numbers
       printf("Product is %d\n", product); //display the product of all odd numbers
    }


    return 0;
}
