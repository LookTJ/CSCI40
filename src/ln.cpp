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
    int k;

    printf("Natural log finder\n\n");
    printf("Enter a value greater than 0 > ");
    scanf("%lf", &x);

    if(x<=0)
        k=1;

    switch(k)
    {
        case 1:
            if(x<=0)
            printf("Incorrect input.\nPlease enter a positive number > ");
            scanf("%lf", &x);
        case 2:
            if(x<=0)
            {
                printf("WARNING: invalid input! Please try again > ");
                scanf("%lf", &x);
            }
        case 3:
            if(x<=0)
            {
                printf("Incorrect input. User failed attempts three times.\n"
                        "Program aborted\n");
                break;
            }
        default:
            if(x>0)
            {
                result = log(x);
                printf("The natural log of %5.4f is: %5.4f\n", x,result);
                break;
            }
    }


    system("PAUSE");
    return(0);
}

