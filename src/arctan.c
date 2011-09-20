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
    double x, arctan, sum=0.0, result;
    int k, n=3;

    do
    {
        printf("input a value -1 < x < 1: ");
        scanf("%lf", &x);

        if (x < -1 || x > 1)
            printf("Domain error. Please retry.\n");
    }
    while (x < -1 || x > 1);

    arctan = atan(x);
    
    for(k=1; k<=20; k+=2)
    {
        result = (pow(x,k)/k)*-1;
        sum += result;
        
    }

    printf("the first twenty terms of arctan: %.4f\n", sum);


    system("PAUSE");
    return(0);
}
