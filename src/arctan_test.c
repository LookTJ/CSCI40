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
    double x, arctan, result=0.0;
    int k,

    do
    {
        printf("input a value -1 < x < 1: ");
        scanf("%lf", &x);

        if (x < -1 || x > 1)
            printf("Domain error. Please retry.\n");
    }
    while (x < -1 || x > 1);

    arctan = atan(x);
    
    for(k=1; k<=39; k+=2)
    {
        if((k+1)%4 == 0)
            result += -1*pow(x,k)/k;
        else
            result += 1*pow(x,k)/k;
    }

    printf("the sum of arctan(%.16f) = %.4f\n"
            "(check)arctan(%.16f) = %.4f\n", x, result, x, arctan);


    system("PAUSE");
    return(0);
}
