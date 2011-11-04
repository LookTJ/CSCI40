//  Submitter: Taylor Lookabaugh
//  Program: #18 - Moving Average Program
//      Implement moving_average function.
//  file: moving_average.c

#include <stdio.h>
#include <stdlib.h>
#define N 20
int main(void)
{
    double p[N]={1.2, 5.3, 19.0, 35.6, 40.2, 48.7, 80.6, 99.9, 100.0, 112.5, 122.7,
                        127.7, 138.2, 150.2, 153.6, 175.8, 181.2, 188.7, 210.0, 215.3}; 
    double t[N];
    int n, k;
    n=20;
    void moving_average(double x[ ], double y[ ], int n);

    printf("Before moving average function the array contents are:\n");
    for (k=0; k <= n-1; k++)
    {
        printf("%.1f\n", p[k]);
    }

    moving_average(p, t, n);

    printf("After moving average function the array contents are:\n");
    for (k=0; k <= n-1; k++)
    {
        printf("%.1f\n", t[k]);
    }

    system ("PAUSE");
    return(0);
}

/*----------------------------------------------------------------------------*/

void moving_average(double x[], double y[], int n)
{
    int k;

    for(k=0; k<=n-1; k++)
    {
        if(k==0)
        {
            y[k] = x[k];
            continue;
        }
        if(k==n-1)
        {
            y[k] = x[k];
            break;
        }
        y[k] = (x[k-1] + x[k] + x[k+1])/3;
    }
    return;
}

/* OUTPUT:
    Before moving average function the array contents are:
    1.2
    5.3
    19.0
    35.6
    40.2
    48.7
    80.6
    99.9
    100.0
    112.5
    122.7
    127.7
    138.2
    150.2
    153.6
    175.8
    181.2
    188.7
    210.0
    215.3
    After moving average function the array contents are:
    1.2
    8.5
    20.0
    31.6
    41.5
    56.5
    76.4
    93.5
    104.1
    111.7
    121.0
    129.5
    138.7
    147.3
    159.9
    170.2
    181.9
    193.3
    204.7
    215.3
*/
