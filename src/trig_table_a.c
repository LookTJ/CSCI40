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

    printf("\t Table of Trig Functions \n");
    printf(" Angle (deg.)      sin            cos \n");
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

/*
Run output:
         Table of Trig Functions
 Angle (deg.)      sin            cos
     0             0.0000         1.0000
    15             0.2588         0.9659
    30             0.5000         0.8660
    45             0.7071         0.7071
    60             0.8660         0.5000
    75             0.9659         0.2588
    90             1.0000         0.0000
   105             0.9659        -0.2588
   120             0.8660        -0.5000
   135             0.7071        -0.7071
   150             0.5000        -0.8660
   165             0.2588        -0.9659
   180             0.0000        -1.0000
   195            -0.2588        -0.9659
   210            -0.5000        -0.8660
   225            -0.7071        -0.7071
   240            -0.8660        -0.5000
   255            -0.9659        -0.2588
   270            -1.0000        -0.0000
   285            -0.9659         0.2588
   300            -0.8660         0.5000
   315            -0.7071         0.7071
   330            -0.5000         0.8660
   345            -0.2588         0.9659
   360            -0.0000         1.0000
Press any key to continue . . .
*/
