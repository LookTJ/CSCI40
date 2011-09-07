/*
Submitter: Taylor Lookabaugh
Program: #4
Purpose: To calculate the monthly payment
on a loan
*/

#include <cstdio>
#include <cstdlib>
#include <cmath>

int main (void)
{
    double MP, i, LA, annual_rate;
    int n;

    printf("Enter the annual interest rate > ");
    scanf("%lf", &annual_rate);
    printf("Duration of the loan in months > ");
    scanf("%i", &n);
    printf("Enter the amount of loan > ");
    scanf("%lf", &LA);
    printf("\nCalculating to find monthly payments . . . \n");

    i = annual_rate/12; /* to get monthly interest rate */

    MP = LA*((i*pow(1+i,n))/(pow(1+i,n)-1)); /* the formula for calculating monthly payments */

    printf("Annual interest rate: %.4f\n", annual_rate);
    printf("Duration of the loan: %i months\n", n);
    printf("Amount: %.2f dollars\n", LA);
    printf("The monthly loan payment with the above variables is: %.2f\n", MP);

    system("PAUSE");
    return(0);
}
