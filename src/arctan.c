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
    int k;

    do
    {
        printf("input a value -1 < x < 1: ");
        scanf("%lf", &x);

        if (x < -1 || x > 1)
            printf("Domain error. Please retry.\n");
    }
    while (x < -1 || x > 1);

    
    for(k=0; k<=20; k+=2)
    {

        result = x - (pow(x,3))/3 + (pow(x,5))/5 - (pow(x,7))/7 + (pow(x,9))/9;
        sum += result;
        
    }
    arctan = atan(sum);

    printf("the first twenty terms of arctan: %.4f\n", sum);


    system("PAUSE");
    return(0);
}
