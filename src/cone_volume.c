/* file: cone_volume.cpp                    */
/* Program #2                               */
/* This program calculates                  */
/* the volume of a right circular cone.     */
/* the formula consists of                  */
/* variables radius r and height h.         */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
    double v_cone, r, h;

    /* values of variables listed in meters */
    r = 4.56;
    h = 2.77;


    /* formula to calculate */
    v_cone = 1.0/3.0*M_PI*pow(r,2)*h;

    /* outputs answer */
    printf("The volume of a right circular cone with radius %f meters and height %f meters is %f\n", r, h,v_cone);



    system("PAUSE");
    return(0);
}
