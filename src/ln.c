/*
Submitter: Taylor Lookabaugh
file: ln.cpp
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
            {
            printf("Incorrect input.\nPlease enter a positive number > ");
            scanf("%lf", &x);
            }
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

/*
run case a output:
Natural log finder

Enter a value greater than 0 > 2
The natural log of 2.0000 is: 0.6931
Press any key to continue . . .

run case b output:
Natural log finder

Enter a value greater than 0 > -1
Incorrect input.
Please enter a positive number > 4
The natural log of 4.0000 is: 1.3863
Press any key to continue . . .

run case c output:
Natural log finder

Enter a value greater than 0 > -1
Incorrect input.
Please enter a positive number > 0
WARNING: invalid input! Please try again > 1
The natural log of 1.0000 is: 0.0000
Press any key to continue . . .

run case d output:
Natural log finder

Enter a value greater than 0 > -4
Incorrect input.
Please enter a positive number > 0
WARNING: invalid input! Please try again > -2
Incorrect input. User failed attempts three times.
Program aborted
Press any key to continue . . .
*/
