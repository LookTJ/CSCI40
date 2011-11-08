//  Submitter: Taylor Lookabaugh
//  Program: #19 - one-dimensional arrays as function arguements.
//  file: 1d_array.c
//  write function called bias.

#include <stdlib.h>
#include <stdio.h>
#define N 20

double min(double x[], int n)
{
    int k;
    double min_x;
    min_x = x[0];
    for(k=1; k<=n-1; k++)
        if(x[k] < min_x)
            min_x = x[k];
    return min_x;
}

void bias(double x[], double y[], int n)
{
    int k;
    double min_x;

    min_x = min(x,n);

    for(k=0; k<=n-1; k++)
        y[k] = x[k] - min_x;
    return;
}

int main (void)
{
    double x[N] = {10, 2, 36, 8, 3, 12, 15, 9, 1.4, 3.5, 
                    5, 10.1, 0.5, 1.2, 6, 7.7, 44.3, 20.5, 2, 1.2}; 
    double y[N];
    int k, n;
    n = 20;

    bias(x,y,n);

    printf("Contents of both x array and y array\n\n");
    printf("x                y\n");
    for(k=0; k<=n-1; k++)
        printf("%4.1f   %12.1f\n", x[k], y[k]);

    system("PAUSE");
    return 0;
}
