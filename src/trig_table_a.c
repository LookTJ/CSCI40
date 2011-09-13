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
    double angle_radians_sin, angle_radians_cos;

    printf("\t Table of Trig values \n");
    printf("  angle(deg.)      sin            cos \n");
    while (angle_degrees <= 360)
    {
        angle_radians_sin = sin(angle_degrees*M_PI/180);
        angle_radians_cos = cos(angle_degrees*M_PI/180);
        printf("%6i %18.4f %14.4f \n", angle_degrees, angle_radians_sin, angle_radians_cos);
        angle_degrees += 15;
    }

    system("PAUSE");
    return(0);
}
