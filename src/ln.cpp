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

    printf("Natural log finder\n\n");
    printf("Enter a value greater than 0 > ");
    scanf("%lf", &x);

    while(x<=0)
    {
        printf("Invalid value, please enter another value >");
        scanf("%lf", &x);
    }
    if (x>0)
    {
        result = log(x);
        printf("The ln of %5.4f is: %5.4f\n", x,result);
    }
    system("PAUSE");
    return(0);
}

