/*
============================================================================
FILE : asneCh_LE4_12.extension
AUTHOR : christian andrie asne
DESCRIPTION : program that solve the quadratic value of a given numbers
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
#include <math.h>
int main() {
    // Write C code here
    int a, b, c; //Assign variables for different constant terms
    float oneroot, discriminate, firstroot, secondroot;//Assign variables for different operations to be used
    printf("Enter a: "); //Display Enter a
    scanf("%d", &a);    //Input users a term
    printf("Enter b: "); //Display Enter b
    scanf("%d", &b);    //Input users b term
    printf("Enter c: "); //Display Enter c
    scanf("%d", &c);    //Input users c term


    discriminate = (b^2)-(4*a*c); //calculate the discriminate using this formula
    firstroot = (-b + sqrt (discriminate)) / 2*a; //calculate the positive formula of the quadratic equation
    secondroot = (-b - sqrt (discriminate)) / 2*a; //calculate the negative formula of the quadratic equation

    if (a==0 && b==0) //if both a and b is equal to zero, there is no solution
    {
    printf("There is no solution:\n"); //display there is no solution
    }
    else if (a==0) //if a is equal to zero, there is only one root
    {
    oneroot = -c/b; //calculate the oneroot using this formula
    printf("There is only one root: %.2f\n", oneroot); //display there is only one root and the one root value
    }
    else if (discriminate < 0) //if discriminate is less than 0 meaning negative, there are no real roots
    {
    printf("There are no real roots: %.2f\n", discriminate); //display there are no real roots and the discriminate value
    }
    else //if none of the statement above are true,
    {
    printf("There are two roots: %.2f and %.2f\n", firstroot, secondroot); //display there are two roots and the first and second root value
    }
    return 0;
}
