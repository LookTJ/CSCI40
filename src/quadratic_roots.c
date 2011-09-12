/*
Submitter: Taylor Lookabaugh
file: quadratic_roots.c
Program #3
This program is designed to find the real
roots of a quadratic equation.
later to be modified to find complex roots
quadratic equation: ax^2+bx+c=0
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
    double a, b, c, x1, x2;

    printf("Quadratic equation calculation for real roots.\n");

    /* variable inputs defined */
    printf("Enter a constant for variable a > ");
    scanf("%lf", &a); /* a is > 0, but not = 0 */
    printf("Enter a constant for variable b > ");
    scanf("%lf", &b);
    printf("Enter a constant for variable c > ");
    scanf("%lf", &c);

    /* quadratic formula to calculate roots */
    x1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    x2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);

    /* output real roots calculation */
    printf("if a = %f, b = %f, c = %f\n", a, b, c);
    printf("the real roots are\n"
            "%f and %f\n", x1, x2);

    system("PAUSE");
    return(0);
}

/*
Run 1 output:
Quadratic equation calculation for real roots.
Enter a constant for variable a > 1
Enter a constant for variable b > -3
Enter a constant for variable c > -10
if a = 1.000000, b = -3.000000, c = -10.000000
the real roots are
5.000000 and -2.000000
Press any key to continue . . .
*/

/*
Run 2 output:
Quadratic equation calculation for real roots.
Enter a constant for variable a > 1
Enter a constant for variable b > -5
Enter a constant for variable c > 6.25 
if a = 1.000000, b = -5.000000, c = 6.250000
the real roots are
2.500000 and 2.500000
Press any key to continue . . .
*/

/*
Run 3 output:
Quadratic equation calculation for real roots.
Enter a constant for variable a > 3
Enter a constant for variable b > 1
Enter a constant for variable c > -4
if a = 3.000000, b = 1.000000, c = -4.000000
the real roots are
1.000000 and -1.333333
Press any key to contine . . .
*/
