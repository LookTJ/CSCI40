/*
Submitter: Taylor Lookabaugh
file: factorial.c
program #9
purpose: to calculate factorial
apply: using while loop
*/

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int x, i, f=1;

    /* read integer input from keyboard with limits */
    do
    {
    printf("Enter a positive value for x > ");
    scanf("%i", &x);
    i = x;
    if(x>12)
    {
        printf("Cannot proceed due to limitation, \n"
                "Please retry. \n");
    }
    } while (x<0 || x>12);

    /* calculate factorial of an integer */
    while(x>0)
    {
        f *= x;
        x--;
    }
    printf("integer = %i; factorial = %i \n", i, f);

    return(0);
}
