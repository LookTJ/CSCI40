/*
Submitter: Taylor Lookabaugh
Program #10
Purpose: first twenty terms of arctan(x)
apply: using for loop, restrict x input
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
    double x, arctan;

    do
    {
        printf("input a value -1 < x < 1: ");
        scanf("%lf", &x);

        if (x < -1 || x > 1)
            printf("Domain error. Please retry.\n");
    }
    while (x < -1 || x > 1);

    arctan = atan(x);
    
    double result=0.0;
    for(int k=1; k<=39; k+=2)
    {
        result += (((k + 1) % 4 == 0) ? -1 : 1) * pow(x, k) / k;
    }

    printf("the sum of arctan(%.1f) = %.4f\n"
            "(check)arctan(%.1f) = %.4f\n", x, result, x, arctan);


    system("PAUSE");
    return(0);
}
