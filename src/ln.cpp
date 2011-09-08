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
    double answer;
    int x;

    printf("Enter a value greater than 0 > ");
    scanf("%i", x);

    switch(x)
    {
        case 0:
            printf("please try again.\n");
            break;
        default:
            printf("please try again.\n");
            break;
    }
    if (x<=0)
        printf("invalid value");
    else
    {
        answer = log(x);
        printf("The ln of x is: %5f\n", answer);
    }
    system("PAUSE");
    return(0);
}

