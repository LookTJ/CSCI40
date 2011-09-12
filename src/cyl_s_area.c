/* file: cyl_s_area.c       */
/* Example Program #1       */
/* This program calculates the surface area
    of a closed cylinder of radius r and height h. */

#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592654

int main (void)
{
    double r, h, s_area_top, s_area_bottom, s_area_side, surface_area;

    printf("Enter radius > ");
    scanf("%lf", &r);
    printf("Enter the height > ");
    scanf("%lf", &h);

    s_area_top = pi*r*r;
    s_area_bottom = pi*r*r;
    s_area_side = 2.0*pi*r*h;
    surface_area = s_area_top + s_area_bottom + s_area_side;

    printf("The total surface area of a closed cylinder is %f\n", surface_area);

    return(0);
}
