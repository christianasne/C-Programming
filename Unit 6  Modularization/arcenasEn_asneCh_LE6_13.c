/*
============================================================================
FILE : LE6.13.c
AUTHOR : Arcenas, Asne
DESCRIPTION : A program that lets the user choose an operation (power problem solver, factorial problem solver, or finding roots for quadratic equations using quadratic formula) from the menu. The program will always go back to the menu and lets the user choose again an operation until the user would like to quit using the app.
COPYRIGHT : created
============================================================================
*/
#include<stdio.h>
#include<math.h>

/*
============================================================================
FUNCTION : displayMenu
DESCRIPTION : Displays the choices for the user
ARGUMENTS : void
RETURNS : void
===========================================================================
*/
void displayMenu()
{
    printf("(1) Power Problem Solver\n");
    printf("(2) Factorial Problem Solver\n");
    printf("(3) Quadratic Equation Root Problem Solver\n");
    printf("(4) Quit\n");
    printf("Enter number: ");
}

float firstRoot, secondRoot;

/*
============================================================================
FUNCTION : powerSolver
DESCRIPTION : Solves for the power
ARGUMENTS : int base, int p
RETURNS : int
===========================================================================
*/
int powerSolver(int base, int p)
{
    int answerPower = 1, i;

    for(i = 1; i <= p; i++)
    {
        answerPower*=base;
    }

    return answerPower;
}

/*
============================================================================
FUNCTION : factorialSolver
DESCRIPTION : Solves for the factorial of the given
ARGUMENTS : int num
RETURNS : int
===========================================================================
*/
int factorialSolver(int num)
{
    int factorial = 1;

    while(num > 0)
    {
        factorial*=num;
        num--;
    }

    return factorial;
}

/*
============================================================================
FUNCTION : quadraticSolver
DESCRIPTION : Solves for the quadratic formula
ARGUMENTS : int a, int b, int c
RETURNS : int
===========================================================================
*/
int quadraticSolver(int a, int b, int c)
{
    float discriminant = (b*b)-(4*a*c);
    int flag;

    if (a == 0 && b == 0)
    {
        flag = 1;
    }
    else if (a == 0)
    {
        firstRoot = (float)-c/b;
        flag = 2;
    }
    else if(discriminant < 0)
    {
        flag = 3;
    }
    else
    {
        firstRoot = ((-b+sqrt(discriminant))/(2*a)), secondRoot = ((-b-sqrt(discriminant))/(2*a));
        flag = 4;
    }
    return flag;
}

/*
============================================================================
FUNCTION : main
DESCRIPTION : Let's the user choose an operation from the menu.
ARGUMENTS : void
RETURNS : int
===========================================================================
*/
int main()
{
    int choice, base, power, num, a, b, c, answerPowerSolver, answerFactorialSolver,answerQuadraticSolver;

    do
    {
        displayMenu();
        scanf("%d", &choice);
        if(choice == 1)
        {
            printf("Enter base number: ");
            scanf("%d", &base);
            printf("Enter power: ");
            scanf("%d", &power);
            answerPowerSolver = powerSolver(base, power);
            printf("%d raised to the power of %d = %d\n", base, power, answerPowerSolver);
        }
        else if(choice == 2)
        {
            printf("Enter a positive integer: ");
            scanf("%d", &num);
            answerFactorialSolver = factorialSolver(num);
            printf("Factorial of %d = %d\n", num, answerFactorialSolver);
        }
        else if(choice == 3)
        {
            printf("Enter value of a: ");
            scanf("%d", &a);
            printf("Enter value of b: ");
            scanf("%d", &b);
            printf("Enter value of c: ");
            scanf("%d", &c);
            answerQuadraticSolver = quadraticSolver(a, b, c);
            if(answerQuadraticSolver == 1)
            {
                printf("No Solution\n");
            }
            else if(answerQuadraticSolver == 2)
            {
                printf("The root = %.3f\n", firstRoot);
            }
            else if(answerQuadraticSolver == 3)
            {
                printf("No real roots\n");
            }
            else if(answerQuadraticSolver == 4)
            {
                printf("The roots are = %.3f %.3f\n", firstRoot, secondRoot);
            }
        }
    }
    while(choice != 4);

    return 0;
}
