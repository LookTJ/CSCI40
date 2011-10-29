/*
    Submitter: Taylor Lookabaugh
    Program: #16 - Perfect number
    Make perfect function
*/

#include <stdlib.h>
#include <stdio.h>

int perfect(int n)
{
    // sum initialized at 1 because k starts finding factors at 2.
    int sum=1, k, i;

    if(n<2)
        return 0;
    else
    {
        for(k=2; k<=n/2; k++)
        {
            if(n%k == 0) // see if n is divisible by k
            {
                sum += k; // add factor k to sum
            }
        }
        if(sum==n) // yes perfect number now print factors.
        {
            printf("%d=", n);
            printf("1");
            for(i=2; i<=n/2; i++)
                if(n%i == 0)
                    printf("+%d", i);
            printf("\n");
        }
        else
            return 0; // not perfect number
    }
    return 0;
}


int main (void)
{

    int k;

    printf("The perfect numbers from 1 to 10,000 are:\n");
    for(k=1; k<=10000; k++)
        if(perfect(k) != 0)
            perfect(k);
    
    system("PAUSE");
    return 0;
}
