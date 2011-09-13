/*
Submitter: Taylor Lookabaugh
file: trig_table_a.c
program #7
purpose: to print trig table with answers to every 15 degrees
        from 0-360 degrees in sine and cosine.
apply: use while loop.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
    int angle_degrees=0;
    double angle_radians, x;

    printf("Table of Trig functions \n");
    while (angle_degrees <= 360)
    {
        angle_radians = sin(x);
        printf("%6i %9.6f \n", angle_degrees, angle_radians);
        angle_degrees += 15;
    }

    system("PAUSE");
    return(0);
}
