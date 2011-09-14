/*
Submitter: Taylor Lookabaugh
file: trig_table_a.c
program #7
purpose: to print trig table with answers to every 15 degrees
        from 0-360 degrees in sine, cosine, and tangent.
apply: use for loop.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
    int angle_degrees=0;
    double angle_radians_sin, angle_radians_cos, angle_radians_tan;

    printf("\t\t Table of Trig Functions \n");
    printf(" Angle (deg.)      sin            cos            tan \n");
    for (angle_degrees = 0; angle_degrees <= 360; angle_degrees += 15)
    {
        angle_radians_sin = sin(angle_degrees*M_PI/180);
        angle_radians_cos = cos(angle_degrees*M_PI/180);
        angle_radians_tan = angle_radians_sin/angle_radians_cos;
        if(angle_degrees % 180 != 90) /* test whether angle truly is 90 degrees or not */
            printf("%6i %18.4f %14.4f %14.4f \n", 
                    angle_degrees, angle_radians_sin, angle_radians_cos, angle_radians_tan);
        else
            printf("%6i %18.4f %14.4f         undef \n", 
                    angle_degrees, angle_radians_sin, angle_radians_cos);
    }

    system("PAUSE");
    return(0);
}

/*
Run output:
                 Table of Trig Functions
 Angle (deg.)      sin            cos            tan
     0             0.0000         1.0000         0.0000
    15             0.2588         0.9659         0.2679
    30             0.5000         0.8660         0.5774
    45             0.7071         0.7071         1.0000
    60             0.8660         0.5000         1.7321
    75             0.9659         0.2588         3.7321
    90             1.0000         0.0000         undef
   105             0.9659        -0.2588        -3.7321
   120             0.8660        -0.5000        -1.7321
   135             0.7071        -0.7071        -1.0000
   150             0.5000        -0.8660        -0.5774
   165             0.2588        -0.9659        -0.2679
   180             0.0000        -1.0000        -0.0000
   195            -0.2588        -0.9659         0.2679
   210            -0.5000        -0.8660         0.5774
   225            -0.7071        -0.7071         1.0000
   240            -0.8660        -0.5000         1.7321
   255            -0.9659        -0.2588         3.7321
   270            -1.0000        -0.0000         undef
   285            -0.9659         0.2588        -3.7321
   300            -0.8660         0.5000        -1.7321
   315            -0.7071         0.7071        -1.0000
   330            -0.5000         0.8660        -0.5774
   345            -0.2588         0.9659        -0.2679
   360            -0.0000         1.0000        -0.0000
Press any key to continue . . .
*/
