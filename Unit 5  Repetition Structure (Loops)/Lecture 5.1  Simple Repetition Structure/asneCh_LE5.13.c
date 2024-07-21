/*
============================================================================
FILE :  asneCh_5.13.extension
AUTHOR : christian andrie asne
DESCRIPTION : Problem Solver Menu. Create a program that lets the user choose
an operation (power problem solver, factorial problem solver, or finding roots
for quadratic equations using quadratic formula) from the menu. The program
will always go back to the menu and lets the user choose again an operation
until the user would like to quit using the app.
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

int main(){

    int operation, i, f, base, power, num; //assign int operation, i, f, base, power, num
    float a, b, c; //assign float a, b, c

    do{
        int answerPower = 1, factorial = 1; //assign int answerPower = 1, factorial = 1
        printf("(1) Power Problem Solver\n"); //display Power Problem Solver\n
        printf("(2) Factorial Problem Solver\n"); //display Factorial Problem Solver\n
        printf("(3) Quadratic Equation Root Problem Solver\n"); //display Quadratic Equation Root Problem Solver\n
        printf("(4) Quit App\n"); //display Quit App\n
        printf("Enter the number of your choice: "); //display Enter the number of your choice :
        scanf("%d", &operation); //get int operation

        if(operation == 1) //check if condition is true
        {
            printf("Enter your base number: "); //display Enter your base number
            scanf("%d", &base); //get int base
            printf("Enter the power: "); //display Enter the power
            scanf("%d", &power); //get int power
            for(i = 1; i <= power; i++)
            {
                answerPower= answerPower * base; //calculate answerPower = answerPower * base
            }
            printf("The answer of %d raised to the power of %d is %d\n", base, power, answerPower); //display answer power
        }
        if(operation == 2)
        {
            printf("Enter the number you want to factorialize: ");
            scanf("%d", &num);
            int numBase = num;
            //Stored num to numBase so that it can be used in the print since num is decremented in the while loop.
           for (f = 1; f <= numBase; f++)
            {
                factorial = factorial * num;
                num--;
            }
            printf("The factorial of %d is %d\n", numBase, factorial);
        }
        if(operation == 3)
        {
            printf("Enter the value of a: ");
            scanf("%f", &a);
            printf("Enter the value of b: ");
            scanf("%f", &b);
            printf("Enter the value of c: ");
            scanf("%f", &c);
            float discriminant = (b*b)-(4*a*c);
            /*Discriminant is calculated by getting the difference of
             the b squared and the product of 4, a, and c.*/
            if(a == 0 && b == 0)
            {
                printf("No solution.\n");
            }
            else if(a == 0)
            {
                float singleRoot = -c/b;
                printf("The root is : %.3f\n", singleRoot);
            }
            else if(discriminant < 0)
            {
                printf("No real roots.\n");
            }
            else
            {
                float firstRoot = ((-b+sqrt(discriminant))/(2*a)), secondRoot = ((-b-sqrt(discriminant))/(2*a));
                //firstRoot and secondRoot are calculated using the quadratic formula
                printf("The roots are : %.3f %.3f\n", firstRoot, secondRoot);
            }
        }
          }while(operation != 4);


    return 0;
}
