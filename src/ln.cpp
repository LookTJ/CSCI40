/*
Submitter: Taylor Lookabaugh
Purpose natural log finder
equation: log(x)
restriction: x > 0
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
    double result, x;

    printf("Enter a value greater than 0 > ");
    scanf("%lf", &x);

    if(x<=0)
    {
        printf("invalid value\n");
    }
    else
    {
        result = log(x);
        printf("The ln of x is: %5.4f\n", result);
    }
    system("PAUSE");
    return(0);
}

